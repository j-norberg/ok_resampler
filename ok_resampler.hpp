// Copyright (c) 2024 Nils Jonas Norberg

// Instantiate these classes with an "up-struct" like "up2x_4"

// mono
template<
	typename UpClass 
	>
class Upsampler2x
{
	float _rb[UpClass::k_buffer_size]; // ring-buffer
	unsigned int _i;

public:

	enum
	{
		k_delay = UpClass::k_kernel_half_size
	};

	Upsampler2x()
	{
		reset();
	}

	void reset()
	{
		_i = 0;
		for (int i = 0; i < UpClass::k_buffer_size; ++i)
			_rb[i] = 0.0f;
	}

	inline void interpolate(float* out_buf, const float inV)
	{
		unsigned int index = (_i - UpClass::k_kernel_half_size) & UpClass::k_mask;
		out_buf[0] = _rb[index];				// get from ring-buffer
		_rb[_i] = inV;							// write to ring-buf
		out_buf[1] = UpClass::interpolate(_rb, _i);	// get outputs from ringbuf
		_i = (_i + 1) & UpClass::k_mask;		// move _i
	}

};

template< typename UpClassA, typename UpClassB>
class Upsampler4x
{
	using UpsamplerA = Upsampler2x<UpClassA>;
	using UpsamplerB = Upsampler2x<UpClassB>;

	UpsamplerA _a;
	UpsamplerB _b;

public:

	enum
	{
		k_delay = UpsamplerA::k_delay + (UpsamplerB::k_delay >> 1) + 1
	};

	void reset()
	{
		_a.reset();
		_b.reset();
	}

	inline void interpolate(
		float* out_buf,
		const float inV
	)
	{
		float v[2];
		_a.interpolate(v, inV);
		_b.interpolate(out_buf + 0, v[0]);
		_b.interpolate(out_buf + 2, v[1]);
	}
};



// mono
// Instantiate these classes with an "down-struct" like "down2x_4"

template< typename DownClass >
class Downsampler2x
{
	float _rb[DownClass::k_buffer_size]; // ring-buffer
	unsigned int _i;

public:

	enum
	{
		k_delay = DownClass::k_kernel_half_size >> 1
	};

	Downsampler2x()
	{
		reset();
	}

	void reset()
	{
		_i = 0;
		for (int i = 0; i < DownClass::k_buffer_size; ++i)
			_rb[i] = 0.0f;
	}

	float decimate( const float v[2])
	{
		// write to buf
		_i = (_i + 1) & DownClass::k_mask;
		_rb[_i] = v[0];
		_i = (_i + 1) & DownClass::k_mask;
		_rb[_i] = v[1];

		// interp
		return DownClass::decimate(_rb, _i);
	}
};

template<
	typename DownClassA,
	typename DownClassB
	>
class Downsampler4x
{
	using DownsamplerA = Downsampler2x<DownClassA>;
	using DownsamplerB = Downsampler2x<DownClassB>;

	DownsamplerA _a;
	DownsamplerB _b;

public:

	enum
	{
		k_delay = (DownsamplerB::k_delay >> 1) + DownsamplerA::k_delay
	};

	void reset()
	{
		_a.reset();
		_b.reset();
	}

	float decimate( float v[4] )
	{
		float t[2];
		t[0] = _b.decimate(v + 0);
		t[1] = _b.decimate(v + 2);
		return _a.decimate(t);
	}
};


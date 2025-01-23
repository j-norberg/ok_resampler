// ======== GENERATED FILE, pls no touch
// ok_resampler.inl

// ======== SIZES ========
// 0008
// 0010
// 0012
// 0014
// 0016
// 0020
// 0024
// 0028
// 0032
// 0064
// 0096
// 0128

// ======== SIZE 0008 ========

struct up2x_0008
{
	enum
	{
		k_kernel_half_size = 8,
		k_buffer_size      = 16,
		k_mask             = 15,
	};

	static float interpolate( const float* rbuf, unsigned int i )
	{
		return
		+ ( rbuf[ ( i -   8 ) & k_mask ] + rbuf[ ( i -   7 ) & k_mask ] ) *  0.63681591517783697753f //  0
		+ ( rbuf[ ( i -   9 ) & k_mask ] + rbuf[ ( i -   6 ) & k_mask ] ) * -0.21144359408970128666f //  1
		+ ( rbuf[ ( i -  10 ) & k_mask ] + rbuf[ ( i -   5 ) & k_mask ] ) *  0.12341417809281420015f //  2
		+ ( rbuf[ ( i -  11 ) & k_mask ] + rbuf[ ( i -   4 ) & k_mask ] ) * -0.08163180958759126693f //  3
		+ ( rbuf[ ( i -  12 ) & k_mask ] + rbuf[ ( i -   3 ) & k_mask ] ) *  0.05417357611755905383f //  4
		+ ( rbuf[ ( i -  13 ) & k_mask ] + rbuf[ ( i -   2 ) & k_mask ] ) * -0.03307525731876355402f //  5
		+ ( rbuf[ ( i -  14 ) & k_mask ] + rbuf[ ( i -   1 ) & k_mask ] ) *  0.01637246446586648405f //  6
		+ ( rbuf[ ( i -  15 ) & k_mask ] + rbuf[ ( i -   0 ) & k_mask ] ) * -0.00462547285802058020f //  7
		;
	}
};

struct dn2x_0008
{
	enum
	{
		k_kernel_half_size = 8,
		k_buffer_size      = 16,
		k_mask             = 15,
	};

	static float decimate( const float* rbuf, unsigned int i )
	{
		return
		+   rbuf[ ( i -   7 ) & k_mask ]                                  *  0.50000076734368747999f //  0 <- center
		+ ( rbuf[ ( i -   8 ) & k_mask ] + rbuf[ ( i -   6 ) & k_mask ] ) *  0.29163137698817409582f //  1
		+ ( rbuf[ ( i -  10 ) & k_mask ] + rbuf[ ( i -   4 ) & k_mask ] ) * -0.04714818548402672366f //  3
		+ ( rbuf[ ( i -  12 ) & k_mask ] + rbuf[ ( i -   2 ) & k_mask ] ) *  0.00570555030047922764f //  5
		+ ( rbuf[ ( i -  14 ) & k_mask ] + rbuf[ ( i -   0 ) & k_mask ] ) * -0.00018912547647025632f //  7
		;
	}
};

// ======== SIZE 0010 ========

struct up2x_0010
{
	enum
	{
		k_kernel_half_size = 10,
		k_buffer_size      = 32,
		k_mask             = 31,
	};

	static float interpolate( const float* rbuf, unsigned int i )
	{
		return
		+ ( rbuf[ ( i -  10 ) & k_mask ] + rbuf[ ( i -   9 ) & k_mask ] ) *  0.63670882633066161471f //  0
		+ ( rbuf[ ( i -  11 ) & k_mask ] + rbuf[ ( i -   8 ) & k_mask ] ) * -0.21181201512894221040f //  1
		+ ( rbuf[ ( i -  12 ) & k_mask ] + rbuf[ ( i -   7 ) & k_mask ] ) *  0.12531244689485124266f //  2
		+ ( rbuf[ ( i -  13 ) & k_mask ] + rbuf[ ( i -   6 ) & k_mask ] ) * -0.08611295863474298373f //  3
		+ ( rbuf[ ( i -  14 ) & k_mask ] + rbuf[ ( i -   5 ) & k_mask ] ) *  0.06197978399033192420f //  4
		+ ( rbuf[ ( i -  15 ) & k_mask ] + rbuf[ ( i -   4 ) & k_mask ] ) * -0.04431638137812844019f //  5
		+ ( rbuf[ ( i -  16 ) & k_mask ] + rbuf[ ( i -   3 ) & k_mask ] ) *  0.03010437695054608842f //  6
		+ ( rbuf[ ( i -  17 ) & k_mask ] + rbuf[ ( i -   2 ) & k_mask ] ) * -0.01832231521178692354f //  7
		+ ( rbuf[ ( i -  18 ) & k_mask ] + rbuf[ ( i -   1 ) & k_mask ] ) *  0.00891931686692288249f //  8
		+ ( rbuf[ ( i -  19 ) & k_mask ] + rbuf[ ( i -   0 ) & k_mask ] ) * -0.00246108067971316253f //  9
		;
	}
};

struct dn2x_0010
{
	enum
	{
		k_kernel_half_size = 10,
		k_buffer_size      = 32,
		k_mask             = 31,
	};

	static float decimate( const float* rbuf, unsigned int i )
	{
		return
		+   rbuf[ ( i -   9 ) & k_mask ]                                  *  0.50000088893763827702f //  0 <- center
		+ ( rbuf[ ( i -  10 ) & k_mask ] + rbuf[ ( i -   8 ) & k_mask ] ) *  0.30098906286275828315f //  1
		+ ( rbuf[ ( i -  12 ) & k_mask ] + rbuf[ ( i -   6 ) & k_mask ] ) * -0.06353278908910635348f //  3
		+ ( rbuf[ ( i -  14 ) & k_mask ] + rbuf[ ( i -   4 ) & k_mask ] ) *  0.01445017407250628882f //  5
		+ ( rbuf[ ( i -  16 ) & k_mask ] + rbuf[ ( i -   2 ) & k_mask ] ) * -0.00199895782264855127f //  7
		+ ( rbuf[ ( i -  18 ) & k_mask ] + rbuf[ ( i -   0 ) & k_mask ] ) *  0.00009206550767126178f //  9
		;
	}
};

// ======== SIZE 0012 ========

struct up2x_0012
{
	enum
	{
		k_kernel_half_size = 12,
		k_buffer_size      = 32,
		k_mask             = 31,
	};

	static float interpolate( const float* rbuf, unsigned int i )
	{
		return
		+ ( rbuf[ ( i -  12 ) & k_mask ] + rbuf[ ( i -  11 ) & k_mask ] ) *  0.63666691765753979926f //  0
		+ ( rbuf[ ( i -  13 ) & k_mask ] + rbuf[ ( i -  10 ) & k_mask ] ) * -0.21197674928981807829f //  1
		+ ( rbuf[ ( i -  14 ) & k_mask ] + rbuf[ ( i -   9 ) & k_mask ] ) *  0.12615709991735157836f //  2
		+ ( rbuf[ ( i -  15 ) & k_mask ] + rbuf[ ( i -   8 ) & k_mask ] ) * -0.08813235896284790649f //  3
		+ ( rbuf[ ( i -  16 ) & k_mask ] + rbuf[ ( i -   7 ) & k_mask ] ) *  0.06559774978455981675f //  4
		+ ( rbuf[ ( i -  17 ) & k_mask ] + rbuf[ ( i -   6 ) & k_mask ] ) * -0.04980800730147836447f //  5
		+ ( rbuf[ ( i -  18 ) & k_mask ] + rbuf[ ( i -   5 ) & k_mask ] ) *  0.03749600837165798645f //  6
		+ ( rbuf[ ( i -  19 ) & k_mask ] + rbuf[ ( i -   4 ) & k_mask ] ) * -0.02726673235408347967f //  7
		+ ( rbuf[ ( i -  20 ) & k_mask ] + rbuf[ ( i -   3 ) & k_mask ] ) *  0.01854569170292679967f //  8
		+ ( rbuf[ ( i -  21 ) & k_mask ] + rbuf[ ( i -   2 ) & k_mask ] ) * -0.01119959151769598163f //  9
		+ ( rbuf[ ( i -  22 ) & k_mask ] + rbuf[ ( i -   1 ) & k_mask ] ) *  0.00538106541201466802f // 10
		+ ( rbuf[ ( i -  23 ) & k_mask ] + rbuf[ ( i -   0 ) & k_mask ] ) * -0.00146109342012676379f // 11
		;
	}
};

struct dn2x_0012
{
	enum
	{
		k_kernel_half_size = 12,
		k_buffer_size      = 32,
		k_mask             = 31,
	};

	static float decimate( const float* rbuf, unsigned int i )
	{
		return
		+   rbuf[ ( i -  11 ) & k_mask ]                                  *  0.49999758389507170664f //  0 <- center
		+ ( rbuf[ ( i -  12 ) & k_mask ] + rbuf[ ( i -  10 ) & k_mask ] ) *  0.30618529195154003952f //  1
		+ ( rbuf[ ( i -  14 ) & k_mask ] + rbuf[ ( i -   8 ) & k_mask ] ) * -0.07447972189870033510f //  3
		+ ( rbuf[ ( i -  16 ) & k_mask ] + rbuf[ ( i -   6 ) & k_mask ] ) *  0.02319623208988516941f //  5
		+ ( rbuf[ ( i -  18 ) & k_mask ] + rbuf[ ( i -   4 ) & k_mask ] ) * -0.00573860856504267679f //  7
		+ ( rbuf[ ( i -  20 ) & k_mask ] + rbuf[ ( i -   2 ) & k_mask ] ) *  0.00089146024878013045f //  9
		+ ( rbuf[ ( i -  22 ) & k_mask ] + rbuf[ ( i -   0 ) & k_mask ] ) * -0.00005344577399815391f // 11
		;
	}
};

// ======== SIZE 0014 ========

struct up2x_0014
{
	enum
	{
		k_kernel_half_size = 14,
		k_buffer_size      = 32,
		k_mask             = 31,
	};

	static float interpolate( const float* rbuf, unsigned int i )
	{
		return
		+ ( rbuf[ ( i -  14 ) & k_mask ] + rbuf[ ( i -  13 ) & k_mask ] ) *  0.63664748564746020953f //  0
		+ ( rbuf[ ( i -  15 ) & k_mask ] + rbuf[ ( i -  12 ) & k_mask ] ) * -0.21206118047372760071f //  1
		+ ( rbuf[ ( i -  16 ) & k_mask ] + rbuf[ ( i -  11 ) & k_mask ] ) *  0.12658813336495766677f //  2
		+ ( rbuf[ ( i -  17 ) & k_mask ] + rbuf[ ( i -  10 ) & k_mask ] ) * -0.08916862114128705497f //  3
		+ ( rbuf[ ( i -  18 ) & k_mask ] + rbuf[ ( i -   9 ) & k_mask ] ) *  0.06747733047434527343f //  4
		+ ( rbuf[ ( i -  19 ) & k_mask ] + rbuf[ ( i -   8 ) & k_mask ] ) * -0.05272409402483425878f //  5
		+ ( rbuf[ ( i -  20 ) & k_mask ] + rbuf[ ( i -   7 ) & k_mask ] ) *  0.04156632233090527123f //  6
		+ ( rbuf[ ( i -  21 ) & k_mask ] + rbuf[ ( i -   6 ) & k_mask ] ) * -0.03249554874658911602f //  7
		+ ( rbuf[ ( i -  22 ) & k_mask ] + rbuf[ ( i -   5 ) & k_mask ] ) *  0.02477822962435316870f //  8
		+ ( rbuf[ ( i -  23 ) & k_mask ] + rbuf[ ( i -   4 ) & k_mask ] ) * -0.01806871693032373327f //  9
		+ ( rbuf[ ( i -  24 ) & k_mask ] + rbuf[ ( i -   3 ) & k_mask ] ) *  0.01224628833706310586f // 10
		+ ( rbuf[ ( i -  25 ) & k_mask ] + rbuf[ ( i -   2 ) & k_mask ] ) * -0.00733985198147705121f // 11
		+ ( rbuf[ ( i -  26 ) & k_mask ] + rbuf[ ( i -   1 ) & k_mask ] ) *  0.00349122807537943780f // 12
		+ ( rbuf[ ( i -  27 ) & k_mask ] + rbuf[ ( i -   0 ) & k_mask ] ) * -0.00093700455622532694f // 13
		;
	}
};

struct dn2x_0014
{
	enum
	{
		k_kernel_half_size = 14,
		k_buffer_size      = 32,
		k_mask             = 31,
	};

	static float decimate( const float* rbuf, unsigned int i )
	{
		return
		+   rbuf[ ( i -  13 ) & k_mask ]                                  *  0.50000197940484492065f //  0 <- center
		+ ( rbuf[ ( i -  14 ) & k_mask ] + rbuf[ ( i -  12 ) & k_mask ] ) *  0.30936219214231469588f //  1
		+ ( rbuf[ ( i -  16 ) & k_mask ] + rbuf[ ( i -  10 ) & k_mask ] ) * -0.08189249410013602071f //  3
		+ ( rbuf[ ( i -  18 ) & k_mask ] + rbuf[ ( i -   8 ) & k_mask ] ) *  0.03057603683955631771f //  5
		+ ( rbuf[ ( i -  20 ) & k_mask ] + rbuf[ ( i -   6 ) & k_mask ] ) * -0.01032157541952298009f //  7
		+ ( rbuf[ ( i -  22 ) & k_mask ] + rbuf[ ( i -   4 ) & k_mask ] ) *  0.00270711772583424751f //  9
		+ ( rbuf[ ( i -  24 ) & k_mask ] + rbuf[ ( i -   2 ) & k_mask ] ) * -0.00046707179323408486f // 11
		+ ( rbuf[ ( i -  26 ) & k_mask ] + rbuf[ ( i -   0 ) & k_mask ] ) *  0.00003480490276538814f // 13
		;
	}
};

// ======== SIZE 0016 ========

struct up2x_0016
{
	enum
	{
		k_kernel_half_size = 16,
		k_buffer_size      = 32,
		k_mask             = 31,
	};

	static float interpolate( const float* rbuf, unsigned int i )
	{
		return
		+ ( rbuf[ ( i -  16 ) & k_mask ] + rbuf[ ( i -  15 ) & k_mask ] ) *  0.63663734503663360620f //  0
		+ ( rbuf[ ( i -  17 ) & k_mask ] + rbuf[ ( i -  14 ) & k_mask ] ) * -0.21210884163484841625f //  1
		+ ( rbuf[ ( i -  18 ) & k_mask ] + rbuf[ ( i -  13 ) & k_mask ] ) *  0.12683058179726469650f //  2
		+ ( rbuf[ ( i -  19 ) & k_mask ] + rbuf[ ( i -  12 ) & k_mask ] ) * -0.08975311999189919399f //  3
		+ ( rbuf[ ( i -  20 ) & k_mask ] + rbuf[ ( i -  11 ) & k_mask ] ) *  0.06854420633817270847f //  4
		+ ( rbuf[ ( i -  21 ) & k_mask ] + rbuf[ ( i -  10 ) & k_mask ] ) * -0.05439754544900122363f //  5
		+ ( rbuf[ ( i -  22 ) & k_mask ] + rbuf[ ( i -   9 ) & k_mask ] ) *  0.04394326415025039123f //  6
		+ ( rbuf[ ( i -  23 ) & k_mask ] + rbuf[ ( i -   8 ) & k_mask ] ) * -0.03563182645868098741f //  7
		+ ( rbuf[ ( i -  24 ) & k_mask ] + rbuf[ ( i -   7 ) & k_mask ] ) *  0.02867208631139250147f //  8
		+ ( rbuf[ ( i -  25 ) & k_mask ] + rbuf[ ( i -   6 ) & k_mask ] ) * -0.02264148180881929429f //  9
		+ ( rbuf[ ( i -  26 ) & k_mask ] + rbuf[ ( i -   5 ) & k_mask ] ) *  0.01732027662891053033f // 10
		+ ( rbuf[ ( i -  27 ) & k_mask ] + rbuf[ ( i -   4 ) & k_mask ] ) * -0.01261347207351274508f // 11
		+ ( rbuf[ ( i -  28 ) & k_mask ] + rbuf[ ( i -   3 ) & k_mask ] ) *  0.00851129419292139845f // 12
		+ ( rbuf[ ( i -  29 ) & k_mask ] + rbuf[ ( i -   2 ) & k_mask ] ) * -0.00506825409621762622f // 13
		+ ( rbuf[ ( i -  30 ) & k_mask ] + rbuf[ ( i -   1 ) & k_mask ] ) *  0.00239181508183858001f // 14
		+ ( rbuf[ ( i -  31 ) & k_mask ] + rbuf[ ( i -   0 ) & k_mask ] ) * -0.00063632802440502685f // 15
		;
	}
};

struct dn2x_0016
{
	enum
	{
		k_kernel_half_size = 16,
		k_buffer_size      = 32,
		k_mask             = 31,
	};

	static float decimate( const float* rbuf, unsigned int i )
	{
		return
		+   rbuf[ ( i -  15 ) & k_mask ]                                  *  0.49999879163366356405f //  0 <- center
		+ ( rbuf[ ( i -  16 ) & k_mask ] + rbuf[ ( i -  14 ) & k_mask ] ) *  0.31143657638926075526f //  1
		+ ( rbuf[ ( i -  18 ) & k_mask ] + rbuf[ ( i -  12 ) & k_mask ] ) * -0.08705929589134032975f //  3
		+ ( rbuf[ ( i -  20 ) & k_mask ] + rbuf[ ( i -  10 ) & k_mask ] ) *  0.03645552031171455515f //  5
		+ ( rbuf[ ( i -  22 ) & k_mask ] + rbuf[ ( i -   8 ) & k_mask ] ) * -0.01486514195644820548f //  7
		+ ( rbuf[ ( i -  24 ) & k_mask ] + rbuf[ ( i -   6 ) & k_mask ] ) *  0.00522941206990960947f //  9
		+ ( rbuf[ ( i -  26 ) & k_mask ] + rbuf[ ( i -   4 ) & k_mask ] ) * -0.00144604101997957367f // 11
		+ ( rbuf[ ( i -  28 ) & k_mask ] + rbuf[ ( i -   2 ) & k_mask ] ) *  0.00027413796977893249f // 13
		+ ( rbuf[ ( i -  30 ) & k_mask ] + rbuf[ ( i -   0 ) & k_mask ] ) * -0.00002456368972736888f // 15
		;
	}
};

// ======== SIZE 0020 ========

struct up2x_0020
{
	enum
	{
		k_kernel_half_size = 20,
		k_buffer_size      = 64,
		k_mask             = 63,
	};

	static float interpolate( const float* rbuf, unsigned int i )
	{
		return
		+ ( rbuf[ ( i -  20 ) & k_mask ] + rbuf[ ( i -  19 ) & k_mask ] ) *  0.63662805756268925350f //  0
		+ ( rbuf[ ( i -  21 ) & k_mask ] + rbuf[ ( i -  18 ) & k_mask ] ) * -0.21215630349853731307f //  1
		+ ( rbuf[ ( i -  22 ) & k_mask ] + rbuf[ ( i -  17 ) & k_mask ] ) *  0.12707108761512428408f //  2
		+ ( rbuf[ ( i -  23 ) & k_mask ] + rbuf[ ( i -  16 ) & k_mask ] ) * -0.09033400996651561043f //  3
		+ ( rbuf[ ( i -  24 ) & k_mask ] + rbuf[ ( i -  15 ) & k_mask ] ) *  0.06960919475970779591f //  4
		+ ( rbuf[ ( i -  25 ) & k_mask ] + rbuf[ ( i -  14 ) & k_mask ] ) * -0.05608080523052010741f //  5
		+ ( rbuf[ ( i -  26 ) & k_mask ] + rbuf[ ( i -  13 ) & k_mask ] ) *  0.04636263417755900895f //  6
		+ ( rbuf[ ( i -  27 ) & k_mask ] + rbuf[ ( i -  12 ) & k_mask ] ) * -0.03888049954005445147f //  7
		+ ( rbuf[ ( i -  28 ) & k_mask ] + rbuf[ ( i -  11 ) & k_mask ] ) *  0.03280866439520244843f //  8
		+ ( rbuf[ ( i -  29 ) & k_mask ] + rbuf[ ( i -  10 ) & k_mask ] ) * -0.02767836864485203816f //  9
		+ ( rbuf[ ( i -  30 ) & k_mask ] + rbuf[ ( i -   9 ) & k_mask ] ) *  0.02321039793197304454f // 10
		+ ( rbuf[ ( i -  31 ) & k_mask ] + rbuf[ ( i -   8 ) & k_mask ] ) * -0.01923531929921256170f // 11
		+ ( rbuf[ ( i -  32 ) & k_mask ] + rbuf[ ( i -   7 ) & k_mask ] ) *  0.01565229021397009437f // 12
		+ ( rbuf[ ( i -  33 ) & k_mask ] + rbuf[ ( i -   6 ) & k_mask ] ) * -0.01240643995512995430f // 13
		+ ( rbuf[ ( i -  34 ) & k_mask ] + rbuf[ ( i -   5 ) & k_mask ] ) *  0.00947585739375438746f // 14
		+ ( rbuf[ ( i -  35 ) & k_mask ] + rbuf[ ( i -   4 ) & k_mask ] ) * -0.00686384679627112006f // 15
		+ ( rbuf[ ( i -  36 ) & k_mask ] + rbuf[ ( i -   3 ) & k_mask ] ) *  0.00459421673152148480f // 16
		+ ( rbuf[ ( i -  37 ) & k_mask ] + rbuf[ ( i -   2 ) & k_mask ] ) * -0.00270838884012483119f // 17
		+ ( rbuf[ ( i -  38 ) & k_mask ] + rbuf[ ( i -   1 ) & k_mask ] ) *  0.00126363786960706557f // 18
		+ ( rbuf[ ( i -  39 ) & k_mask ] + rbuf[ ( i -   0 ) & k_mask ] ) * -0.00033205687989093459f // 19
		;
	}
};

struct dn2x_0020
{
	enum
	{
		k_kernel_half_size = 20,
		k_buffer_size      = 64,
		k_mask             = 63,
	};

	static float decimate( const float* rbuf, unsigned int i )
	{
		return
		+   rbuf[ ( i -  19 ) & k_mask ]                                  *  0.49999996019640974287f //  0 <- center
		+ ( rbuf[ ( i -  20 ) & k_mask ] + rbuf[ ( i -  18 ) & k_mask ] ) *  0.31389552293600975208f //  1
		+ ( rbuf[ ( i -  22 ) & k_mask ] + rbuf[ ( i -  16 ) & k_mask ] ) * -0.09351923025092204189f //  3
		+ ( rbuf[ ( i -  24 ) & k_mask ] + rbuf[ ( i -  14 ) & k_mask ] ) *  0.04468804552376185596f //  5
		+ ( rbuf[ ( i -  26 ) & k_mask ] + rbuf[ ( i -  12 ) & k_mask ] ) * -0.02250280537323878435f //  7
		+ ( rbuf[ ( i -  28 ) & k_mask ] + rbuf[ ( i -  10 ) & k_mask ] ) *  0.01079994650200749758f //  9
		+ ( rbuf[ ( i -  30 ) & k_mask ] + rbuf[ ( i -   8 ) & k_mask ] ) * -0.00468710671632403559f // 11
		+ ( rbuf[ ( i -  32 ) & k_mask ] + rbuf[ ( i -   6 ) & k_mask ] ) *  0.00175606362130098959f // 13
		+ ( rbuf[ ( i -  34 ) & k_mask ] + rbuf[ ( i -   4 ) & k_mask ] ) * -0.00053487869133418036f // 15
		+ ( rbuf[ ( i -  36 ) & k_mask ] + rbuf[ ( i -   2 ) & k_mask ] ) *  0.00011886238442903274f // 17
		+ ( rbuf[ ( i -  38 ) & k_mask ] + rbuf[ ( i -   0 ) & k_mask ] ) * -0.00001440003389486210f // 19
		;
	}
};

// ======== SIZE 0024 ========

struct up2x_0024
{
	enum
	{
		k_kernel_half_size = 24,
		k_buffer_size      = 64,
		k_mask             = 63,
	};

	static float interpolate( const float* rbuf, unsigned int i )
	{
		return
		+ ( rbuf[ ( i -  24 ) & k_mask ] + rbuf[ ( i -  23 ) & k_mask ] ) *  0.63662429228866301845f //  0
		+ ( rbuf[ ( i -  25 ) & k_mask ] + rbuf[ ( i -  22 ) & k_mask ] ) * -0.21217739713700825566f //  1
		+ ( rbuf[ ( i -  26 ) & k_mask ] + rbuf[ ( i -  21 ) & k_mask ] ) *  0.12717753436424397706f //  2
		+ ( rbuf[ ( i -  27 ) & k_mask ] + rbuf[ ( i -  20 ) & k_mask ] ) * -0.09059141531083678145f //  3
		+ ( rbuf[ ( i -  28 ) & k_mask ] + rbuf[ ( i -  19 ) & k_mask ] ) *  0.07008258533151255631f //  4
		+ ( rbuf[ ( i -  29 ) & k_mask ] + rbuf[ ( i -  18 ) & k_mask ] ) * -0.05683302890663644719f //  5
		+ ( rbuf[ ( i -  30 ) & k_mask ] + rbuf[ ( i -  17 ) & k_mask ] ) *  0.04745270838517320899f //  6
		+ ( rbuf[ ( i -  31 ) & k_mask ] + rbuf[ ( i -  16 ) & k_mask ] ) * -0.04036163163642003671f //  7
		+ ( rbuf[ ( i -  32 ) & k_mask ] + rbuf[ ( i -  15 ) & k_mask ] ) *  0.03472589539152232813f //  8
		+ ( rbuf[ ( i -  33 ) & k_mask ] + rbuf[ ( i -  14 ) & k_mask ] ) * -0.03006582745072229612f //  9
		+ ( rbuf[ ( i -  34 ) & k_mask ] + rbuf[ ( i -  13 ) & k_mask ] ) *  0.02608816184585141876f // 10
		+ ( rbuf[ ( i -  35 ) & k_mask ] + rbuf[ ( i -  12 ) & k_mask ] ) * -0.02260587907226643822f // 11
		+ ( rbuf[ ( i -  36 ) & k_mask ] + rbuf[ ( i -  11 ) & k_mask ] ) *  0.01949661895134030196f // 12
		+ ( rbuf[ ( i -  37 ) & k_mask ] + rbuf[ ( i -  10 ) & k_mask ] ) * -0.01667966550025756084f // 13
		+ ( rbuf[ ( i -  38 ) & k_mask ] + rbuf[ ( i -   9 ) & k_mask ] ) *  0.01410253801248421632f // 14
		+ ( rbuf[ ( i -  39 ) & k_mask ] + rbuf[ ( i -   8 ) & k_mask ] ) * -0.01173285006022063010f // 15
		+ ( rbuf[ ( i -  40 ) & k_mask ] + rbuf[ ( i -   7 ) & k_mask ] ) *  0.00955320154284438477f // 16
		+ ( rbuf[ ( i -  41 ) & k_mask ] + rbuf[ ( i -   6 ) & k_mask ] ) * -0.00755789056294736347f // 17
		+ ( rbuf[ ( i -  42 ) & k_mask ] + rbuf[ ( i -   5 ) & k_mask ] ) *  0.00575075654655286383f // 18
		+ ( rbuf[ ( i -  43 ) & k_mask ] + rbuf[ ( i -   4 ) & k_mask ] ) * -0.00414374851985843066f // 19
		+ ( rbuf[ ( i -  44 ) & k_mask ] + rbuf[ ( i -   3 ) & k_mask ] ) *  0.00275597092808099091f // 20
		+ ( rbuf[ ( i -  45 ) & k_mask ] + rbuf[ ( i -   2 ) & k_mask ] ) * -0.00161305151758029883f // 21
		+ ( rbuf[ ( i -  46 ) & k_mask ] + rbuf[ ( i -   1 ) & k_mask ] ) *  0.00074673108379626630f // 22
		+ ( rbuf[ ( i -  47 ) & k_mask ] + rbuf[ ( i -   0 ) & k_mask ] ) * -0.00019460899731102099f // 23
		;
	}
};

struct dn2x_0024
{
	enum
	{
		k_kernel_half_size = 24,
		k_buffer_size      = 64,
		k_mask             = 63,
	};

	static float decimate( const float* rbuf, unsigned int i )
	{
		return
		+   rbuf[ ( i -  23 ) & k_mask ]                                  *  0.50000056243899426711f //  0 <- center
		+ ( rbuf[ ( i -  24 ) & k_mask ] + rbuf[ ( i -  22 ) & k_mask ] ) *  0.31523870892940275557f //  1
		+ ( rbuf[ ( i -  26 ) & k_mask ] + rbuf[ ( i -  20 ) & k_mask ] ) * -0.09721041915836062253f //  3
		+ ( rbuf[ ( i -  28 ) & k_mask ] + rbuf[ ( i -  18 ) & k_mask ] ) *  0.04984451201423037436f //  5
		+ ( rbuf[ ( i -  30 ) & k_mask ] + rbuf[ ( i -  16 ) & k_mask ] ) * -0.02801987983146851657f //  7
		+ ( rbuf[ ( i -  32 ) & k_mask ] + rbuf[ ( i -  14 ) & k_mask ] ) *  0.01571605538742914046f //  9
		+ ( rbuf[ ( i -  34 ) & k_mask ] + rbuf[ ( i -  12 ) & k_mask ] ) * -0.00843276813428272057f // 11
		+ ( rbuf[ ( i -  36 ) & k_mask ] + rbuf[ ( i -  10 ) & k_mask ] ) *  0.00420802742771578600f // 13
		+ ( rbuf[ ( i -  38 ) & k_mask ] + rbuf[ ( i -   8 ) & k_mask ] ) * -0.00190184932076491631f // 15
		+ ( rbuf[ ( i -  40 ) & k_mask ] + rbuf[ ( i -   6 ) & k_mask ] ) *  0.00075394680599329090f // 17
		+ ( rbuf[ ( i -  42 ) & k_mask ] + rbuf[ ( i -   4 ) & k_mask ] ) * -0.00024992415646606678f // 19
		+ ( rbuf[ ( i -  44 ) & k_mask ] + rbuf[ ( i -   2 ) & k_mask ] ) *  0.00006304179965499327f // 21
		+ ( rbuf[ ( i -  46 ) & k_mask ] + rbuf[ ( i -   0 ) & k_mask ] ) * -0.00000973298258063757f // 23
		;
	}
};

// ======== SIZE 0028 ========

struct up2x_0028
{
	enum
	{
		k_kernel_half_size = 28,
		k_buffer_size      = 64,
		k_mask             = 63,
	};

	static float interpolate( const float* rbuf, unsigned int i )
	{
		return
		+ ( rbuf[ ( i -  28 ) & k_mask ] + rbuf[ ( i -  27 ) & k_mask ] ) *  0.63662249513113278176f //  0
		+ ( rbuf[ ( i -  29 ) & k_mask ] + rbuf[ ( i -  26 ) & k_mask ] ) * -0.21218816504386880939f //  1
		+ ( rbuf[ ( i -  30 ) & k_mask ] + rbuf[ ( i -  25 ) & k_mask ] ) *  0.12723171382323969492f //  2
		+ ( rbuf[ ( i -  31 ) & k_mask ] + rbuf[ ( i -  24 ) & k_mask ] ) * -0.09072248893600916297f //  3
		+ ( rbuf[ ( i -  32 ) & k_mask ] + rbuf[ ( i -  23 ) & k_mask ] ) *  0.07032398020148239448f //  4
		+ ( rbuf[ ( i -  33 ) & k_mask ] + rbuf[ ( i -  22 ) & k_mask ] ) * -0.05721754292279515597f //  5
		+ ( rbuf[ ( i -  34 ) & k_mask ] + rbuf[ ( i -  21 ) & k_mask ] ) *  0.04801198821915442227f //  6
		+ ( rbuf[ ( i -  35 ) & k_mask ] + rbuf[ ( i -  20 ) & k_mask ] ) * -0.04112556450480902431f //  7
		+ ( rbuf[ ( i -  36 ) & k_mask ] + rbuf[ ( i -  19 ) & k_mask ] ) *  0.03572189034685496062f //  8
		+ ( rbuf[ ( i -  37 ) & k_mask ] + rbuf[ ( i -  18 ) & k_mask ] ) * -0.03131797979115531760f //  9
		+ ( rbuf[ ( i -  38 ) & k_mask ] + rbuf[ ( i -  17 ) & k_mask ] ) *  0.02761629851096468816f // 10
		+ ( rbuf[ ( i -  39 ) & k_mask ] + rbuf[ ( i -  16 ) & k_mask ] ) * -0.02442448419052534181f // 11
		+ ( rbuf[ ( i -  40 ) & k_mask ] + rbuf[ ( i -  15 ) & k_mask ] ) *  0.02161363917205055135f // 12
		+ ( rbuf[ ( i -  41 ) & k_mask ] + rbuf[ ( i -  14 ) & k_mask ] ) * -0.01909519493322806016f // 13
		+ ( rbuf[ ( i -  42 ) & k_mask ] + rbuf[ ( i -  13 ) & k_mask ] ) *  0.01680738268395770563f // 14
		+ ( rbuf[ ( i -  43 ) & k_mask ] + rbuf[ ( i -  12 ) & k_mask ] ) * -0.01470697183492751872f // 15
		+ ( rbuf[ ( i -  44 ) & k_mask ] + rbuf[ ( i -  11 ) & k_mask ] ) *  0.01276404148330859481f // 16
		+ ( rbuf[ ( i -  45 ) & k_mask ] + rbuf[ ( i -  10 ) & k_mask ] ) * -0.01095857170872151405f // 17
		+ ( rbuf[ ( i -  46 ) & k_mask ] + rbuf[ ( i -   9 ) & k_mask ] ) *  0.00927816610261459479f // 18
		+ ( rbuf[ ( i -  47 ) & k_mask ] + rbuf[ ( i -   8 ) & k_mask ] ) * -0.00771649944726526382f // 19
		+ ( rbuf[ ( i -  48 ) & k_mask ] + rbuf[ ( i -   7 ) & k_mask ] ) *  0.00627224293233799579f // 20
		+ ( rbuf[ ( i -  49 ) & k_mask ] + rbuf[ ( i -   6 ) & k_mask ] ) * -0.00494831143165493700f // 21
		+ ( rbuf[ ( i -  50 ) & k_mask ] + rbuf[ ( i -   5 ) & k_mask ] ) *  0.00375133264366849786f // 22
		+ ( rbuf[ ( i -  51 ) & k_mask ] + rbuf[ ( i -   4 ) & k_mask ] ) * -0.00269127200857582514f // 23
		+ ( rbuf[ ( i -  52 ) & k_mask ] + rbuf[ ( i -   3 ) & k_mask ] ) *  0.00178116889446314685f // 24
		+ ( rbuf[ ( i -  53 ) & k_mask ] + rbuf[ ( i -   2 ) & k_mask ] ) * -0.00103695350804044084f // 25
		+ ( rbuf[ ( i -  54 ) & k_mask ] + rbuf[ ( i -   1 ) & k_mask ] ) *  0.00047732320648972656f // 26
		+ ( rbuf[ ( i -  55 ) & k_mask ] + rbuf[ ( i -   0 ) & k_mask ] ) * -0.00012366309014350468f // 27
		;
	}
};

struct dn2x_0028
{
	enum
	{
		k_kernel_half_size = 28,
		k_buffer_size      = 64,
		k_mask             = 63,
	};

	static float decimate( const float* rbuf, unsigned int i )
	{
		return
		+   rbuf[ ( i -  27 ) & k_mask ]                                  *  0.50000084354568774536f //  0 <- center
		+ ( rbuf[ ( i -  28 ) & k_mask ] + rbuf[ ( i -  26 ) & k_mask ] ) *  0.31605111209545838635f //  1
		+ ( rbuf[ ( i -  30 ) & k_mask ] + rbuf[ ( i -  24 ) & k_mask ] ) * -0.09950039883526021200f //  3
		+ ( rbuf[ ( i -  32 ) & k_mask ] + rbuf[ ( i -  22 ) & k_mask ] ) *  0.05321241204299937549f //  5
		+ ( rbuf[ ( i -  34 ) & k_mask ] + rbuf[ ( i -  20 ) & k_mask ] ) * -0.03192008891005259502f //  7
		+ ( rbuf[ ( i -  36 ) & k_mask ] + rbuf[ ( i -  18 ) & k_mask ] ) *  0.01959368752034148717f //  9
		+ ( rbuf[ ( i -  38 ) & k_mask ] + rbuf[ ( i -  16 ) & k_mask ] ) * -0.01184517348342504529f // 11
		+ ( rbuf[ ( i -  40 ) & k_mask ] + rbuf[ ( i -  14 ) & k_mask ] ) *  0.00689664106693657891f // 13
		+ ( rbuf[ ( i -  42 ) & k_mask ] + rbuf[ ( i -  12 ) & k_mask ] ) * -0.00380171432509786343f // 15
		+ ( rbuf[ ( i -  44 ) & k_mask ] + rbuf[ ( i -  10 ) & k_mask ] ) *  0.00195160055263804639f // 17
		+ ( rbuf[ ( i -  46 ) & k_mask ] + rbuf[ ( i -   8 ) & k_mask ] ) * -0.00091522067164753686f // 19
		+ ( rbuf[ ( i -  48 ) & k_mask ] + rbuf[ ( i -   6 ) & k_mask ] ) *  0.00038205688307404800f // 21
		+ ( rbuf[ ( i -  50 ) & k_mask ] + rbuf[ ( i -   4 ) & k_mask ] ) * -0.00013622579002056613f // 23
		+ ( rbuf[ ( i -  52 ) & k_mask ] + rbuf[ ( i -   2 ) & k_mask ] ) *  0.00003809278446174301f // 25
		+ ( rbuf[ ( i -  54 ) & k_mask ] + rbuf[ ( i -   0 ) & k_mask ] ) * -0.00000720270324979914f // 27
		;
	}
};

// ======== SIZE 0032 ========

struct up2x_0032
{
	enum
	{
		k_kernel_half_size = 32,
		k_buffer_size      = 64,
		k_mask             = 63,
	};

	static float interpolate( const float* rbuf, unsigned int i )
	{
		return
		+ ( rbuf[ ( i -  32 ) & k_mask ] + rbuf[ ( i -  31 ) & k_mask ] ) *  0.63662153430012702326f //  0
		+ ( rbuf[ ( i -  33 ) & k_mask ] + rbuf[ ( i -  30 ) & k_mask ] ) * -0.21219422619940297992f //  1
		+ ( rbuf[ ( i -  34 ) & k_mask ] + rbuf[ ( i -  29 ) & k_mask ] ) *  0.12726214437743646468f //  2
		+ ( rbuf[ ( i -  35 ) & k_mask ] + rbuf[ ( i -  28 ) & k_mask ] ) * -0.09079612093773462012f //  3
		+ ( rbuf[ ( i -  36 ) & k_mask ] + rbuf[ ( i -  27 ) & k_mask ] ) *  0.07045968443891036104f //  4
		+ ( rbuf[ ( i -  37 ) & k_mask ] + rbuf[ ( i -  26 ) & k_mask ] ) * -0.05743397831913285567f //  5
		+ ( rbuf[ ( i -  38 ) & k_mask ] + rbuf[ ( i -  25 ) & k_mask ] ) *  0.04832740284323923385f //  6
		+ ( rbuf[ ( i -  39 ) & k_mask ] + rbuf[ ( i -  24 ) & k_mask ] ) * -0.04155757195135743182f //  7
		+ ( rbuf[ ( i -  40 ) & k_mask ] + rbuf[ ( i -  23 ) & k_mask ] ) *  0.03628720803132472889f //  8
		+ ( rbuf[ ( i -  41 ) & k_mask ] + rbuf[ ( i -  22 ) & k_mask ] ) * -0.03203212561842137124f //  9
		+ ( rbuf[ ( i -  42 ) & k_mask ] + rbuf[ ( i -  21 ) & k_mask ] ) *  0.02849324473754209774f // 10
		+ ( rbuf[ ( i -  43 ) & k_mask ] + rbuf[ ( i -  20 ) & k_mask ] ) * -0.02547626801849599970f // 11
		+ ( rbuf[ ( i -  44 ) & k_mask ] + rbuf[ ( i -  19 ) & k_mask ] ) *  0.02284992987148244670f // 12
		+ ( rbuf[ ( i -  45 ) & k_mask ] + rbuf[ ( i -  18 ) & k_mask ] ) * -0.02052281739524467255f // 13
		+ ( rbuf[ ( i -  46 ) & k_mask ] + rbuf[ ( i -  17 ) & k_mask ] ) *  0.01842979735384953077f // 14
		+ ( rbuf[ ( i -  47 ) & k_mask ] + rbuf[ ( i -  16 ) & k_mask ] ) * -0.01652371099755273187f // 15
		+ ( rbuf[ ( i -  48 ) & k_mask ] + rbuf[ ( i -  15 ) & k_mask ] ) *  0.01477010188480408319f // 16
		+ ( rbuf[ ( i -  49 ) & k_mask ] + rbuf[ ( i -  14 ) & k_mask ] ) * -0.01314376350493679131f // 17
		+ ( rbuf[ ( i -  50 ) & k_mask ] + rbuf[ ( i -  13 ) & k_mask ] ) *  0.01162641812830901220f // 18
		+ ( rbuf[ ( i -  51 ) & k_mask ] + rbuf[ ( i -  12 ) & k_mask ] ) * -0.01020512080224811671f // 19
		+ ( rbuf[ ( i -  52 ) & k_mask ] + rbuf[ ( i -  11 ) & k_mask ] ) *  0.00887114088203576519f // 20
		+ ( rbuf[ ( i -  53 ) & k_mask ] + rbuf[ ( i -  10 ) & k_mask ] ) * -0.00761916562040888899f // 21
		+ ( rbuf[ ( i -  54 ) & k_mask ] + rbuf[ ( i -   9 ) & k_mask ] ) *  0.00644672561959384362f // 22
		+ ( rbuf[ ( i -  55 ) & k_mask ] + rbuf[ ( i -   8 ) & k_mask ] ) * -0.00535377605916172519f // 23
		+ ( rbuf[ ( i -  56 ) & k_mask ] + rbuf[ ( i -   7 ) & k_mask ] ) *  0.00434238919232737743f // 24
		+ ( rbuf[ ( i -  57 ) & k_mask ] + rbuf[ ( i -   6 ) & k_mask ] ) * -0.00341652756641342868f // 25
		+ ( rbuf[ ( i -  58 ) & k_mask ] + rbuf[ ( i -   5 ) & k_mask ] ) *  0.00258187664411501164f // 26
		+ ( rbuf[ ( i -  59 ) & k_mask ] + rbuf[ ( i -   4 ) & k_mask ] ) * -0.00184572170536135508f // 27
		+ ( rbuf[ ( i -  60 ) & k_mask ] + rbuf[ ( i -   3 ) & k_mask ] ) *  0.00121685815383816977f // 28
		+ ( rbuf[ ( i -  61 ) & k_mask ] + rbuf[ ( i -   2 ) & k_mask ] ) * -0.00070552730164115754f // 29
		+ ( rbuf[ ( i -  62 ) & k_mask ] + rbuf[ ( i -   1 ) & k_mask ] ) *  0.00032337178462070752f // 30
		+ ( rbuf[ ( i -  63 ) & k_mask ] + rbuf[ ( i -   0 ) & k_mask ] ) * -0.00008340624604195845f // 31
		;
	}
};

struct dn2x_0032
{
	enum
	{
		k_kernel_half_size = 32,
		k_buffer_size      = 64,
		k_mask             = 63,
	};

	static float decimate( const float* rbuf, unsigned int i )
	{
		return
		+   rbuf[ ( i -  31 ) & k_mask ]                                  *  0.50000096267480886869f //  0 <- center
		+ ( rbuf[ ( i -  32 ) & k_mask ] + rbuf[ ( i -  30 ) & k_mask ] ) *  0.31657938437401861309f //  1
		+ ( rbuf[ ( i -  34 ) & k_mask ] + rbuf[ ( i -  28 ) & k_mask ] ) * -0.10101313725452233661f //  3
		+ ( rbuf[ ( i -  36 ) & k_mask ] + rbuf[ ( i -  26 ) & k_mask ] ) *  0.05550899435067539744f //  5
		+ ( rbuf[ ( i -  38 ) & k_mask ] + rbuf[ ( i -  24 ) & k_mask ] ) * -0.03471195462082705269f //  7
		+ ( rbuf[ ( i -  40 ) & k_mask ] + rbuf[ ( i -  22 ) & k_mask ] ) *  0.02256039695756812194f //  9
		+ ( rbuf[ ( i -  42 ) & k_mask ] + rbuf[ ( i -  20 ) & k_mask ] ) * -0.01469142144437069440f // 11
		+ ( rbuf[ ( i -  44 ) & k_mask ] + rbuf[ ( i -  18 ) & k_mask ] ) *  0.00939698179804849924f // 13
		+ ( rbuf[ ( i -  46 ) & k_mask ] + rbuf[ ( i -  16 ) & k_mask ] ) * -0.00582435962012840900f // 15
		+ ( rbuf[ ( i -  48 ) & k_mask ] + rbuf[ ( i -  14 ) & k_mask ] ) *  0.00345925413488958272f // 17
		+ ( rbuf[ ( i -  50 ) & k_mask ] + rbuf[ ( i -  12 ) & k_mask ] ) * -0.00194719772519184983f // 19
		+ ( rbuf[ ( i -  52 ) & k_mask ] + rbuf[ ( i -  10 ) & k_mask ] ) *  0.00102593697347460743f // 21
		+ ( rbuf[ ( i -  54 ) & k_mask ] + rbuf[ ( i -   8 ) & k_mask ] ) * -0.00049803623462519643f // 23
		+ ( rbuf[ ( i -  56 ) & k_mask ] + rbuf[ ( i -   6 ) & k_mask ] ) *  0.00021782623062811189f // 25
		+ ( rbuf[ ( i -  58 ) & k_mask ] + rbuf[ ( i -   4 ) & k_mask ] ) * -0.00008268370524308532f // 27
		+ ( rbuf[ ( i -  60 ) & k_mask ] + rbuf[ ( i -   2 ) & k_mask ] ) *  0.00002520042100489792f // 29
		+ ( rbuf[ ( i -  62 ) & k_mask ] + rbuf[ ( i -   0 ) & k_mask ] ) * -0.00000566597280377399f // 31
		;
	}
};

// ======== SIZE 0064 ========

struct up2x_0064
{
	enum
	{
		k_kernel_half_size = 64,
		k_buffer_size      = 128,
		k_mask             = 127,
	};

	static float interpolate( const float* rbuf, unsigned int i )
	{
		return
		+ ( rbuf[ ( i -  64 ) & k_mask ] + rbuf[ ( i -  63 ) & k_mask ] ) *  0.63661996543508503343f //  0
		+ ( rbuf[ ( i -  65 ) & k_mask ] + rbuf[ ( i -  62 ) & k_mask ] ) * -0.21220503613982211188f //  1
		+ ( rbuf[ ( i -  66 ) & k_mask ] + rbuf[ ( i -  61 ) & k_mask ] ) *  0.12731622196578426531f //  2
		+ ( rbuf[ ( i -  67 ) & k_mask ] + rbuf[ ( i -  60 ) & k_mask ] ) * -0.09092697607381930447f //  3
		+ ( rbuf[ ( i -  68 ) & k_mask ] + rbuf[ ( i -  59 ) & k_mask ] ) *  0.07070101708756604264f //  4
		+ ( rbuf[ ( i -  69 ) & k_mask ] + rbuf[ ( i -  58 ) & k_mask ] ) * -0.05781936200685087318f //  5
		+ ( rbuf[ ( i -  70 ) & k_mask ] + rbuf[ ( i -  57 ) & k_mask ] ) *  0.04889009848334192193f //  6
		+ ( rbuf[ ( i -  71 ) & k_mask ] + rbuf[ ( i -  56 ) & k_mask ] ) * -0.04233033972035386838f //  7
		+ ( rbuf[ ( i -  72 ) & k_mask ] + rbuf[ ( i -  55 ) & k_mask ] ) *  0.03730209395338503209f //  8
		+ ( rbuf[ ( i -  73 ) & k_mask ] + rbuf[ ( i -  54 ) & k_mask ] ) * -0.03332021671505796395f //  9
		+ ( rbuf[ ( i -  74 ) & k_mask ] + rbuf[ ( i -  53 ) & k_mask ] ) *  0.03008439069486093867f // 10
		+ ( rbuf[ ( i -  75 ) & k_mask ] + rbuf[ ( i -  52 ) & k_mask ] ) * -0.02739876857076825947f // 11
		+ ( rbuf[ ( i -  76 ) & k_mask ] + rbuf[ ( i -  51 ) & k_mask ] ) *  0.02513018754848710123f // 12
		+ ( rbuf[ ( i -  77 ) & k_mask ] + rbuf[ ( i -  50 ) & k_mask ] ) * -0.02318495546363574453f // 13
		+ ( rbuf[ ( i -  78 ) & k_mask ] + rbuf[ ( i -  49 ) & k_mask ] ) *  0.02149524286474833665f // 14
		+ ( rbuf[ ( i -  79 ) & k_mask ] + rbuf[ ( i -  48 ) & k_mask ] ) * -0.02001074289221681235f // 15
		+ ( rbuf[ ( i -  80 ) & k_mask ] + rbuf[ ( i -  47 ) & k_mask ] ) *  0.01869336413065113278f // 16
		+ ( rbuf[ ( i -  81 ) & k_mask ] + rbuf[ ( i -  46 ) & k_mask ] ) * -0.01751374324529060902f // 17
		+ ( rbuf[ ( i -  82 ) & k_mask ] + rbuf[ ( i -  45 ) & k_mask ] ) *  0.01644888883552791947f // 18
		+ ( rbuf[ ( i -  83 ) & k_mask ] + rbuf[ ( i -  44 ) & k_mask ] ) * -0.01548055042760809567f // 19
		+ ( rbuf[ ( i -  84 ) & k_mask ] + rbuf[ ( i -  43 ) & k_mask ] ) *  0.01459406499800355340f // 20
		+ ( rbuf[ ( i -  85 ) & k_mask ] + rbuf[ ( i -  42 ) & k_mask ] ) * -0.01377752555236145052f // 21
		+ ( rbuf[ ( i -  86 ) & k_mask ] + rbuf[ ( i -  41 ) & k_mask ] ) *  0.01302117156495638355f // 22
		+ ( rbuf[ ( i -  87 ) & k_mask ] + rbuf[ ( i -  40 ) & k_mask ] ) * -0.01231693519254042565f // 23
		+ ( rbuf[ ( i -  88 ) & k_mask ] + rbuf[ ( i -  39 ) & k_mask ] ) *  0.01165809875561989520f // 24
		+ ( rbuf[ ( i -  89 ) & k_mask ] + rbuf[ ( i -  38 ) & k_mask ] ) * -0.01103903294315930136f // 25
		+ ( rbuf[ ( i -  90 ) & k_mask ] + rbuf[ ( i -  37 ) & k_mask ] ) *  0.01045499441754306480f // 26
		+ ( rbuf[ ( i -  91 ) & k_mask ] + rbuf[ ( i -  36 ) & k_mask ] ) * -0.00990196769972938491f // 27
		+ ( rbuf[ ( i -  92 ) & k_mask ] + rbuf[ ( i -  35 ) & k_mask ] ) *  0.00937654045875957291f // 28
		+ ( rbuf[ ( i -  93 ) & k_mask ] + rbuf[ ( i -  34 ) & k_mask ] ) * -0.00887580427916564302f // 29
		+ ( rbuf[ ( i -  94 ) & k_mask ] + rbuf[ ( i -  33 ) & k_mask ] ) *  0.00839727505888965969f // 30
		+ ( rbuf[ ( i -  95 ) & k_mask ] + rbuf[ ( i -  32 ) & k_mask ] ) * -0.00793882867537891446f // 31
		+ ( rbuf[ ( i -  96 ) & k_mask ] + rbuf[ ( i -  31 ) & k_mask ] ) *  0.00749864863132672366f // 32
		+ ( rbuf[ ( i -  97 ) & k_mask ] + rbuf[ ( i -  30 ) & k_mask ] ) * -0.00707518317684934037f // 33
		+ ( rbuf[ ( i -  98 ) & k_mask ] + rbuf[ ( i -  29 ) & k_mask ] ) *  0.00666710998534382829f // 34
		+ ( rbuf[ ( i -  99 ) & k_mask ] + rbuf[ ( i -  28 ) & k_mask ] ) * -0.00627330689356864896f // 35
		+ ( rbuf[ ( i - 100 ) & k_mask ] + rbuf[ ( i -  27 ) & k_mask ] ) *  0.00589282754294538202f // 36
		+ ( rbuf[ ( i - 101 ) & k_mask ] + rbuf[ ( i -  26 ) & k_mask ] ) * -0.00552488100718695040f // 37
		+ ( rbuf[ ( i - 102 ) & k_mask ] + rbuf[ ( i -  25 ) & k_mask ] ) *  0.00516881468146570665f // 38
		+ ( rbuf[ ( i - 103 ) & k_mask ] + rbuf[ ( i -  24 ) & k_mask ] ) * -0.00482409985512699535f // 39
		+ ( rbuf[ ( i - 104 ) & k_mask ] + rbuf[ ( i -  23 ) & k_mask ] ) *  0.00449031950412549005f // 40
		+ ( rbuf[ ( i - 105 ) & k_mask ] + rbuf[ ( i -  22 ) & k_mask ] ) * -0.00416715792877325828f // 41
		+ ( rbuf[ ( i - 106 ) & k_mask ] + rbuf[ ( i -  21 ) & k_mask ] ) *  0.00385439193286584748f // 42
		+ ( rbuf[ ( i - 107 ) & k_mask ] + rbuf[ ( i -  20 ) & k_mask ] ) * -0.00355188329614854323f // 43
		+ ( rbuf[ ( i - 108 ) & k_mask ] + rbuf[ ( i -  19 ) & k_mask ] ) *  0.00325957233667604563f // 44
		+ ( rbuf[ ( i - 109 ) & k_mask ] + rbuf[ ( i -  18 ) & k_mask ] ) * -0.00297747239538964214f // 45
		+ ( rbuf[ ( i - 110 ) & k_mask ] + rbuf[ ( i -  17 ) & k_mask ] ) *  0.00270566510408344228f // 46
		+ ( rbuf[ ( i - 111 ) & k_mask ] + rbuf[ ( i -  16 ) & k_mask ] ) * -0.00244429632131285901f // 47
		+ ( rbuf[ ( i - 112 ) & k_mask ] + rbuf[ ( i -  15 ) & k_mask ] ) *  0.00219357263984131228f // 48
		+ ( rbuf[ ( i - 113 ) & k_mask ] + rbuf[ ( i -  14 ) & k_mask ] ) * -0.00195375838480155118f // 49
		+ ( rbuf[ ( i - 114 ) & k_mask ] + rbuf[ ( i -  13 ) & k_mask ] ) *  0.00172517303455176681f // 50
		+ ( rbuf[ ( i - 115 ) & k_mask ] + rbuf[ ( i -  12 ) & k_mask ] ) * -0.00150818900677281414f // 51
		+ ( rbuf[ ( i - 116 ) & k_mask ] + rbuf[ ( i -  11 ) & k_mask ] ) *  0.00130322976110774512f // 52
		+ ( rbuf[ ( i - 117 ) & k_mask ] + rbuf[ ( i -  10 ) & k_mask ] ) * -0.00111076817692689397f // 53
		+ ( rbuf[ ( i - 118 ) & k_mask ] + rbuf[ ( i -   9 ) & k_mask ] ) *  0.00093132517088128730f // 54
		+ ( rbuf[ ( i - 119 ) & k_mask ] + rbuf[ ( i -   8 ) & k_mask ] ) * -0.00076546852400080959f // 55
		+ ( rbuf[ ( i - 120 ) & k_mask ] + rbuf[ ( i -   7 ) & k_mask ] ) *  0.00061381189237582668f // 56
		+ ( rbuf[ ( i - 121 ) & k_mask ] + rbuf[ ( i -   6 ) & k_mask ] ) * -0.00047701397907297388f // 57
		+ ( rbuf[ ( i - 122 ) & k_mask ] + rbuf[ ( i -   5 ) & k_mask ] ) *  0.00035577784799213570f // 58
		+ ( rbuf[ ( i - 123 ) & k_mask ] + rbuf[ ( i -   4 ) & k_mask ] ) * -0.00025085036296564934f // 59
		+ ( rbuf[ ( i - 124 ) & k_mask ] + rbuf[ ( i -   3 ) & k_mask ] ) *  0.00016302173760889978f // 60
		+ ( rbuf[ ( i - 125 ) & k_mask ] + rbuf[ ( i -   2 ) & k_mask ] ) * -0.00009312518331645486f // 61
		+ ( rbuf[ ( i - 126 ) & k_mask ] + rbuf[ ( i -   1 ) & k_mask ] ) *  0.00004203664441144048f // 62
		+ ( rbuf[ ( i - 127 ) & k_mask ] + rbuf[ ( i -   0 ) & k_mask ] ) * -0.00001067461084071216f // 63
		;
	}
};

struct dn2x_0064
{
	enum
	{
		k_kernel_half_size = 64,
		k_buffer_size      = 128,
		k_mask             = 127,
	};

	static float decimate( const float* rbuf, unsigned int i )
	{
		return
		+   rbuf[ ( i -  63 ) & k_mask ]                                  *  0.50000078913928180935f //  0 <- center
		+ ( rbuf[ ( i -  64 ) & k_mask ] + rbuf[ ( i -  62 ) & k_mask ] ) *  0.31787679459226297896f //  1
		+ ( rbuf[ ( i -  66 ) & k_mask ] + rbuf[ ( i -  60 ) & k_mask ] ) * -0.10480919202546168378f //  3
		+ ( rbuf[ ( i -  68 ) & k_mask ] + rbuf[ ( i -  58 ) & k_mask ] ) *  0.06152646342345382408f //  5
		+ ( rbuf[ ( i -  70 ) & k_mask ] + rbuf[ ( i -  56 ) & k_mask ] ) * -0.04252751987627930580f //  7
		+ ( rbuf[ ( i -  72 ) & k_mask ] + rbuf[ ( i -  54 ) & k_mask ] ) *  0.03165549082754330612f //  9
		+ ( rbuf[ ( i -  74 ) & k_mask ] + rbuf[ ( i -  52 ) & k_mask ] ) * -0.02451087978428258610f // 11
		+ ( rbuf[ ( i -  76 ) & k_mask ] + rbuf[ ( i -  50 ) & k_mask ] ) *  0.01940618008509089817f // 13
		+ ( rbuf[ ( i -  78 ) & k_mask ] + rbuf[ ( i -  48 ) & k_mask ] ) * -0.01555665026135213437f // 15
		+ ( rbuf[ ( i -  80 ) & k_mask ] + rbuf[ ( i -  46 ) & k_mask ] ) *  0.01254811994314911083f // 17
		+ ( rbuf[ ( i -  82 ) & k_mask ] + rbuf[ ( i -  44 ) & k_mask ] ) * -0.01014091312907527617f // 19
		+ ( rbuf[ ( i -  84 ) & k_mask ] + rbuf[ ( i -  42 ) & k_mask ] ) *  0.00818586024537058636f // 21
		+ ( rbuf[ ( i -  86 ) & k_mask ] + rbuf[ ( i -  40 ) & k_mask ] ) * -0.00658421200655115446f // 23
		+ ( rbuf[ ( i -  88 ) & k_mask ] + rbuf[ ( i -  38 ) & k_mask ] ) *  0.00526690144021188088f // 25
		+ ( rbuf[ ( i -  90 ) & k_mask ] + rbuf[ ( i -  36 ) & k_mask ] ) * -0.00418314325520353220f // 27
		+ ( rbuf[ ( i -  92 ) & k_mask ] + rbuf[ ( i -  34 ) & k_mask ] ) *  0.00329387500930264322f // 29
		+ ( rbuf[ ( i -  94 ) & k_mask ] + rbuf[ ( i -  32 ) & k_mask ] ) * -0.00256785706106609510f // 31
		+ ( rbuf[ ( i -  96 ) & k_mask ] + rbuf[ ( i -  30 ) & k_mask ] ) *  0.00197929967192739427f // 33
		+ ( rbuf[ ( i -  98 ) & k_mask ] + rbuf[ ( i -  28 ) & k_mask ] ) * -0.00150639698786998646f // 35
		+ ( rbuf[ ( i - 100 ) & k_mask ] + rbuf[ ( i -  26 ) & k_mask ] ) *  0.00113041125487468690f // 37
		+ ( rbuf[ ( i - 102 ) & k_mask ] + rbuf[ ( i -  24 ) & k_mask ] ) * -0.00083509381939878100f // 39
		+ ( rbuf[ ( i - 104 ) & k_mask ] + rbuf[ ( i -  22 ) & k_mask ] ) *  0.00060631112553777224f // 41
		+ ( rbuf[ ( i - 106 ) & k_mask ] + rbuf[ ( i -  20 ) & k_mask ] ) * -0.00043179269556027877f // 43
		+ ( rbuf[ ( i - 108 ) & k_mask ] + rbuf[ ( i -  18 ) & k_mask ] ) *  0.00030094851099827109f // 45
		+ ( rbuf[ ( i - 110 ) & k_mask ] + rbuf[ ( i -  16 ) & k_mask ] ) * -0.00020472294280034345f // 47
		+ ( rbuf[ ( i - 112 ) & k_mask ] + rbuf[ ( i -  14 ) & k_mask ] ) *  0.00013546555493960987f // 49
		+ ( rbuf[ ( i - 114 ) & k_mask ] + rbuf[ ( i -  12 ) & k_mask ] ) * -0.00008680803733215035f // 51
		+ ( rbuf[ ( i - 116 ) & k_mask ] + rbuf[ ( i -  10 ) & k_mask ] ) *  0.00005354254280171980f // 53
		+ ( rbuf[ ( i - 118 ) & k_mask ] + rbuf[ ( i -   8 ) & k_mask ] ) * -0.00003150061294289102f // 55
		+ ( rbuf[ ( i - 120 ) & k_mask ] + rbuf[ ( i -   6 ) & k_mask ] ) *  0.00001743419932752998f // 57
		+ ( rbuf[ ( i - 122 ) & k_mask ] + rbuf[ ( i -   4 ) & k_mask ] ) * -0.00000890139015840605f // 59
		+ ( rbuf[ ( i - 124 ) & k_mask ] + rbuf[ ( i -   2 ) & k_mask ] ) *  0.00000415963173545453f // 61
		+ ( rbuf[ ( i - 126 ) & k_mask ] + rbuf[ ( i -   0 ) & k_mask ] ) * -0.00000206874283425285f // 63
		;
	}
};

// ======== SIZE 0096 ========

struct up2x_0096
{
	enum
	{
		k_kernel_half_size = 96,
		k_buffer_size      = 256,
		k_mask             = 255,
	};

	static float interpolate( const float* rbuf, unsigned int i )
	{
		return
		+ ( rbuf[ ( i -  96 ) & k_mask ] + rbuf[ ( i -  95 ) & k_mask ] ) *  0.63661982688873863800f //  0
		+ ( rbuf[ ( i -  97 ) & k_mask ] + rbuf[ ( i -  94 ) & k_mask ] ) * -0.21220612925712711849f //  1
		+ ( rbuf[ ( i -  98 ) & k_mask ] + rbuf[ ( i -  93 ) & k_mask ] ) *  0.12732166279908507800f //  2
		+ ( rbuf[ ( i -  99 ) & k_mask ] + rbuf[ ( i -  92 ) & k_mask ] ) * -0.09094013875586157147f //  3
		+ ( rbuf[ ( i - 100 ) & k_mask ] + rbuf[ ( i -  91 ) & k_mask ] ) *  0.07072530296190143728f //  4
		+ ( rbuf[ ( i - 101 ) & k_mask ] + rbuf[ ( i -  90 ) & k_mask ] ) * -0.05785817725684411217f //  5
		+ ( rbuf[ ( i - 102 ) & k_mask ] + rbuf[ ( i -  89 ) & k_mask ] ) *  0.04894684733149147482f //  6
		+ ( rbuf[ ( i - 103 ) & k_mask ] + rbuf[ ( i -  88 ) & k_mask ] ) * -0.04240842033603969830f //  7
		+ ( rbuf[ ( i - 104 ) & k_mask ] + rbuf[ ( i -  87 ) & k_mask ] ) *  0.03740489479929923894f //  8
		+ ( rbuf[ ( i - 105 ) & k_mask ] + rbuf[ ( i -  86 ) & k_mask ] ) * -0.03345111273501695515f //  9
		+ ( rbuf[ ( i - 106 ) & k_mask ] + rbuf[ ( i -  85 ) & k_mask ] ) *  0.03024673914389866200f // 10
		+ ( rbuf[ ( i - 107 ) & k_mask ] + rbuf[ ( i -  84 ) & k_mask ] ) * -0.02759590440960182564f // 11
		+ ( rbuf[ ( i - 108 ) & k_mask ] + rbuf[ ( i -  83 ) & k_mask ] ) *  0.02536541836807469294f // 12
		+ ( rbuf[ ( i - 109 ) & k_mask ] + rbuf[ ( i -  82 ) & k_mask ] ) * -0.02346155592332188622f // 13
		+ ( rbuf[ ( i - 110 ) & k_mask ] + rbuf[ ( i -  81 ) & k_mask ] ) *  0.02181644863545916663f // 14
		+ ( rbuf[ ( i - 111 ) & k_mask ] + rbuf[ ( i -  80 ) & k_mask ] ) * -0.02037974410002393530f // 15
		+ ( rbuf[ ( i - 112 ) & k_mask ] + rbuf[ ( i -  79 ) & k_mask ] ) *  0.01911329829800834101f // 16
		+ ( rbuf[ ( i - 113 ) & k_mask ] + rbuf[ ( i -  78 ) & k_mask ] ) * -0.01798768772832629384f // 17
		+ ( rbuf[ ( i - 114 ) & k_mask ] + rbuf[ ( i -  77 ) & k_mask ] ) *  0.01697985275638782751f // 18
		+ ( rbuf[ ( i - 115 ) & k_mask ] + rbuf[ ( i -  76 ) & k_mask ] ) * -0.01607146610120390243f // 19
		+ ( rbuf[ ( i - 116 ) & k_mask ] + rbuf[ ( i -  75 ) & k_mask ] ) *  0.01524777885274290583f // 20
		+ ( rbuf[ ( i - 117 ) & k_mask ] + rbuf[ ( i -  74 ) & k_mask ] ) * -0.01449678854457327713f // 21
		+ ( rbuf[ ( i - 118 ) & k_mask ] + rbuf[ ( i -  73 ) & k_mask ] ) *  0.01380862908681423917f // 22
		+ ( rbuf[ ( i - 119 ) & k_mask ] + rbuf[ ( i -  72 ) & k_mask ] ) * -0.01317511647334548494f // 23
		+ ( rbuf[ ( i - 120 ) & k_mask ] + rbuf[ ( i -  71 ) & k_mask ] ) *  0.01258940575634468623f // 24
		+ ( rbuf[ ( i - 121 ) & k_mask ] + rbuf[ ( i -  70 ) & k_mask ] ) * -0.01204572874418039820f // 25
		+ ( rbuf[ ( i - 122 ) & k_mask ] + rbuf[ ( i -  69 ) & k_mask ] ) *  0.01153919109951004329f // 26
		+ ( rbuf[ ( i - 123 ) & k_mask ] + rbuf[ ( i -  68 ) & k_mask ] ) * -0.01106561371753058895f // 27
		+ ( rbuf[ ( i - 124 ) & k_mask ] + rbuf[ ( i -  67 ) & k_mask ] ) *  0.01062140750855506202f // 28
		+ ( rbuf[ ( i - 125 ) & k_mask ] + rbuf[ ( i -  66 ) & k_mask ] ) * -0.01020347365846465890f // 29
		+ ( rbuf[ ( i - 126 ) & k_mask ] + rbuf[ ( i -  65 ) & k_mask ] ) *  0.00980912351965517772f // 30
		+ ( rbuf[ ( i - 127 ) & k_mask ] + rbuf[ ( i -  64 ) & k_mask ] ) * -0.00943601377014568685f // 31
		+ ( rbuf[ ( i - 128 ) & k_mask ] + rbuf[ ( i -  63 ) & k_mask ] ) *  0.00908209355232219955f // 32
		+ ( rbuf[ ( i - 129 ) & k_mask ] + rbuf[ ( i -  62 ) & k_mask ] ) * -0.00874556108810900512f // 33
		+ ( rbuf[ ( i - 130 ) & k_mask ] + rbuf[ ( i -  61 ) & k_mask ] ) *  0.00842482784781428858f // 34
		+ ( rbuf[ ( i - 131 ) & k_mask ] + rbuf[ ( i -  60 ) & k_mask ] ) * -0.00811848878319303829f // 35
		+ ( rbuf[ ( i - 132 ) & k_mask ] + rbuf[ ( i -  59 ) & k_mask ] ) *  0.00782529746172675247f // 36
		+ ( rbuf[ ( i - 133 ) & k_mask ] + rbuf[ ( i -  58 ) & k_mask ] ) * -0.00754414518722609957f // 37
		+ ( rbuf[ ( i - 134 ) & k_mask ] + rbuf[ ( i -  57 ) & k_mask ] ) *  0.00727404338197054114f // 38
		+ ( rbuf[ ( i - 135 ) & k_mask ] + rbuf[ ( i -  56 ) & k_mask ] ) * -0.00701410865239105331f // 39
		+ ( rbuf[ ( i - 136 ) & k_mask ] + rbuf[ ( i -  55 ) & k_mask ] ) *  0.00676355007447364005f // 40
		+ ( rbuf[ ( i - 137 ) & k_mask ] + rbuf[ ( i -  54 ) & k_mask ] ) * -0.00652165832447293772f // 41
		+ ( rbuf[ ( i - 138 ) & k_mask ] + rbuf[ ( i -  53 ) & k_mask ] ) *  0.00628779635100247189f // 42
		+ ( rbuf[ ( i - 139 ) & k_mask ] + rbuf[ ( i -  52 ) & k_mask ] ) * -0.00606139134046394541f // 43
		+ ( rbuf[ ( i - 140 ) & k_mask ] + rbuf[ ( i -  51 ) & k_mask ] ) *  0.00584192777236895201f // 44
		+ ( rbuf[ ( i - 141 ) & k_mask ] + rbuf[ ( i -  50 ) & k_mask ] ) * -0.00562894139687739742f // 45
		+ ( rbuf[ ( i - 142 ) & k_mask ] + rbuf[ ( i -  49 ) & k_mask ] ) *  0.00542201399572425982f // 46
		+ ( rbuf[ ( i - 143 ) & k_mask ] + rbuf[ ( i -  48 ) & k_mask ] ) * -0.00522076881108802463f // 47
		+ ( rbuf[ ( i - 144 ) & k_mask ] + rbuf[ ( i -  47 ) & k_mask ] ) *  0.00502486654599680962f // 48
		+ ( rbuf[ ( i - 145 ) & k_mask ] + rbuf[ ( i -  46 ) & k_mask ] ) * -0.00483400185544870329f // 49
		+ ( rbuf[ ( i - 146 ) & k_mask ] + rbuf[ ( i -  45 ) & k_mask ] ) *  0.00464790026022648441f // 50
		+ ( rbuf[ ( i - 147 ) & k_mask ] + rbuf[ ( i -  44 ) & k_mask ] ) * -0.00446631542595315838f // 51
		+ ( rbuf[ ( i - 148 ) & k_mask ] + rbuf[ ( i -  43 ) & k_mask ] ) *  0.00428902675868949364f // 52
		+ ( rbuf[ ( i - 149 ) & k_mask ] + rbuf[ ( i -  42 ) & k_mask ] ) * -0.00411583727565689120f // 53
		+ ( rbuf[ ( i - 150 ) & k_mask ] + rbuf[ ( i -  41 ) & k_mask ] ) *  0.00394657171574834716f // 54
		+ ( rbuf[ ( i - 151 ) & k_mask ] + rbuf[ ( i -  40 ) & k_mask ] ) * -0.00378107485958399875f // 55
		+ ( rbuf[ ( i - 152 ) & k_mask ] + rbuf[ ( i -  39 ) & k_mask ] ) *  0.00361921003314995184f // 56
		+ ( rbuf[ ( i - 153 ) & k_mask ] + rbuf[ ( i -  38 ) & k_mask ] ) * -0.00346085777267114182f // 57
		+ ( rbuf[ ( i - 154 ) & k_mask ] + rbuf[ ( i -  37 ) & k_mask ] ) *  0.00330591463142524940f // 58
		+ ( rbuf[ ( i - 155 ) & k_mask ] + rbuf[ ( i -  36 ) & k_mask ] ) * -0.00315429211179873818f // 59
		+ ( rbuf[ ( i - 156 ) & k_mask ] + rbuf[ ( i -  35 ) & k_mask ] ) *  0.00300591570809417927f // 60
		+ ( rbuf[ ( i - 157 ) & k_mask ] + rbuf[ ( i -  34 ) & k_mask ] ) * -0.00286072404748303121f // 61
		+ ( rbuf[ ( i - 158 ) & k_mask ] + rbuf[ ( i -  33 ) & k_mask ] ) *  0.00271866811811158045f // 62
		+ ( rbuf[ ( i - 159 ) & k_mask ] + rbuf[ ( i -  32 ) & k_mask ] ) * -0.00257971057475261294f // 63
		+ ( rbuf[ ( i - 160 ) & k_mask ] + rbuf[ ( i -  31 ) & k_mask ] ) *  0.00244382511358699588f // 64
		+ ( rbuf[ ( i - 161 ) & k_mask ] + rbuf[ ( i -  30 ) & k_mask ] ) * -0.00231099590872723554f // 65
		+ ( rbuf[ ( i - 162 ) & k_mask ] + rbuf[ ( i -  29 ) & k_mask ] ) *  0.00218121710398387928f // 66
		+ ( rbuf[ ( i - 163 ) & k_mask ] + rbuf[ ( i -  28 ) & k_mask ] ) * -0.00205449235414583353f // 67
		+ ( rbuf[ ( i - 164 ) & k_mask ] + rbuf[ ( i -  27 ) & k_mask ] ) *  0.00193083441071482346f // 68
		+ ( rbuf[ ( i - 165 ) & k_mask ] + rbuf[ ( i -  26 ) & k_mask ] ) * -0.00181026474761657868f // 69
		+ ( rbuf[ ( i - 166 ) & k_mask ] + rbuf[ ( i -  25 ) & k_mask ] ) *  0.00169281322291941322f // 70
		+ ( rbuf[ ( i - 167 ) & k_mask ] + rbuf[ ( i -  24 ) & k_mask ] ) * -0.00157851777303502552f // 71
		+ ( rbuf[ ( i - 168 ) & k_mask ] + rbuf[ ( i -  23 ) & k_mask ] ) *  0.00146742413626529348f // 72
		+ ( rbuf[ ( i - 169 ) & k_mask ] + rbuf[ ( i -  22 ) & k_mask ] ) * -0.00135958560290019609f // 73
		+ ( rbuf[ ( i - 170 ) & k_mask ] + rbuf[ ( i -  21 ) & k_mask ] ) *  0.00125506278937214245f // 74
		+ ( rbuf[ ( i - 171 ) & k_mask ] + rbuf[ ( i -  20 ) & k_mask ] ) * -0.00115392343423630626f // 75
		+ ( rbuf[ ( i - 172 ) & k_mask ] + rbuf[ ( i -  19 ) & k_mask ] ) *  0.00105624221397980869f // 76
		+ ( rbuf[ ( i - 173 ) & k_mask ] + rbuf[ ( i -  18 ) & k_mask ] ) * -0.00096210057686876968f // 77
		+ ( rbuf[ ( i - 174 ) & k_mask ] + rbuf[ ( i -  17 ) & k_mask ] ) *  0.00087158659322474270f // 78
		+ ( rbuf[ ( i - 175 ) & k_mask ] + rbuf[ ( i -  16 ) & k_mask ] ) * -0.00078479482068392783f // 79
		+ ( rbuf[ ( i - 176 ) & k_mask ] + rbuf[ ( i -  15 ) & k_mask ] ) *  0.00070182618313631071f // 80
		+ ( rbuf[ ( i - 177 ) & k_mask ] + rbuf[ ( i -  14 ) & k_mask ] ) * -0.00062278786216976903f // 81
		+ ( rbuf[ ( i - 178 ) & k_mask ] + rbuf[ ( i -  13 ) & k_mask ] ) *  0.00054779319995810452f // 82
		+ ( rbuf[ ( i - 179 ) & k_mask ] + rbuf[ ( i -  12 ) & k_mask ] ) * -0.00047696161263365103f // 83
		+ ( rbuf[ ( i - 180 ) & k_mask ] + rbuf[ ( i -  11 ) & k_mask ] ) *  0.00041041851327589728f // 84
		+ ( rbuf[ ( i - 181 ) & k_mask ] + rbuf[ ( i -  10 ) & k_mask ] ) * -0.00034829524372885138f // 85
		+ ( rbuf[ ( i - 182 ) & k_mask ] + rbuf[ ( i -   9 ) & k_mask ] ) *  0.00029072901453268884f // 86
		+ ( rbuf[ ( i - 183 ) & k_mask ] + rbuf[ ( i -   8 ) & k_mask ] ) * -0.00023786285232053650f // 87
		+ ( rbuf[ ( i - 184 ) & k_mask ] + rbuf[ ( i -   7 ) & k_mask ] ) *  0.00018984555408992713f // 88
		+ ( rbuf[ ( i - 185 ) & k_mask ] + rbuf[ ( i -   6 ) & k_mask ] ) * -0.00014683164781124724f // 89
		+ ( rbuf[ ( i - 186 ) & k_mask ] + rbuf[ ( i -   5 ) & k_mask ] ) *  0.00010898135888302155f // 90
		+ ( rbuf[ ( i - 187 ) & k_mask ] + rbuf[ ( i -   4 ) & k_mask ] ) * -0.00007646058198672975f // 91
		+ ( rbuf[ ( i - 188 ) & k_mask ] + rbuf[ ( i -   3 ) & k_mask ] ) *  0.00004944085793255234f // 92
		+ ( rbuf[ ( i - 189 ) & k_mask ] + rbuf[ ( i -   2 ) & k_mask ] ) * -0.00002809935512238538f // 93
		+ ( rbuf[ ( i - 190 ) & k_mask ] + rbuf[ ( i -   1 ) & k_mask ] ) *  0.00001261885528810513f // 94
		+ ( rbuf[ ( i - 191 ) & k_mask ] + rbuf[ ( i -   0 ) & k_mask ] ) * -0.00000318774319171797f // 95
		;
	}
};

struct dn2x_0096
{
	enum
	{
		k_kernel_half_size = 96,
		k_buffer_size      = 256,
		k_mask             = 255,
	};

	static float decimate( const float* rbuf, unsigned int i )
	{
		return
		+   rbuf[ ( i -  95 ) & k_mask ]                                  *  0.50000056753612465155f //  0 <- center
		+ ( rbuf[ ( i -  96 ) & k_mask ] + rbuf[ ( i -  94 ) & k_mask ] ) *  0.31811747193354050767f //  1
		+ ( rbuf[ ( i -  98 ) & k_mask ] + rbuf[ ( i -  92 ) & k_mask ] ) * -0.10552637806299251799f //  3
		+ ( rbuf[ ( i - 100 ) & k_mask ] + rbuf[ ( i -  90 ) & k_mask ] ) *  0.06270459857656746072f //  5
		+ ( rbuf[ ( i - 102 ) & k_mask ] + rbuf[ ( i -  88 ) & k_mask ] ) * -0.04414138507328255190f //  7
		+ ( rbuf[ ( i - 104 ) & k_mask ] + rbuf[ ( i -  86 ) & k_mask ] ) *  0.03367101914209325031f //  9
		+ ( rbuf[ ( i - 106 ) & k_mask ] + rbuf[ ( i -  84 ) & k_mask ] ) * -0.02688631069295124160f // 11
		+ ( rbuf[ ( i - 108 ) & k_mask ] + rbuf[ ( i -  82 ) & k_mask ] ) *  0.02209345507069689421f // 13
		+ ( rbuf[ ( i - 110 ) & k_mask ] + rbuf[ ( i -  80 ) & k_mask ] ) * -0.01850298349441929432f // 15
		+ ( rbuf[ ( i - 112 ) & k_mask ] + rbuf[ ( i -  78 ) & k_mask ] ) *  0.01569767402098584674f // 17
		+ ( rbuf[ ( i - 114 ) & k_mask ] + rbuf[ ( i -  76 ) & k_mask ] ) * -0.01343650766060581862f // 19
		+ ( rbuf[ ( i - 116 ) & k_mask ] + rbuf[ ( i -  74 ) & k_mask ] ) *  0.01157064239626923695f // 21
		+ ( rbuf[ ( i - 118 ) & k_mask ] + rbuf[ ( i -  72 ) & k_mask ] ) * -0.01000322302460966532f // 23
		+ ( rbuf[ ( i - 120 ) & k_mask ] + rbuf[ ( i -  70 ) & k_mask ] ) *  0.00866848130725487304f // 25
		+ ( rbuf[ ( i - 122 ) & k_mask ] + rbuf[ ( i -  68 ) & k_mask ] ) * -0.00752012637621043718f // 27
		+ ( rbuf[ ( i - 124 ) & k_mask ] + rbuf[ ( i -  66 ) & k_mask ] ) *  0.00652454251573131392f // 29
		+ ( rbuf[ ( i - 126 ) & k_mask ] + rbuf[ ( i -  64 ) & k_mask ] ) * -0.00565662504430233023f // 31
		+ ( rbuf[ ( i - 128 ) & k_mask ] + rbuf[ ( i -  62 ) & k_mask ] ) *  0.00489713661136505565f // 33
		+ ( rbuf[ ( i - 130 ) & k_mask ] + rbuf[ ( i -  60 ) & k_mask ] ) * -0.00423097695933832840f // 35
		+ ( rbuf[ ( i - 132 ) & k_mask ] + rbuf[ ( i -  58 ) & k_mask ] ) *  0.00364602144349293004f // 37
		+ ( rbuf[ ( i - 134 ) & k_mask ] + rbuf[ ( i -  56 ) & k_mask ] ) * -0.00313232479061358428f // 39
		+ ( rbuf[ ( i - 136 ) & k_mask ] + rbuf[ ( i -  54 ) & k_mask ] ) *  0.00268156577024547971f // 41
		+ ( rbuf[ ( i - 138 ) & k_mask ] + rbuf[ ( i -  52 ) & k_mask ] ) * -0.00228665449219076205f // 43
		+ ( rbuf[ ( i - 140 ) & k_mask ] + rbuf[ ( i -  50 ) & k_mask ] ) *  0.00194145167242589238f // 45
		+ ( rbuf[ ( i - 142 ) & k_mask ] + rbuf[ ( i -  48 ) & k_mask ] ) * -0.00164056626772245921f // 47
		+ ( rbuf[ ( i - 144 ) & k_mask ] + rbuf[ ( i -  46 ) & k_mask ] ) *  0.00137920868697703953f // 49
		+ ( rbuf[ ( i - 146 ) & k_mask ] + rbuf[ ( i -  44 ) & k_mask ] ) * -0.00115308380037486410f // 51
		+ ( rbuf[ ( i - 148 ) & k_mask ] + rbuf[ ( i -  42 ) & k_mask ] ) *  0.00095831262161684676f // 53
		+ ( rbuf[ ( i - 150 ) & k_mask ] + rbuf[ ( i -  40 ) & k_mask ] ) * -0.00079137469398854216f // 55
		+ ( rbuf[ ( i - 152 ) & k_mask ] + rbuf[ ( i -  38 ) & k_mask ] ) *  0.00064906539545617290f // 57
		+ ( rbuf[ ( i - 154 ) & k_mask ] + rbuf[ ( i -  36 ) & k_mask ] ) * -0.00052846392104675954f // 59
		+ ( rbuf[ ( i - 156 ) & k_mask ] + rbuf[ ( i -  34 ) & k_mask ] ) *  0.00042690881245486536f // 61
		+ ( rbuf[ ( i - 158 ) & k_mask ] + rbuf[ ( i -  32 ) & k_mask ] ) * -0.00034197872090046568f // 63
		+ ( rbuf[ ( i - 160 ) & k_mask ] + rbuf[ ( i -  30 ) & k_mask ] ) *  0.00027147669880564192f // 65
		+ ( rbuf[ ( i - 162 ) & k_mask ] + rbuf[ ( i -  28 ) & k_mask ] ) * -0.00021341677803241586f // 67
		+ ( rbuf[ ( i - 164 ) & k_mask ] + rbuf[ ( i -  26 ) & k_mask ] ) *  0.00016601194701306311f // 69
		+ ( rbuf[ ( i - 166 ) & k_mask ] + rbuf[ ( i -  24 ) & k_mask ] ) * -0.00012766291318050247f // 71
		+ ( rbuf[ ( i - 168 ) & k_mask ] + rbuf[ ( i -  22 ) & k_mask ] ) *  0.00009694724934465494f // 73
		+ ( rbuf[ ( i - 170 ) & k_mask ] + rbuf[ ( i -  20 ) & k_mask ] ) * -0.00007260868616176768f // 75
		+ ( rbuf[ ( i - 172 ) & k_mask ] + rbuf[ ( i -  18 ) & k_mask ] ) *  0.00005354643700622196f // 77
		+ ( rbuf[ ( i - 174 ) & k_mask ] + rbuf[ ( i -  16 ) & k_mask ] ) * -0.00003880453332748458f // 79
		+ ( rbuf[ ( i - 176 ) & k_mask ] + rbuf[ ( i -  14 ) & k_mask ] ) *  0.00002756121330005005f // 81
		+ ( rbuf[ ( i - 178 ) & k_mask ] + rbuf[ ( i -  12 ) & k_mask ] ) * -0.00001911844855086560f // 83
		+ ( rbuf[ ( i - 180 ) & k_mask ] + rbuf[ ( i -  10 ) & k_mask ] ) *  0.00001289171661068999f // 85
		+ ( rbuf[ ( i - 182 ) & k_mask ] + rbuf[ ( i -   8 ) & k_mask ] ) * -0.00000840013369653796f // 87
		+ ( rbuf[ ( i - 184 ) & k_mask ] + rbuf[ ( i -   6 ) & k_mask ] ) *  0.00000525705643772290f // 89
		+ ( rbuf[ ( i - 186 ) & k_mask ] + rbuf[ ( i -   4 ) & k_mask ] ) * -0.00000316124497402987f // 91
		+ ( rbuf[ ( i - 188 ) & k_mask ] + rbuf[ ( i -   2 ) & k_mask ] ) *  0.00000188865610869751f // 93
		+ ( rbuf[ ( i - 190 ) & k_mask ] + rbuf[ ( i -   0 ) & k_mask ] ) * -0.00000128490638946039f // 95
		;
	}
};

// ======== SIZE 0128 ========

struct up2x_0128
{
	enum
	{
		k_kernel_half_size = 128,
		k_buffer_size      = 256,
		k_mask             = 255,
	};

	static float interpolate( const float* rbuf, unsigned int i )
	{
		return
		+ ( rbuf[ ( i - 128 ) & k_mask ] + rbuf[ ( i - 127 ) & k_mask ] ) *  0.63661979480252539609f //  0
		+ ( rbuf[ ( i - 129 ) & k_mask ] + rbuf[ ( i - 126 ) & k_mask ] ) * -0.21220639589157419547f //  1
		+ ( rbuf[ ( i - 130 ) & k_mask ] + rbuf[ ( i - 125 ) & k_mask ] ) *  0.12732298755764170917f //  2
		+ ( rbuf[ ( i - 131 ) & k_mask ] + rbuf[ ( i - 124 ) & k_mask ] ) * -0.09094334320763754198f //  3
		+ ( rbuf[ ( i - 132 ) & k_mask ] + rbuf[ ( i - 123 ) & k_mask ] ) *  0.07073121546741958920f //  4
		+ ( rbuf[ ( i - 133 ) & k_mask ] + rbuf[ ( i - 122 ) & k_mask ] ) * -0.05786762782461826737f //  5
		+ ( rbuf[ ( i - 134 ) & k_mask ] + rbuf[ ( i - 121 ) & k_mask ] ) *  0.04896066630148637050f //  6
		+ ( rbuf[ ( i - 135 ) & k_mask ] + rbuf[ ( i - 120 ) & k_mask ] ) * -0.04242743779641689611f //  7
		+ ( rbuf[ ( i - 136 ) & k_mask ] + rbuf[ ( i - 119 ) & k_mask ] ) *  0.03742994019052006682f //  8
		+ ( rbuf[ ( i - 137 ) & k_mask ] + rbuf[ ( i - 118 ) & k_mask ] ) * -0.03348301449763713827f //  9
		+ ( rbuf[ ( i - 138 ) & k_mask ] + rbuf[ ( i - 117 ) & k_mask ] ) *  0.03028632436216614418f // 10
		+ ( rbuf[ ( i - 139 ) & k_mask ] + rbuf[ ( i - 116 ) & k_mask ] ) * -0.02764399843211876040f // 11
		+ ( rbuf[ ( i - 140 ) & k_mask ] + rbuf[ ( i - 115 ) & k_mask ] ) *  0.02542284439727853645f // 12
		+ ( rbuf[ ( i - 141 ) & k_mask ] + rbuf[ ( i - 114 ) & k_mask ] ) * -0.02352913456981560805f // 13
		+ ( rbuf[ ( i - 142 ) & k_mask ] + rbuf[ ( i - 113 ) & k_mask ] ) *  0.02189499743513729710f // 14
		+ ( rbuf[ ( i - 143 ) & k_mask ] + rbuf[ ( i - 112 ) & k_mask ] ) * -0.02047007699286827048f // 15
		+ ( rbuf[ ( i - 144 ) & k_mask ] + rbuf[ ( i - 111 ) & k_mask ] ) *  0.01921622506790510859f // 16
		+ ( rbuf[ ( i - 145 ) & k_mask ] + rbuf[ ( i - 110 ) & k_mask ] ) * -0.01810401340351567787f // 17
		+ ( rbuf[ ( i - 146 ) & k_mask ] + rbuf[ ( i - 109 ) & k_mask ] ) *  0.01711037697030408020f // 18
		+ ( rbuf[ ( i - 147 ) & k_mask ] + rbuf[ ( i - 108 ) & k_mask ] ) * -0.01621698241355104195f // 19
		+ ( rbuf[ ( i - 148 ) & k_mask ] + rbuf[ ( i - 107 ) & k_mask ] ) *  0.01540907403070390820f // 20
		+ ( rbuf[ ( i - 149 ) & k_mask ] + rbuf[ ( i - 106 ) & k_mask ] ) * -0.01467464180408391619f // 21
		+ ( rbuf[ ( i - 150 ) & k_mask ] + rbuf[ ( i - 105 ) & k_mask ] ) *  0.01400381129385417679f // 22
		+ ( rbuf[ ( i - 151 ) & k_mask ] + rbuf[ ( i - 104 ) & k_mask ] ) * -0.01338838930521328054f // 23
		+ ( rbuf[ ( i - 152 ) & k_mask ] + rbuf[ ( i - 103 ) & k_mask ] ) *  0.01282152082289293900f // 24
		+ ( rbuf[ ( i - 153 ) & k_mask ] + rbuf[ ( i - 102 ) & k_mask ] ) * -0.01229742666899382060f // 25
		+ ( rbuf[ ( i - 154 ) & k_mask ] + rbuf[ ( i - 101 ) & k_mask ] ) *  0.01181120056101369123f // 26
		+ ( rbuf[ ( i - 155 ) & k_mask ] + rbuf[ ( i - 100 ) & k_mask ] ) * -0.01135865045001884475f // 27
		+ ( rbuf[ ( i - 156 ) & k_mask ] + rbuf[ ( i -  99 ) & k_mask ] ) *  0.01093617326313419021f // 28
		+ ( rbuf[ ( i - 157 ) & k_mask ] + rbuf[ ( i -  98 ) & k_mask ] ) * -0.01054065512390351365f // 29
		+ ( rbuf[ ( i - 158 ) & k_mask ] + rbuf[ ( i -  97 ) & k_mask ] ) *  0.01016939120313985548f // 30
		+ ( rbuf[ ( i - 159 ) & k_mask ] + rbuf[ ( i -  96 ) & k_mask ] ) * -0.00982002083793486261f // 31
		+ ( rbuf[ ( i - 160 ) & k_mask ] + rbuf[ ( i -  95 ) & k_mask ] ) *  0.00949047463030056916f // 32
		+ ( rbuf[ ( i - 161 ) & k_mask ] + rbuf[ ( i -  94 ) & k_mask ] ) * -0.00917893102223685427f // 33
		+ ( rbuf[ ( i - 162 ) & k_mask ] + rbuf[ ( i -  93 ) & k_mask ] ) *  0.00888378042447151087f // 34
		+ ( rbuf[ ( i - 163 ) & k_mask ] + rbuf[ ( i -  92 ) & k_mask ] ) * -0.00860359540941635706f // 35
		+ ( rbuf[ ( i - 164 ) & k_mask ] + rbuf[ ( i -  91 ) & k_mask ] ) *  0.00833710580533907585f // 36
		+ ( rbuf[ ( i - 165 ) & k_mask ] + rbuf[ ( i -  90 ) & k_mask ] ) * -0.00808317777685715541f // 37
		+ ( rbuf[ ( i - 166 ) & k_mask ] + rbuf[ ( i -  89 ) & k_mask ] ) *  0.00784079616696811005f // 38
		+ ( rbuf[ ( i - 167 ) & k_mask ] + rbuf[ ( i -  88 ) & k_mask ] ) * -0.00760904952262220647f // 39
		+ ( rbuf[ ( i - 168 ) & k_mask ] + rbuf[ ( i -  87 ) & k_mask ] ) *  0.00738711734001551868f // 40
		+ ( rbuf[ ( i - 169 ) & k_mask ] + rbuf[ ( i -  86 ) & k_mask ] ) * -0.00717425915519268043f // 41
		+ ( rbuf[ ( i - 170 ) & k_mask ] + rbuf[ ( i -  85 ) & k_mask ] ) *  0.00696980517602596109f // 42
		+ ( rbuf[ ( i - 171 ) & k_mask ] + rbuf[ ( i -  84 ) & k_mask ] ) * -0.00677314820753307893f // 43
		+ ( rbuf[ ( i - 172 ) & k_mask ] + rbuf[ ( i -  83 ) & k_mask ] ) *  0.00658373666708724024f // 44
		+ ( rbuf[ ( i - 173 ) & k_mask ] + rbuf[ ( i -  82 ) & k_mask ] ) * -0.00640106852184365357f // 45
		+ ( rbuf[ ( i - 174 ) & k_mask ] + rbuf[ ( i -  81 ) & k_mask ] ) *  0.00622468600955424466f // 46
		+ ( rbuf[ ( i - 175 ) & k_mask ] + rbuf[ ( i -  80 ) & k_mask ] ) * -0.00605417102732387375f // 47
		+ ( rbuf[ ( i - 176 ) & k_mask ] + rbuf[ ( i -  79 ) & k_mask ] ) *  0.00588914109190416014f // 48
		+ ( rbuf[ ( i - 177 ) & k_mask ] + rbuf[ ( i -  78 ) & k_mask ] ) * -0.00572924579070137070f // 49
		+ ( rbuf[ ( i - 178 ) & k_mask ] + rbuf[ ( i -  77 ) & k_mask ] ) *  0.00557416365547863668f // 50
		+ ( rbuf[ ( i - 179 ) & k_mask ] + rbuf[ ( i -  76 ) & k_mask ] ) * -0.00542359940129888071f // 51
		+ ( rbuf[ ( i - 180 ) & k_mask ] + rbuf[ ( i -  75 ) & k_mask ] ) *  0.00527728148200970124f // 52
		+ ( rbuf[ ( i - 181 ) & k_mask ] + rbuf[ ( i -  74 ) & k_mask ] ) * -0.00513495992085351034f // 53
		+ ( rbuf[ ( i - 182 ) & k_mask ] + rbuf[ ( i -  73 ) & k_mask ] ) *  0.00499640438086572554f // 54
		+ ( rbuf[ ( i - 183 ) & k_mask ] + rbuf[ ( i -  72 ) & k_mask ] ) * -0.00486140244481749525f // 55
		+ ( rbuf[ ( i - 184 ) & k_mask ] + rbuf[ ( i -  71 ) & k_mask ] ) *  0.00472975807874167088f // 56
		+ ( rbuf[ ( i - 185 ) & k_mask ] + rbuf[ ( i -  70 ) & k_mask ] ) * -0.00460129025669276867f // 57
		+ ( rbuf[ ( i - 186 ) & k_mask ] + rbuf[ ( i -  69 ) & k_mask ] ) *  0.00447583172744797208f // 58
		+ ( rbuf[ ( i - 187 ) & k_mask ] + rbuf[ ( i -  68 ) & k_mask ] ) * -0.00435322790645021121f // 59
		+ ( rbuf[ ( i - 188 ) & k_mask ] + rbuf[ ( i -  67 ) & k_mask ] ) *  0.00423333587850251592f // 60
		+ ( rbuf[ ( i - 189 ) & k_mask ] + rbuf[ ( i -  66 ) & k_mask ] ) * -0.00411602349860780512f // 61
		+ ( rbuf[ ( i - 190 ) & k_mask ] + rbuf[ ( i -  65 ) & k_mask ] ) *  0.00400116857996180627f // 62
		+ ( rbuf[ ( i - 191 ) & k_mask ] + rbuf[ ( i -  64 ) & k_mask ] ) * -0.00388865815949170470f // 63
		+ ( rbuf[ ( i - 192 ) & k_mask ] + rbuf[ ( i -  63 ) & k_mask ] ) *  0.00377838783252467791f // 64
		+ ( rbuf[ ( i - 193 ) & k_mask ] + rbuf[ ( i -  62 ) & k_mask ] ) * -0.00367026114919839774f // 65
		+ ( rbuf[ ( i - 194 ) & k_mask ] + rbuf[ ( i -  61 ) & k_mask ] ) *  0.00356418906611435460f // 66
		+ ( rbuf[ ( i - 195 ) & k_mask ] + rbuf[ ( i -  60 ) & k_mask ] ) * -0.00346008944750510802f // 67
		+ ( rbuf[ ( i - 196 ) & k_mask ] + rbuf[ ( i -  59 ) & k_mask ] ) *  0.00335788661085564821f // 68
		+ ( rbuf[ ( i - 197 ) & k_mask ] + rbuf[ ( i -  58 ) & k_mask ] ) * -0.00325751091250148358f // 69
		+ ( rbuf[ ( i - 198 ) & k_mask ] + rbuf[ ( i -  57 ) & k_mask ] ) *  0.00315889836923412054f // 70
		+ ( rbuf[ ( i - 199 ) & k_mask ] + rbuf[ ( i -  56 ) & k_mask ] ) * -0.00306199031238874519f // 71
		+ ( rbuf[ ( i - 200 ) & k_mask ] + rbuf[ ( i -  55 ) & k_mask ] ) *  0.00296673307127790073f // 72
		+ ( rbuf[ ( i - 201 ) & k_mask ] + rbuf[ ( i -  54 ) & k_mask ] ) * -0.00287307768317628543f // 73
		+ ( rbuf[ ( i - 202 ) & k_mask ] + rbuf[ ( i -  53 ) & k_mask ] ) *  0.00278097962736195258f // 74
		+ ( rbuf[ ( i - 203 ) & k_mask ] + rbuf[ ( i -  52 ) & k_mask ] ) * -0.00269039858098350619f // 75
		+ ( rbuf[ ( i - 204 ) & k_mask ] + rbuf[ ( i -  51 ) & k_mask ] ) *  0.00260129819475614929f // 76
		+ ( rbuf[ ( i - 205 ) & k_mask ] + rbuf[ ( i -  50 ) & k_mask ] ) * -0.00251364588669559250f // 77
		+ ( rbuf[ ( i - 206 ) & k_mask ] + rbuf[ ( i -  49 ) & k_mask ] ) *  0.00242741265228133907f // 78
		+ ( rbuf[ ( i - 207 ) & k_mask ] + rbuf[ ( i -  48 ) & k_mask ] ) * -0.00234257288960275150f // 79
		+ ( rbuf[ ( i - 208 ) & k_mask ] + rbuf[ ( i -  47 ) & k_mask ] ) *  0.00225910423818503989f // 80
		+ ( rbuf[ ( i - 209 ) & k_mask ] + rbuf[ ( i -  46 ) & k_mask ] ) * -0.00217698743032020570f // 81
		+ ( rbuf[ ( i - 210 ) & k_mask ] + rbuf[ ( i -  45 ) & k_mask ] ) *  0.00209620615384192681f // 82
		+ ( rbuf[ ( i - 211 ) & k_mask ] + rbuf[ ( i -  44 ) & k_mask ] ) * -0.00201674692538499978f // 83
		+ ( rbuf[ ( i - 212 ) & k_mask ] + rbuf[ ( i -  43 ) & k_mask ] ) *  0.00193859897326079892f // 84
		+ ( rbuf[ ( i - 213 ) & k_mask ] + rbuf[ ( i -  42 ) & k_mask ] ) * -0.00186175412916148421f // 85
		+ ( rbuf[ ( i - 214 ) & k_mask ] + rbuf[ ( i -  41 ) & k_mask ] ) *  0.00178620672797847832f // 86
		+ ( rbuf[ ( i - 215 ) & k_mask ] + rbuf[ ( i -  40 ) & k_mask ] ) * -0.00171195351508608403f // 87
		+ ( rbuf[ ( i - 216 ) & k_mask ] + rbuf[ ( i -  39 ) & k_mask ] ) *  0.00163899356049977338f // 88
		+ ( rbuf[ ( i - 217 ) & k_mask ] + rbuf[ ( i -  38 ) & k_mask ] ) * -0.00156732817937146516f // 89
		+ ( rbuf[ ( i - 218 ) & k_mask ] + rbuf[ ( i -  37 ) & k_mask ] ) *  0.00149696085833163372f // 90
		+ ( rbuf[ ( i - 219 ) & k_mask ] + rbuf[ ( i -  36 ) & k_mask ] ) * -0.00142789718723096057f // 91
		+ ( rbuf[ ( i - 220 ) & k_mask ] + rbuf[ ( i -  35 ) & k_mask ] ) *  0.00136014479587290228f // 92
		+ ( rbuf[ ( i - 221 ) & k_mask ] + rbuf[ ( i -  34 ) & k_mask ] ) * -0.00129371329536353066f // 93
		+ ( rbuf[ ( i - 222 ) & k_mask ] + rbuf[ ( i -  33 ) & k_mask ] ) *  0.00122861422373662737f // 94
		+ ( rbuf[ ( i - 223 ) & k_mask ] + rbuf[ ( i -  32 ) & k_mask ] ) * -0.00116486099554065207f // 95
		+ ( rbuf[ ( i - 224 ) & k_mask ] + rbuf[ ( i -  31 ) & k_mask ] ) *  0.00110246885510020798f // 96
		+ ( rbuf[ ( i - 225 ) & k_mask ] + rbuf[ ( i -  30 ) & k_mask ] ) * -0.00104145483318818623f // 97
		+ ( rbuf[ ( i - 226 ) & k_mask ] + rbuf[ ( i -  29 ) & k_mask ] ) *  0.00098183770686620831f // 98
		+ ( rbuf[ ( i - 227 ) & k_mask ] + rbuf[ ( i -  28 ) & k_mask ] ) * -0.00092363796227047082f // 99
		+ ( rbuf[ ( i - 228 ) & k_mask ] + rbuf[ ( i -  27 ) & k_mask ] ) *  0.00086687776013784194f // 100
		+ ( rbuf[ ( i - 229 ) & k_mask ] + rbuf[ ( i -  26 ) & k_mask ] ) * -0.00081158090388322251f // 101
		+ ( rbuf[ ( i - 230 ) & k_mask ] + rbuf[ ( i -  25 ) & k_mask ] ) *  0.00075777281005394383f // 102
		+ ( rbuf[ ( i - 231 ) & k_mask ] + rbuf[ ( i -  24 ) & k_mask ] ) * -0.00070548048100043368f // 103
		+ ( rbuf[ ( i - 232 ) & k_mask ] + rbuf[ ( i -  23 ) & k_mask ] ) *  0.00065473247961469290f // 104
		+ ( rbuf[ ( i - 233 ) & k_mask ] + rbuf[ ( i -  22 ) & k_mask ] ) * -0.00060555890599938193f // 105
		+ ( rbuf[ ( i - 234 ) & k_mask ] + rbuf[ ( i -  21 ) & k_mask ] ) *  0.00055799137594062258f // 106
		+ ( rbuf[ ( i - 235 ) & k_mask ] + rbuf[ ( i -  20 ) & k_mask ] ) * -0.00051206300106706451f // 107
		+ ( rbuf[ ( i - 236 ) & k_mask ] + rbuf[ ( i -  19 ) & k_mask ] ) *  0.00046780837058642391f // 108
		+ ( rbuf[ ( i - 237 ) & k_mask ] + rbuf[ ( i -  18 ) & k_mask ] ) * -0.00042526353449865275f // 109
		+ ( rbuf[ ( i - 238 ) & k_mask ] + rbuf[ ( i -  17 ) & k_mask ] ) *  0.00038446598819219573f // 110
		+ ( rbuf[ ( i - 239 ) & k_mask ] + rbuf[ ( i -  16 ) & k_mask ] ) * -0.00034545465833650356f // 111
		+ ( rbuf[ ( i - 240 ) & k_mask ] + rbuf[ ( i -  15 ) & k_mask ] ) *  0.00030826988999014843f // 112
		+ ( rbuf[ ( i - 241 ) & k_mask ] + rbuf[ ( i -  14 ) & k_mask ] ) * -0.00027295343484956861f // 113
		+ ( rbuf[ ( i - 242 ) & k_mask ] + rbuf[ ( i -  13 ) & k_mask ] ) *  0.00023954844056871139f // 114
		+ ( rbuf[ ( i - 243 ) & k_mask ] + rbuf[ ( i -  12 ) & k_mask ] ) * -0.00020809944108466963f // 115
		+ ( rbuf[ ( i - 244 ) & k_mask ] + rbuf[ ( i -  11 ) & k_mask ] ) *  0.00017865234788886695f // 116
		+ ( rbuf[ ( i - 245 ) & k_mask ] + rbuf[ ( i -  10 ) & k_mask ] ) * -0.00015125444218746083f // 117
		+ ( rbuf[ ( i - 246 ) & k_mask ] + rbuf[ ( i -   9 ) & k_mask ] ) *  0.00012595436789843587f // 118
		+ ( rbuf[ ( i - 247 ) & k_mask ] + rbuf[ ( i -   8 ) & k_mask ] ) * -0.00010280212543637632f // 119
		+ ( rbuf[ ( i - 248 ) & k_mask ] + rbuf[ ( i -   7 ) & k_mask ] ) *  0.00008184906623916001f // 120
		+ ( rbuf[ ( i - 249 ) & k_mask ] + rbuf[ ( i -   6 ) & k_mask ] ) * -0.00006314788799383008f // 121
		+ ( rbuf[ ( i - 250 ) & k_mask ] + rbuf[ ( i -   5 ) & k_mask ] ) *  0.00004675263052169054f // 122
		+ ( rbuf[ ( i - 251 ) & k_mask ] + rbuf[ ( i -   4 ) & k_mask ] ) * -0.00003271867228526168f // 123
		+ ( rbuf[ ( i - 252 ) & k_mask ] + rbuf[ ( i -   3 ) & k_mask ] ) *  0.00002110272748213063f // 124
		+ ( rbuf[ ( i - 253 ) & k_mask ] + rbuf[ ( i -   2 ) & k_mask ] ) * -0.00001196284369296215f // 125
		+ ( rbuf[ ( i - 254 ) & k_mask ] + rbuf[ ( i -   1 ) & k_mask ] ) *  0.00000535840005300469f // 126
		+ ( rbuf[ ( i - 255 ) & k_mask ] + rbuf[ ( i -   0 ) & k_mask ] ) * -0.00000135010591835078f // 127
		;
	}
};

struct dn2x_0128
{
	enum
	{
		k_kernel_half_size = 128,
		k_buffer_size      = 256,
		k_mask             = 255,
	};

	static float decimate( const float* rbuf, unsigned int i )
	{
		return
		+   rbuf[ ( i - 127 ) & k_mask ]                                  *  0.50000043672342431300f //  0 <- center
		+ ( rbuf[ ( i - 128 ) & k_mask ] + rbuf[ ( i - 126 ) & k_mask ] ) *  0.31820171475388708826f //  1
		+ ( rbuf[ ( i - 130 ) & k_mask ] + rbuf[ ( i - 124 ) & k_mask ] ) * -0.10577844782153067449f //  3
		+ ( rbuf[ ( i - 132 ) & k_mask ] + rbuf[ ( i - 122 ) & k_mask ] ) *  0.06312182302061060402f //  5
		+ ( rbuf[ ( i - 134 ) & k_mask ] + rbuf[ ( i - 120 ) & k_mask ] ) * -0.04471942612444721604f //  7
		+ ( rbuf[ ( i - 136 ) & k_mask ] + rbuf[ ( i - 118 ) & k_mask ] ) *  0.03440390995684042968f //  9
		+ ( rbuf[ ( i - 138 ) & k_mask ] + rbuf[ ( i - 116 ) & k_mask ] ) * -0.02776654968852666425f // 11
		+ ( rbuf[ ( i - 140 ) & k_mask ] + rbuf[ ( i - 114 ) & k_mask ] ) *  0.02311212642868547620f // 13
		+ ( rbuf[ ( i - 142 ) & k_mask ] + rbuf[ ( i - 112 ) & k_mask ] ) * -0.01964989965530501703f // 15
		+ ( rbuf[ ( i - 144 ) & k_mask ] + rbuf[ ( i - 110 ) & k_mask ] ) *  0.01696153680636958844f // 17
		+ ( rbuf[ ( i - 146 ) & k_mask ] + rbuf[ ( i - 108 ) & k_mask ] ) * -0.01480508454790117369f // 19
		+ ( rbuf[ ( i - 148 ) & k_mask ] + rbuf[ ( i - 106 ) & k_mask ] ) *  0.01303095425760789940f // 21
		+ ( rbuf[ ( i - 150 ) & k_mask ] + rbuf[ ( i - 104 ) & k_mask ] ) * -0.01154173948012664555f // 23
		+ ( rbuf[ ( i - 152 ) & k_mask ] + rbuf[ ( i - 102 ) & k_mask ] ) *  0.01027131976558594111f // 25
		+ ( rbuf[ ( i - 154 ) & k_mask ] + rbuf[ ( i - 100 ) & k_mask ] ) * -0.00917325085014246248f // 27
		+ ( rbuf[ ( i - 156 ) & k_mask ] + rbuf[ ( i -  98 ) & k_mask ] ) *  0.00821395840875291036f // 29
		+ ( rbuf[ ( i - 158 ) & k_mask ] + rbuf[ ( i -  96 ) & k_mask ] ) * -0.00736856630041478593f // 31
		+ ( rbuf[ ( i - 160 ) & k_mask ] + rbuf[ ( i -  94 ) & k_mask ] ) *  0.00661824189908483303f // 33
		+ ( rbuf[ ( i - 162 ) & k_mask ] + rbuf[ ( i -  92 ) & k_mask ] ) * -0.00594845191212059043f // 35
		+ ( rbuf[ ( i - 164 ) & k_mask ] + rbuf[ ( i -  90 ) & k_mask ] ) *  0.00534778439164233788f // 37
		+ ( rbuf[ ( i - 166 ) & k_mask ] + rbuf[ ( i -  88 ) & k_mask ] ) * -0.00480713388139220738f // 39
		+ ( rbuf[ ( i - 168 ) & k_mask ] + rbuf[ ( i -  86 ) & k_mask ] ) *  0.00431912586949313639f // 41
		+ ( rbuf[ ( i - 170 ) & k_mask ] + rbuf[ ( i -  84 ) & k_mask ] ) * -0.00387770277782988927f // 43
		+ ( rbuf[ ( i - 172 ) & k_mask ] + rbuf[ ( i -  82 ) & k_mask ] ) *  0.00347782135301550948f // 45
		+ ( rbuf[ ( i - 174 ) & k_mask ] + rbuf[ ( i -  80 ) & k_mask ] ) * -0.00311522837328508020f // 47
		+ ( rbuf[ ( i - 176 ) & k_mask ] + rbuf[ ( i -  78 ) & k_mask ] ) *  0.00278629237086812365f // 49
		+ ( rbuf[ ( i - 178 ) & k_mask ] + rbuf[ ( i -  76 ) & k_mask ] ) * -0.00248787604731161033f // 51
		+ ( rbuf[ ( i - 180 ) & k_mask ] + rbuf[ ( i -  74 ) & k_mask ] ) *  0.00221723866690848748f // 53
		+ ( rbuf[ ( i - 182 ) & k_mask ] + rbuf[ ( i -  72 ) & k_mask ] ) * -0.00197196081306408918f // 55
		+ ( rbuf[ ( i - 184 ) & k_mask ] + rbuf[ ( i -  70 ) & k_mask ] ) *  0.00174988601353972162f // 57
		+ ( rbuf[ ( i - 186 ) & k_mask ] + rbuf[ ( i -  68 ) & k_mask ] ) * -0.00154907521505710257f // 59
		+ ( rbuf[ ( i - 188 ) & k_mask ] + rbuf[ ( i -  66 ) & k_mask ] ) *  0.00136777112797995134f // 61
		+ ( rbuf[ ( i - 190 ) & k_mask ] + rbuf[ ( i -  64 ) & k_mask ] ) * -0.00120437020582059707f // 63
		+ ( rbuf[ ( i - 192 ) & k_mask ] + rbuf[ ( i -  62 ) & k_mask ] ) *  0.00105740056349150910f // 65
		+ ( rbuf[ ( i - 194 ) & k_mask ] + rbuf[ ( i -  60 ) & k_mask ] ) * -0.00092550453385489275f // 67
		+ ( rbuf[ ( i - 196 ) & k_mask ] + rbuf[ ( i -  58 ) & k_mask ] ) *  0.00080742485595833324f // 69
		+ ( rbuf[ ( i - 198 ) & k_mask ] + rbuf[ ( i -  56 ) & k_mask ] ) * -0.00070199370915615409f // 71
		+ ( rbuf[ ( i - 200 ) & k_mask ] + rbuf[ ( i -  54 ) & k_mask ] ) *  0.00060812397517661970f // 73
		+ ( rbuf[ ( i - 202 ) & k_mask ] + rbuf[ ( i -  52 ) & k_mask ] ) * -0.00052480223925681477f // 75
		+ ( rbuf[ ( i - 204 ) & k_mask ] + rbuf[ ( i -  50 ) & k_mask ] ) *  0.00045108314180813508f // 77
		+ ( rbuf[ ( i - 206 ) & k_mask ] + rbuf[ ( i -  48 ) & k_mask ] ) * -0.00038608477093763526f // 79
		+ ( rbuf[ ( i - 208 ) & k_mask ] + rbuf[ ( i -  46 ) & k_mask ] ) *  0.00032898484878146568f // 81
		+ ( rbuf[ ( i - 210 ) & k_mask ] + rbuf[ ( i -  44 ) & k_mask ] ) * -0.00027901751483729346f // 83
		+ ( rbuf[ ( i - 212 ) & k_mask ] + rbuf[ ( i -  42 ) & k_mask ] ) *  0.00023547055012988869f // 85
		+ ( rbuf[ ( i - 214 ) & k_mask ] + rbuf[ ( i -  40 ) & k_mask ] ) * -0.00019768291919310100f // 87
		+ ( rbuf[ ( i - 216 ) & k_mask ] + rbuf[ ( i -  38 ) & k_mask ] ) *  0.00016504253405559899f // 89
		+ ( rbuf[ ( i - 218 ) & k_mask ] + rbuf[ ( i -  36 ) & k_mask ] ) * -0.00013698416684232822f // 91
		+ ( rbuf[ ( i - 220 ) & k_mask ] + rbuf[ ( i -  34 ) & k_mask ] ) *  0.00011298745612901185f // 93
		+ ( rbuf[ ( i - 222 ) & k_mask ] + rbuf[ ( i -  32 ) & k_mask ] ) * -0.00009257496748422526f // 95
		+ ( rbuf[ ( i - 224 ) & k_mask ] + rbuf[ ( i -  30 ) & k_mask ] ) *  0.00007531028121945474f // 97
		+ ( rbuf[ ( i - 226 ) & k_mask ] + rbuf[ ( i -  28 ) & k_mask ] ) * -0.00006079609064538608f // 99
		+ ( rbuf[ ( i - 228 ) & k_mask ] + rbuf[ ( i -  26 ) & k_mask ] ) *  0.00004867230242258961f // 101
		+ ( rbuf[ ( i - 230 ) & k_mask ] + rbuf[ ( i -  24 ) & k_mask ] ) * -0.00003861413715585732f // 103
		+ ( rbuf[ ( i - 232 ) & k_mask ] + rbuf[ ( i -  22 ) & k_mask ] ) *  0.00003033023342871520f // 105
		+ ( rbuf[ ( i - 234 ) & k_mask ] + rbuf[ ( i -  20 ) & k_mask ] ) * -0.00002356076219116503f // 107
		+ ( rbuf[ ( i - 236 ) & k_mask ] + rbuf[ ( i -  18 ) & k_mask ] ) *  0.00001807556095991517f // 109
		+ ( rbuf[ ( i - 238 ) & k_mask ] + rbuf[ ( i -  16 ) & k_mask ] ) * -0.00001367229881050227f // 111
		+ ( rbuf[ ( i - 240 ) & k_mask ] + rbuf[ ( i -  14 ) & k_mask ] ) *  0.00001017468376778602f // 113
		+ ( rbuf[ ( i - 242 ) & k_mask ] + rbuf[ ( i -  12 ) & k_mask ] ) * -0.00000743072406014391f // 115
		+ ( rbuf[ ( i - 244 ) & k_mask ] + rbuf[ ( i -  10 ) & k_mask ] ) *  0.00000531105391232554f // 117
		+ ( rbuf[ ( i - 246 ) & k_mask ] + rbuf[ ( i -   8 ) & k_mask ] ) * -0.00000370733322659089f // 119
		+ ( rbuf[ ( i - 248 ) & k_mask ] + rbuf[ ( i -   6 ) & k_mask ] ) *  0.00000253072875177439f // 121
		+ ( rbuf[ ( i - 250 ) & k_mask ] + rbuf[ ( i -   4 ) & k_mask ] ) * -0.00000171048227153781f // 123
		+ ( rbuf[ ( i - 252 ) & k_mask ] + rbuf[ ( i -   2 ) & k_mask ] ) *  0.00000119256905839523f // 125
		+ ( rbuf[ ( i - 254 ) & k_mask ] + rbuf[ ( i -   0 ) & k_mask ] ) * -0.00000093844743632663f // 127
		;
	}
};

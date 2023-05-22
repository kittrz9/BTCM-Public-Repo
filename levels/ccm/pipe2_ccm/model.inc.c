Lights1 pipe2_ccm_Pipe_001_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx pipe2_ccm_MetalTile_i8_aligner[] = {gsSPEndDisplayList()};
u8 pipe2_ccm_MetalTile_i8[] = {
	0xdf, 0xdf, 0xff, 0xdf, 0xd3, 0xd3, 0xd3, 0xc0, 
	0xb9, 0xb9, 0xb9, 0xb9, 0xc5, 0xc5, 0xcc, 0xcc, 
	0xd8, 0xd8, 0xd0, 0xd0, 0xe0, 0xe0, 0xe8, 0xe8, 
	0xf7, 0xf7, 0xf7, 0xd8, 0xd0, 0xd0, 0xc0, 0xc0, 
	0xdf, 0xff, 0xc8, 0xad, 0xb0, 0xc0, 0xd3, 0xd3, 
	0xd0, 0xd0, 0xe0, 0xe0, 0xec, 0xec, 0xec, 0xec, 
	0xef, 0xef, 0xef, 0xef, 0xf0, 0xf0, 0xf0, 0xf0, 
	0xf7, 0xc4, 0xad, 0xad, 0xaa, 0xb0, 0xd0, 0xc0, 
	0xdf, 0xc8, 0xad, 0xad, 0xa2, 0xb0, 0xc0, 0xd3, 
	0xe0, 0xe0, 0xf7, 0xe0, 0xec, 0xec, 0xec, 0xec, 
	0xe0, 0xe0, 0xef, 0xe0, 0xe8, 0xf0, 0xe8, 0xe8, 
	0xd8, 0xad, 0xad, 0xc4, 0xb0, 0xaa, 0xd0, 0xd0, 
	0xdf, 0xc8, 0xad, 0xc8, 0xb0, 0xa2, 0xc0, 0xd3, 
	0xe0, 0xe0, 0xf7, 0xf7, 0xec, 0xdc, 0xec, 0xec, 
	0xe0, 0xd8, 0xe0, 0xe0, 0xe0, 0xe8, 0xf0, 0xe8, 
	0xd8, 0xad, 0xad, 0xad, 0xb0, 0xaa, 0xd0, 0xd0, 
	0xd3, 0xc0, 0xad, 0xc0, 0xad, 0xad, 0xb4, 0xd0, 
	0xd8, 0xe8, 0xe8, 0xe8, 0xe4, 0xdc, 0xe4, 0xf0, 
	0xe8, 0xe0, 0xdc, 0xdc, 0xd8, 0xe3, 0xe3, 0xe3, 
	0xe8, 0xad, 0xad, 0xad, 0xaa, 0xaa, 0xe0, 0xc8, 
	0xd3, 0xd3, 0xc0, 0xad, 0xad, 0xad, 0xc0, 0xc0, 
	0xd8, 0xdf, 0xe8, 0xe8, 0xe4, 0xe4, 0xe4, 0xe4, 
	0xe0, 0xe0, 0xdc, 0xdc, 0xd8, 0xe3, 0xe3, 0xe3, 
	0xe8, 0xd0, 0xad, 0xad, 0xaa, 0xb8, 0xe0, 0xc8, 
	0xd3, 0xef, 0xd3, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 
	0xd8, 0xdf, 0xe8, 0xe8, 0xe0, 0xdc, 0xf0, 0xe4, 
	0xe8, 0xe8, 0xe0, 0xdc, 0xd0, 0xd0, 0xd0, 0xd8, 
	0xe8, 0xe8, 0xd0, 0xd0, 0xc8, 0xe0, 0xe0, 0xb8, 
	0xc0, 0xef, 0xef, 0xd3, 0xc0, 0xc0, 0xc0, 0xd0, 
	0xd8, 0xd8, 0xe8, 0xd8, 0xe0, 0xe0, 0xf0, 0xf0, 
	0xe8, 0xe8, 0xe0, 0xdc, 0xd8, 0xd0, 0xcc, 0xcc, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xe0, 0xe0, 0xe0, 0xb8, 
	0xd8, 0xe8, 0xe8, 0xd3, 0xd0, 0xcc, 0xcc, 0xd0, 
	0xe0, 0xe0, 0xdb, 0xe0, 0xef, 0xef, 0xef, 0xef, 
	0xf0, 0xf0, 0xe8, 0xe0, 0xd4, 0xcc, 0xcc, 0xcc, 
	0xc8, 0xd0, 0xd0, 0xd0, 0xe0, 0xe0, 0xc8, 0xc0, 
	0xcc, 0xd8, 0xe8, 0xcc, 0xcc, 0xd0, 0xd0, 0xd8, 
	0xdb, 0xdb, 0xe0, 0xe0, 0xef, 0xf4, 0xf4, 0xef, 
	0xf0, 0xe8, 0xe0, 0xe0, 0xd4, 0xcc, 0xcc, 0xcc, 
	0xd0, 0xc8, 0xc8, 0xc5, 0xe0, 0xe0, 0xc8, 0xc0, 
	0xd8, 0xd3, 0xe8, 0xcc, 0xd0, 0xd0, 0xd8, 0xe4, 
	0xe8, 0xe8, 0xe0, 0xe8, 0xef, 0xf4, 0xf3, 0xf4, 
	0xf0, 0xe8, 0xe8, 0xe8, 0xdc, 0xd4, 0xcc, 0xd4, 
	0xc8, 0xc8, 0xc5, 0xc5, 0xc8, 0xe0, 0xc8, 0xb0, 
	0xd3, 0xcc, 0xe8, 0xd8, 0xd8, 0xd8, 0xe4, 0xe4, 
	0xe8, 0xe8, 0xe8, 0xe8, 0xef, 0xf3, 0xef, 0xf3, 
	0xf0, 0xf0, 0xe8, 0xe8, 0xdc, 0xcc, 0xcc, 0xd4, 
	0xd0, 0xd0, 0xc5, 0xc5, 0xc8, 0xe0, 0xc0, 0xb0, 
	0xd3, 0xd3, 0xe0, 0xd3, 0xd3, 0xe0, 0xe0, 0xe0, 
	0xe8, 0xe8, 0xf3, 0xf3, 0xef, 0xf7, 0xef, 0xf7, 
	0xeb, 0xeb, 0xeb, 0xe0, 0xdc, 0xd4, 0xd4, 0xd4, 
	0xd4, 0xc8, 0xc8, 0xbc, 0xc5, 0xdc, 0xc5, 0xa5, 
	0xc8, 0xe0, 0xf3, 0xe0, 0xd3, 0xe0, 0xe0, 0xe0, 
	0xf3, 0xf3, 0xeb, 0xf3, 0xef, 0xf7, 0xf7, 0xf7, 
	0xeb, 0xeb, 0xeb, 0xe0, 0xd4, 0xd0, 0xd4, 0xd4, 
	0xc8, 0xd4, 0xc8, 0xc0, 0xc5, 0xdc, 0xc5, 0xa5, 
	0xc8, 0xf3, 0xf3, 0xe0, 0xd8, 0xd8, 0xe0, 0xe0, 
	0xf3, 0xf3, 0xeb, 0xf3, 0xef, 0xf7, 0xf7, 0xef, 
	0xeb, 0xe0, 0xe0, 0xe0, 0xd4, 0xd4, 0xd0, 0xd0, 
	0xc8, 0xd4, 0xc8, 0xc0, 0xc5, 0xdc, 0xb4, 0xa5, 
	0xc8, 0xf3, 0xf3, 0xe0, 0xe0, 0xd8, 0xd8, 0xd8, 
	0xeb, 0xeb, 0xeb, 0xf3, 0xef, 0xef, 0xef, 0xeb, 
	0xeb, 0xeb, 0xdb, 0xd8, 0xd4, 0xd0, 0xd0, 0xd0, 
	0xc8, 0xc8, 0xc8, 0xc0, 0xc5, 0xdc, 0xb4, 0xa5, 
	0xc8, 0xef, 0xff, 0xef, 0xf0, 0xe8, 0xe8, 0xe8, 
	0xeb, 0xf3, 0xeb, 0xf3, 0xeb, 0xeb, 0xeb, 0xe0, 
	0xd8, 0xe0, 0xd8, 0xd0, 0xd0, 0xd0, 0xd0, 0xd0, 
	0xc5, 0xc5, 0xc5, 0xbc, 0xbd, 0xcc, 0xbd, 0xad, 
	0xc8, 0xef, 0xff, 0xef, 0xfb, 0xf0, 0xfb, 0xf0, 
	0xeb, 0xeb, 0xe3, 0xeb, 0xeb, 0xeb, 0xe0, 0xdb, 
	0xe0, 0xd8, 0xd8, 0xd0, 0xd0, 0xd0, 0xd0, 0xc8, 
	0xc5, 0xbc, 0xc5, 0xbc, 0xbd, 0xcc, 0xbd, 0xb4, 
	0xc8, 0xef, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xfb, 
	0xeb, 0xeb, 0xeb, 0xe3, 0xe0, 0xe0, 0xe0, 0xd8, 
	0xd8, 0xd0, 0xd0, 0xd0, 0xc8, 0xd0, 0xc8, 0xc8, 
	0xbc, 0xbc, 0xb4, 0xbc, 0xb4, 0xcc, 0xb4, 0xad, 
	0xc8, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 
	0xf3, 0xe3, 0xe3, 0xe3, 0xdb, 0xdb, 0xd8, 0xd8, 
	0xd8, 0xd0, 0xd0, 0xd0, 0xc0, 0xc0, 0xc0, 0xc8, 
	0xbc, 0xb4, 0xb4, 0xb4, 0xad, 0xcc, 0xad, 0xad, 
	0xcc, 0xdb, 0xff, 0xff, 0xfb, 0xfb, 0xfb, 0xeb, 
	0xe3, 0xe3, 0xd3, 0xdb, 0xdb, 0xdb, 0xdb, 0xdb, 
	0xd3, 0xcc, 0xcc, 0xc4, 0xbc, 0xbc, 0xc0, 0xc0, 
	0xb8, 0xb8, 0xb8, 0xb8, 0xb0, 0xc0, 0xad, 0xad, 
	0xcc, 0xdb, 0xff, 0xff, 0xfb, 0xeb, 0xeb, 0xeb, 
	0xdb, 0xdb, 0xdb, 0xd3, 0xd3, 0xcc, 0xdb, 0xdb, 
	0xd3, 0xd3, 0xcc, 0xc4, 0xbc, 0xc0, 0xc0, 0xc0, 
	0xc0, 0xc8, 0xb8, 0xb8, 0xb0, 0xb4, 0xad, 0xb0, 
	0xcc, 0xdb, 0xff, 0xff, 0xeb, 0xe3, 0xe3, 0xe3, 
	0xe3, 0xd3, 0xd3, 0xdb, 0xd3, 0xd3, 0xd3, 0xd3, 
	0xd3, 0xd3, 0xcc, 0xc4, 0xc0, 0xc0, 0xc0, 0xc0, 
	0xc8, 0xc0, 0xc0, 0xb8, 0xb4, 0xb4, 0xb0, 0xb4, 
	0xdb, 0xe8, 0xff, 0xe8, 0xe3, 0xdb, 0xdb, 0xdb, 
	0xd3, 0xd3, 0xd3, 0xd3, 0xcc, 0xcc, 0xd3, 0xd3, 
	0xd3, 0xcc, 0xcc, 0xcc, 0xc0, 0xc8, 0xc8, 0xc8, 
	0xc8, 0xc0, 0xc0, 0xc8, 0xb4, 0xb4, 0xc0, 0xc0, 
	0xd0, 0xe3, 0xe3, 0xe3, 0xc8, 0xc8, 0xc8, 0xc8, 
	0xd3, 0xd3, 0xcc, 0xcc, 0xd0, 0xd8, 0xd8, 0xd0, 
	0xd0, 0xcc, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 0xc4, 
	0xc8, 0xc8, 0xe0, 0xc8, 0xc8, 0xc8, 0xb4, 0xc8, 
	0xe3, 0xe3, 0xe3, 0xe3, 0xe0, 0xe0, 0xc8, 0xe0, 
	0xcc, 0xcc, 0xcc, 0xcc, 0xd0, 0xe0, 0xd0, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xcc, 0xc4, 0xc4, 0xcc, 0xd3, 
	0xc8, 0xe0, 0xc8, 0xa5, 0xaa, 0xb4, 0xb4, 0xc8, 
	0xd0, 0xd0, 0xc0, 0xc0, 0xa5, 0xb8, 0xe0, 0xc8, 
	0xc4, 0xcc, 0xcc, 0xcc, 0xd8, 0xe0, 0xd8, 0xd0, 
	0xd0, 0xd0, 0xd0, 0xcc, 0xcc, 0xcc, 0xcc, 0xd3, 
	0xe0, 0xc8, 0xa5, 0xa5, 0x9e, 0x9e, 0xb4, 0xc8, 
	0xd0, 0xc0, 0xb4, 0xb4, 0xb8, 0xa5, 0xb8, 0xe0, 
	0xd3, 0xcc, 0xcc, 0xd3, 0xe0, 0xd8, 0xd8, 0xd8, 
	0xe0, 0xcc, 0xd0, 0xcc, 0xcc, 0xcc, 0xd3, 0xd3, 
	0xc8, 0xc8, 0xa5, 0xb8, 0xaa, 0x9e, 0xaa, 0xc8, 
	0xe8, 0xc8, 0x9e, 0xb4, 0xa5, 0xa5, 0xa5, 0xd5, 
	0xd8, 0xc8, 0xc8, 0xd8, 0xd8, 0xd8, 0xd8, 0xd8, 
	0xd0, 0xd0, 0xc5, 0xc5, 0xc8, 0xc0, 0xc8, 0xd8, 
	0xd0, 0xb4, 0xaa, 0xb4, 0xaa, 0x9e, 0x9e, 0xc8, 
	0xe8, 0xb4, 0x9e, 0x9e, 0xa5, 0xa5, 0xa5, 0xd5, 
	0xc8, 0xd8, 0xc8, 0xd8, 0xd8, 0xd8, 0xd8, 0xd8, 
	0xd0, 0xd0, 0xc5, 0xc5, 0xb9, 0xc8, 0xc0, 0xc8, 
	0xd0, 0xbc, 0xaa, 0xaa, 0xaa, 0x9e, 0xaa, 0xc8, 
	0xe8, 0xb4, 0x9e, 0x9e, 0xa5, 0xa5, 0xbd, 0xbd, 
	0xc8, 0xc0, 0xc8, 0xc8, 0xd8, 0xd8, 0xd8, 0xd8, 
	0xd0, 0xc5, 0xd0, 0xc0, 0xc0, 0xc8, 0xc8, 0xc8, 
	0xbc, 0xb4, 0xb4, 0xaa, 0x9e, 0xaa, 0xb4, 0xc8, 
	0xe8, 0xb4, 0xb4, 0xb4, 0xb4, 0xb4, 0xb4, 0xb4, 
	0xc0, 0xb8, 0xb8, 0xb8, 0xb4, 0xb4, 0xb4, 0xb4, 
	0xbd, 0xbd, 0xc0, 0xbd, 0xb9, 0xb9, 0xb9, 0xc0, 
	0xd0, 0xd0, 0xd0, 0xd0, 0xc8, 0xc8, 0xc8, 0xc8, 
	
};

Vtx pipe2_ccm_Pipe_004_mesh_vtx_cull[8] = {
	{{{-208, -25, 571},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-208, 1012, 571},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-208, 1012, -295},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-208, -25, -295},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{308, -25, 571},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{308, 1012, 571},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{308, 1012, -295},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{308, -25, -295},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
};

Vtx pipe2_ccm_Pipe_004_mesh_vtx_0[158] = {
	{{{-135, 65, -198},0, {-16, 1008},{0x2D, 0x20, 0x92, 0xFF}}},
	{{{-208, 65, -22},0, {1008, 1008},{0x48, 0x33, 0xEB, 0xFF}}},
	{{{41, 65, -22},0, {1008, -16},{0x47, 0x32, 0xE9, 0xFF}}},
	{{{41, 65, -22},0, {-16, 1008},{0x47, 0x32, 0xE9, 0xFF}}},
	{{{233, 81, 153},0, {1008, 1008},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{290, 65, -22},0, {1008, -16},{0x46, 0x32, 0xE6, 0xFF}}},
	{{{41, 65, 227},0, {1008, 1008},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{233, 81, 153},0, {1008, -16},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{-135, 65, 154},0, {1008, 1008},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{41, 65, 227},0, {1008, -16},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{-135, 65, 154},0, {1008, -16},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{24, 86, -295},0, {1008, 1008},{0x2D, 0x20, 0x92, 0xFF}}},
	{{{-135, 65, -198},0, {1008, -16},{0x2D, 0x20, 0x92, 0xFF}}},
	{{{217, 65, -198},0, {1008, 1008},{0x2D, 0x20, 0x91, 0xFF}}},
	{{{24, 86, -295},0, {1008, -16},{0x2D, 0x20, 0x92, 0xFF}}},
	{{{290, 65, -22},0, {1008, 1008},{0x46, 0x32, 0xE6, 0xFF}}},
	{{{217, 65, -198},0, {1008, -16},{0x2D, 0x20, 0x91, 0xFF}}},
	{{{-135, 526, 472},0, {-16, 1008},{0x7C, 0x63, 0xDD, 0xFF}}},
	{{{-208, 702, 472},0, {1008, 1008},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{41, 702, 472},0, {1008, -16},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{41, 702, 472},0, {-16, 1008},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{200, 861, 463},0, {1008, 1008},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{290, 702, 472},0, {1008, -16},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{41, 951, 472},0, {1008, 1008},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{200, 861, 463},0, {1008, -16},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{-124, 914, 470},0, {1008, 1008},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{41, 951, 472},0, {1008, -16},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{-124, 914, 470},0, {1008, -16},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{41, 453, 472},0, {1008, 1008},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{-135, 526, 472},0, {1008, -16},{0x7C, 0x63, 0xDD, 0xFF}}},
	{{{217, 526, 472},0, {1008, 1008},{0x82, 0x83, 0xFF, 0xFF}}},
	{{{41, 453, 472},0, {1008, -16},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{41, 702, 472},0, {-16, 1008},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{290, 702, 472},0, {1008, 1008},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{217, 526, 472},0, {1008, -16},{0x82, 0x83, 0xFF, 0xFF}}},
	{{{174, 65, 111},0, {982, 849},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{41, 514, 166},0, {-138, 951},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{41, 65, 166},0, {981, 983},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{174, 514, 111},0, {-127, 806},{0x7E, 0x7D, 0xFF, 0xFF}}},
	{{{229, 65, -22},0, {983, 712},{0x39, 0x28, 0xBA, 0xFF}}},
	{{{229, 514, -22},0, {-98, 666},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{202, 89, -151},0, {983, 571},{0x2D, 0x20, 0x92, 0xFF}}},
	{{{174, 514, -155},0, {-79, 541},{0x2C, 0x1F, 0x8F, 0xFF}}},
	{{{41, 65, -210},0, {983, 428},{0x2D, 0x20, 0x92, 0xFF}}},
	{{{41, 514, -210},0, {-74, 426},{0x2D, 0x20, 0x92, 0xFF}}},
	{{{-92, 65, -155},0, {983, 287},{0x2B, 0x1F, 0x8F, 0xFF}}},
	{{{-92, 514, -155},0, {-80, 311},{0x2D, 0x20, 0x92, 0xFF}}},
	{{{-147, 65, -22},0, {982, 151},{0x3D, 0x2B, 0xC7, 0xFF}}},
	{{{-147, 514, -22},0, {-101, 191},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{-76, 23, 89},0, {981, 13},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{-92, 514, 111},0, {-133, 43},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{41, 65, 166},0, {981, -125},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{41, 514, 166},0, {-134, -95},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{41, 514, 166},0, {-430, 985},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{174, 569, 472},0, {-893, 1002},{0x85, 0x86, 0xFF, 0xFF}}},
	{{{41, 514, 472},0, {-806, 1176},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{174, 569, 166},0, {-521, 823},{0x87, 0x89, 0xFF, 0xFF}}},
	{{{174, 553, 127},0, {-473, 800},{0x88, 0x8A, 0xFF, 0xFF}}},
	{{{229, 702, 166},0, {-624, 685},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{266, 657, 43},0, {-493, 641},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{229, 514, -22},0, {-362, 666},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{174, 514, 111},0, {-427, 806},{0x7E, 0x7D, 0xFF, 0xFF}}},
	{{{41, 514, 166},0, {-450, 951},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{174, 514, -155},0, {-321, 541},{0x2C, 0x1F, 0x8F, 0xFF}}},
	{{{174, 514, -155},0, {-321, 541},{0x2C, 0x1F, 0x8F, 0xFF}}},
	{{{174, 741, -61},0, {-500, 529},{0x2D, 0x20, 0x92, 0xFF}}},
	{{{266, 657, 43},0, {-493, 641},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{41, 514, -210},0, {-308, 426},{0x2D, 0x20, 0x92, 0xFF}}},
	{{{55, 733, -65},0, {-503, 433},{0x2D, 0x20, 0x92, 0xFF}}},
	{{{-92, 514, -155},0, {-323, 311},{0x2D, 0x20, 0x92, 0xFF}}},
	{{{-144, 758, -90},0, {-505, 332},{0x2D, 0x20, 0x92, 0xFF}}},
	{{{-147, 514, -22},0, {-370, 191},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{-147, 647, 33},0, {-503, 210},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{-92, 514, 111},0, {-441, 43},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{-92, 553, 127},0, {-100, 95},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{41, 514, 166},0, {-482, -134},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{-92, 569, 166},0, {-547, 36},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{-147, 702, 166},0, {-639, 185},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{-92, 569, 472},0, {-906, -91},{0x5E, 0x47, 0xF5, 0xFF}}},
	{{{41, 514, 472},0, {-846, -259},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{41, 514, 166},0, {-488, -132},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{-147, 702, 472},0, {-966, 77},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{-92, 835, 166},0, {-695, 311},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{-92, 835, 472},0, {-1015, 248},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{41, 890, 166},0, {-711, 434},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{41, 890, 472},0, {-1040, 433},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{209, 880, 188},0, {-687, 558},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{174, 835, 472},0, {-1026, 627},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{229, 702, 166},0, {-624, 685},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{229, 702, 472},0, {-973, 820},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{174, 569, 166},0, {-521, 823},{0x87, 0x89, 0xFF, 0xFF}}},
	{{{174, 569, 472},0, {-893, 1002},{0x85, 0x86, 0xFF, 0xFF}}},
	{{{-92, 514, 111},0, {-1040, -262},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{41, 514, 166},0, {-1040, -261},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{41, 514, 166},0, {-1040, -261},{0x4F, 0x38, 0xFF, 0xFF}}},
	{{{-92, 553, 127},0, {-1040, -260},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{-92, 569, 166},0, {-547, 36},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{-92, 553, 127},0, {-1039, -261},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{41, 514, 166},0, {-1039, -260},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{41, 514, 166},0, {-1039, -260},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{71, 895, 180},0, {-16, 1008},{0x0, 0x0, 0x0, 0xFF}}},
	{{{-16, 895, 230},0, {-16, 1008},{0x0, 0x0, 0x0, 0xFF}}},
	{{{-16, 895, 330},0, {-16, 1008},{0x0, 0x0, 0x0, 0xFF}}},
	{{{157, 895, 330},0, {-16, 1008},{0x0, 0x0, 0x0, 0xFF}}},
	{{{71, 895, 380},0, {-16, 1008},{0x0, 0x0, 0x0, 0xFF}}},
	{{{157, 895, 230},0, {-16, 1008},{0x0, 0x0, 0x0, 0xFF}}},
	{{{290, -25, -22},0, {-16, 369},{0x4D, 0x36, 0xFC, 0xFF}}},
	{{{290, 65, -22},0, {1008, 369},{0x46, 0x32, 0xE6, 0xFF}}},
	{{{233, 81, 153},0, {1008, 623},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{262, -14, -195},0, {-16, 623},{0x1D, 0x14, 0x5F, 0xFF}}},
	{{{217, 65, -198},0, {1008, 623},{0x2D, 0x20, 0x91, 0xFF}}},
	{{{41, -25, -271},0, {-16, 369},{0x1F, 0x16, 0x65, 0xFF}}},
	{{{24, 86, -295},0, {1008, 369},{0x2D, 0x20, 0x92, 0xFF}}},
	{{{-135, -25, -198},0, {-16, 623},{0x2D, 0x20, 0x93, 0xFF}}},
	{{{-135, 65, -198},0, {1008, 623},{0x2D, 0x20, 0x92, 0xFF}}},
	{{{-208, -25, -22},0, {-16, 369},{0x4D, 0x36, 0xFB, 0xFF}}},
	{{{-208, 65, -22},0, {1008, 369},{0x48, 0x33, 0xEB, 0xFF}}},
	{{{-135, -25, 154},0, {-16, 623},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{-135, 65, 154},0, {1008, 623},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{41, -25, 227},0, {-16, 369},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{41, 65, 227},0, {1008, 369},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{217, -25, 154},0, {-16, 623},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{308, 699, 571},0, {-16, 322},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{290, 702, 472},0, {1008, 322},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{200, 861, 463},0, {1008, 670},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{217, 526, 562},0, {-16, 670},{0x56, 0x45, 0xFF, 0xFF}}},
	{{{217, 526, 472},0, {1008, 670},{0x82, 0x83, 0xFF, 0xFF}}},
	{{{41, 453, 562},0, {-16, 322},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{41, 453, 562},0, {-16, 322},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{41, 453, 472},0, {1008, 322},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{217, 526, 472},0, {1008, 670},{0x82, 0x83, 0xFF, 0xFF}}},
	{{{-135, 526, 562},0, {-16, 670},{0xB5, 0x94, 0xBE, 0xFF}}},
	{{{-135, 526, 472},0, {1008, 670},{0x7C, 0x63, 0xDD, 0xFF}}},
	{{{-208, 702, 562},0, {-16, 322},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{-208, 702, 472},0, {1008, 322},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{-135, 878, 562},0, {-16, 670},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{-124, 914, 470},0, {1008, 670},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{41, 951, 562},0, {-16, 322},{0x4F, 0x38, 0xFF, 0xFF}}},
	{{{41, 951, 472},0, {1008, 322},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{217, 878, 562},0, {-16, 670},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{200, 861, 463},0, {1008, 670},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{308, 699, 571},0, {-16, 322},{0x4E, 0x37, 0xFF, 0xFF}}},
	{{{83, 841, 180},0, {240, 506},{0x2D, 0x20, 0x92, 0xFF}}},
	{{{74, 1012, 70},0, {240, 752},{0x2D, 0x20, 0x92, 0xFF}}},
	{{{128, 884, 223},0, {453, 875},{0x2D, 0x20, 0x92, 0xFF}}},
	{{{29, 876, 220},0, {27, 875},{0x2D, 0x20, 0x92, 0xFF}}},
	{{{-5, 828, 256},0, {240, 506},{0x2D, 0x20, 0x92, 0xFF}}},
	{{{-145, 974, 230},0, {240, 752},{0x2D, 0x20, 0x92, 0xFF}}},
	{{{39, 879, 220},0, {453, 875},{0x2D, 0x20, 0x92, 0xFF}}},
	{{{13, 871, 316},0, {27, 875},{0x2D, 0x20, 0x92, 0xFF}}},
	{{{68, 831, 365},0, {240, 506},{0x2D, 0x20, 0x92, 0xFF}}},
	{{{72, 995, 486},0, {240, 752},{0x2D, 0x20, 0x92, 0xFF}}},
	{{{16, 873, 329},0, {453, 875},{0x2D, 0x20, 0x92, 0xFF}}},
	{{{115, 874, 324},0, {27, 875},{0x2D, 0x20, 0x92, 0xFF}}},
	{{{169, 827, 272},0, {240, 506},{0x2D, 0x20, 0x92, 0xFF}}},
	{{{278, 998, 267},0, {240, 752},{0x2D, 0x20, 0x92, 0xFF}}},
	{{{134, 863, 329},0, {453, 875},{0x2D, 0x20, 0x92, 0xFF}}},
	{{{121, 868, 231},0, {27, 875},{0x2D, 0x20, 0x92, 0xFF}}},
};

Gfx pipe2_ccm_Pipe_004_mesh_tri_0[] = {
	gsSPVertex(pipe2_ccm_Pipe_004_mesh_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(3, 6, 7, 0, 3, 8, 9, 0),
	gsSP2Triangles(3, 1, 10, 0, 3, 11, 12, 0),
	gsSP2Triangles(3, 13, 14, 0, 3, 15, 16, 0),
	gsSP2Triangles(17, 18, 19, 0, 20, 21, 22, 0),
	gsSP2Triangles(20, 23, 24, 0, 20, 25, 26, 0),
	gsSP2Triangles(20, 18, 27, 0, 20, 28, 29, 0),
	gsSP1Triangle(20, 30, 31, 0),
	gsSPVertex(pipe2_ccm_Pipe_004_mesh_vtx_0 + 32, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(3, 6, 4, 0, 7, 6, 3, 0),
	gsSP2Triangles(7, 8, 6, 0, 9, 8, 7, 0),
	gsSP2Triangles(9, 10, 8, 0, 11, 10, 9, 0),
	gsSP2Triangles(11, 12, 10, 0, 13, 12, 11, 0),
	gsSP2Triangles(13, 14, 12, 0, 15, 14, 13, 0),
	gsSP2Triangles(15, 16, 14, 0, 17, 16, 15, 0),
	gsSP2Triangles(17, 18, 16, 0, 19, 18, 17, 0),
	gsSP2Triangles(19, 20, 18, 0, 21, 22, 23, 0),
	gsSP2Triangles(21, 24, 22, 0, 24, 21, 25, 0),
	gsSP2Triangles(26, 24, 25, 0, 26, 25, 27, 0),
	gsSP2Triangles(28, 27, 25, 0, 28, 25, 29, 0),
	gsSP2Triangles(29, 25, 30, 0, 31, 27, 28, 0),
	gsSPVertex(pipe2_ccm_Pipe_004_mesh_vtx_0 + 64, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSP2Triangles(3, 4, 1, 0, 5, 4, 3, 0),
	gsSP2Triangles(5, 6, 4, 0, 7, 6, 5, 0),
	gsSP2Triangles(7, 8, 6, 0, 9, 8, 7, 0),
	gsSP2Triangles(9, 10, 8, 0, 11, 10, 9, 0),
	gsSP2Triangles(12, 8, 10, 0, 12, 13, 8, 0),
	gsSP2Triangles(13, 12, 14, 0, 12, 15, 14, 0),
	gsSP2Triangles(12, 16, 15, 0, 13, 14, 17, 0),
	gsSP2Triangles(18, 13, 17, 0, 18, 17, 19, 0),
	gsSP2Triangles(20, 18, 19, 0, 20, 19, 21, 0),
	gsSP2Triangles(22, 20, 21, 0, 22, 21, 23, 0),
	gsSP2Triangles(24, 22, 23, 0, 24, 23, 25, 0),
	gsSP2Triangles(26, 24, 25, 0, 26, 25, 27, 0),
	gsSP2Triangles(22, 24, 2, 0, 22, 2, 1, 0),
	gsSP2Triangles(20, 22, 1, 0, 20, 1, 4, 0),
	gsSP2Triangles(18, 20, 4, 0, 18, 4, 6, 0),
	gsSP2Triangles(13, 18, 6, 0, 13, 6, 8, 0),
	gsSP2Triangles(28, 29, 30, 0, 29, 31, 30, 0),
	gsSPVertex(pipe2_ccm_Pipe_004_mesh_vtx_0 + 96, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
	gsSP2Triangles(6, 8, 7, 0, 7, 9, 4, 0),
	gsSP2Triangles(10, 11, 12, 0, 13, 11, 10, 0),
	gsSP2Triangles(13, 14, 11, 0, 15, 14, 13, 0),
	gsSP2Triangles(15, 16, 14, 0, 17, 16, 15, 0),
	gsSP2Triangles(17, 18, 16, 0, 19, 18, 17, 0),
	gsSP2Triangles(19, 20, 18, 0, 21, 20, 19, 0),
	gsSP2Triangles(21, 22, 20, 0, 23, 22, 21, 0),
	gsSP2Triangles(23, 24, 22, 0, 25, 24, 23, 0),
	gsSP2Triangles(25, 12, 24, 0, 10, 12, 25, 0),
	gsSP2Triangles(26, 27, 28, 0, 29, 27, 26, 0),
	gsSP2Triangles(29, 30, 27, 0, 31, 30, 29, 0),
	gsSPVertex(pipe2_ccm_Pipe_004_mesh_vtx_0 + 128, 30, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSP2Triangles(3, 4, 1, 0, 5, 4, 3, 0),
	gsSP2Triangles(5, 6, 4, 0, 7, 6, 5, 0),
	gsSP2Triangles(7, 8, 6, 0, 9, 8, 7, 0),
	gsSP2Triangles(9, 10, 8, 0, 11, 10, 9, 0),
	gsSP2Triangles(11, 12, 10, 0, 13, 12, 11, 0),
	gsSP2Triangles(14, 15, 16, 0, 17, 15, 14, 0),
	gsSP2Triangles(16, 15, 17, 0, 18, 19, 20, 0),
	gsSP2Triangles(21, 19, 18, 0, 20, 19, 21, 0),
	gsSP2Triangles(22, 23, 24, 0, 25, 23, 22, 0),
	gsSP2Triangles(24, 23, 25, 0, 26, 27, 28, 0),
	gsSP2Triangles(29, 27, 26, 0, 28, 27, 29, 0),
	gsSPEndDisplayList(),
};


Gfx mat_pipe2_ccm_Pipe_001[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(SHADE, 0, TEXEL0, 0, 0, 0, 0, 1, SHADE, 0, TEXEL0, 0, 0, 0, 0, 1),
	gsSPGeometryMode(G_LIGHTING, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 1, pipe2_ccm_MetalTile_i8),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(pipe2_ccm_Pipe_001_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_pipe2_ccm_Pipe_001[] = {
	gsDPPipeSync(),
	gsSPGeometryMode(0, G_LIGHTING),
	gsSPEndDisplayList(),
};

Gfx pipe2_ccm_Pipe_004_mesh[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(pipe2_ccm_Pipe_004_mesh_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_pipe2_ccm_Pipe_001),
	gsSPDisplayList(pipe2_ccm_Pipe_004_mesh_tri_0),
	gsSPDisplayList(mat_revert_pipe2_ccm_Pipe_001),
	gsSPEndDisplayList(),
};

Gfx pipe2_ccm_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

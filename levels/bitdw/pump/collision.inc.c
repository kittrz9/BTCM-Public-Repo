const Collision pump_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(16),
	COL_VERTEX(-75, 193, 75),
	COL_VERTEX(-75, 193, -75),
	COL_VERTEX(-75, 153, -75),
	COL_VERTEX(-75, 153, 75),
	COL_VERTEX(75, 193, -75),
	COL_VERTEX(75, 153, -75),
	COL_VERTEX(75, 193, 75),
	COL_VERTEX(75, 153, 75),
	COL_VERTEX(13, 153, -13),
	COL_VERTEX(-13, 153, -13),
	COL_VERTEX(-13, 153, 13),
	COL_VERTEX(13, 153, 13),
	COL_VERTEX(13, 108, 13),
	COL_VERTEX(-13, 108, 13),
	COL_VERTEX(13, 108, -13),
	COL_VERTEX(-13, 108, -13),
	COL_TRI_INIT(SURFACE_DEFAULT, 22),
	COL_TRI(0, 1, 2),
	COL_TRI(0, 2, 3),
	COL_TRI(1, 4, 5),
	COL_TRI(1, 5, 2),
	COL_TRI(4, 6, 7),
	COL_TRI(4, 7, 5),
	COL_TRI(6, 0, 3),
	COL_TRI(6, 3, 7),
	COL_TRI(1, 0, 6),
	COL_TRI(1, 6, 4),
	COL_TRI(5, 7, 3),
	COL_TRI(5, 3, 2),
	COL_TRI(8, 9, 10),
	COL_TRI(8, 10, 11),
	COL_TRI(12, 11, 10),
	COL_TRI(12, 10, 13),
	COL_TRI(14, 8, 11),
	COL_TRI(14, 11, 12),
	COL_TRI(15, 9, 8),
	COL_TRI(15, 8, 14),
	COL_TRI(13, 10, 9),
	COL_TRI(13, 9, 15),
	COL_TRI_STOP(),
	COL_END()
};
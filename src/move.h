#ifndef MOVE_H
#define MOVE_H

#ifndef MAP_H
#include "map.h"
#endif

// 地图上下左右移动
int move_up(GAMEMAP *map, int if_move);

int move_down(GAMEMAP *map, int if_move);

int move_right(GAMEMAP *map, int if_move);

int move_left(GAMEMAP *map, int if_move);

int can_move(GAMEMAP *map);

#endif

#ifndef MOVE_H
#define MOVE_H

#ifndef MAP_H
#include "map.h"
#endif

// 地图上下左右移动
int move_up (GAMEMAP *map);

int move_down (GAMEMAP *map);

int move_forward (GAMEMAP *map);

int move_backward (GAMEMAP *map);

/* int can_move(GAMEMAP *map); */

#endif

#ifndef MOVE_H
#define MOVE_H

#ifndef MAP_H
#include "map.h"
#endif

// 地图上下左右移动
int move_up (gamemap map);

int move_down (gamemap map);

int move_forward (gamemap map);

int move_backward (gamemap map);

#endif

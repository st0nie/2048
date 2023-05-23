#ifndef GAME_H
#define GAME_H

// 创建一个地图，返回地图的指针
int **map_create (int *size);

// 开始新游戏
int game_start_new ();

// 继续上次的游戏
int game_start_continue();

#endif

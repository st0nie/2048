#ifndef MAP_H
#define MAP_H

typedef struct gamemap
{
  int score;
  int (*map)[4];
} GAMEMAP;

// 创建一个地图，返回地图的指针
GAMEMAP *map_create (void);

#endif

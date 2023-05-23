#ifndef MAP_H
#define MAP_H

typedef struct
{
  int *score;
  int **map;
} gamemap;

// 创建一个地图，返回地图的指针
gamemap *map_create (int size);

#endif

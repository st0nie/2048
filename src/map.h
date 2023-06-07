#ifndef MAP_H
#define MAP_H

typedef struct gamemap
{
  int score;
  int (*map)[4];
} GAMEMAP;

// 创建一个地图，返回地图的指针
GAMEMAP *map_create (void);

//保存地图数组和分数
void map_save(GAMEMAP *my_map,int time);

//读取上一次的地图记录
void map_load(char *,GAMEMAP *);

#endif

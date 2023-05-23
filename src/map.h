#ifndef MAP_H
#define MAP_H

typedef struct
{
  int *score;
  int **map;
} gamemap;

gamemap *gen_map (int size);

#endif

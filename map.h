#ifndef MAP_H
#define MAP_H

struct gamemap
{
  int *score;
  int **map;
};

gamemap gen_map (int size);

#endif

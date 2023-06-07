#include "map.h"
#include "rand.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

GAMEMAP *map_create(void) {
  GAMEMAP *my_map = malloc(sizeof(GAMEMAP));
  memset(my_map, 0, sizeof(GAMEMAP));
  int(*map_p)[4] = malloc(16 * sizeof(int));
  memset(map_p, 0, 16 * sizeof(int));
  my_map->map = map_p;
  random_num(my_map);
  random_num(my_map);
  return my_map;
}

void map_save(GAMEMAP *my_map, int time) {
  char ti[100] = {0};
  sprintf(ti, "%d", time);
  FILE *fp;
  int i, d;
  fp = fopen(ti, "w");
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {

      fprintf(fp, "%d ", my_map->map[i][j]);
    }
  }
  fprintf(fp,"|%d",my_map->score);
  fclose(fp);
}

void map_load(char *name, GAMEMAP *my_map) {
  FILE *fp;
  fp = fopen(name, "r");
  if(fp==NULL)
  {
    printf("invalid filename!!!\n");
    return;
  }
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      fscanf(fp,"%d",&(my_map->map[i][j]));
    }
  }
  fscanf(fp,"|%d",my_map->score);
  fclose(fp);
}
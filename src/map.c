#include "map.h"
#include "rand.h"
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

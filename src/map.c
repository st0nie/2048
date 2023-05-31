#include "map.h"
#include <stdlib.h>
#include <string.h>
#include "rand.h"

GAMEMAP *map_create (void){
  GAMEMAP *my_map=malloc(sizeof(GAMEMAP));
  memset(my_map, 0, sizeof(GAMEMAP));
  int (*map_p)[4]=malloc(16*sizeof(int));
  memset(map_p, 0, 16*sizeof(int));
  my_map -> map = map_p;
  Random(my_map);
  Random(my_map);
  return my_map;
}

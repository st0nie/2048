#include "map.h"
#include "utils.h"
#include <stdio.h>
#include "map.h"

int
main ()
{
  GAMEMAP *the_map = map_create();
  int (*my_gamemap)[4] = the_map -> map;
  print_map(my_gamemap);
}

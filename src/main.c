#include "map.h"
#include "move.h"
#include "rand.h"
#include "utils.h"
#include <stdio.h>

int main() {
  GAMEMAP *the_map = map_create();
  int(*my_gamemap)[4] = the_map->map;
  int i = 0;
  while (1) {
    if (i) {
      getchar();
    }
    print_map(my_gamemap);
    char input = getchar();
    switch (input) {
    case 'i':
      move_up(the_map, 1);
      break;
    case 'k':
      move_down(the_map, 1);
      break;
    case 'j':
      move_left(the_map, 1);
      break;
    case 'l':
      move_right(the_map, 1);
      break;
    }
    Random(the_map);
    putchar('\n');
    i++;
  }
}

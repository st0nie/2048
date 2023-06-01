#include "utils.h"
#include "game.h"
#include "rand.h"

/* void */
/* enter_menu (int n) */
/* { */
/*   switch (n) { */
/*   case 1: */
/*     game_start_new(); */
/*     break; */
/*   case 2: */
/*     game_start_continue(); */
/*     break; */
/*   } */
/* } */

int judge(GAMEMAP *the_map, int result) {
  if (result == -1) {
    printf("Unable to move in this direction\n");
    return 1;
  }
  if (random_num(the_map) == 0)
    return 1;
  return 0;
}

void print_map(int (*map)[4]) {
  int i, j;
  i = j = 0;
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      printf("%-4d", map[i][j]);
    }
    putchar('\n');
  }
}

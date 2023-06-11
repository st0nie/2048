#include "utils.h"
#include "game.h"
#include "rand.h"

void print_menu()
{
  printf("2048\n");
  printf("1.Start\n");
  printf("2.Continue\n");
  printf("3.History\n");
  printf("4.Exit\n");
}
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
  if (result == -2){
    printf("Map saved\n");
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

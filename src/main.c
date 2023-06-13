#include "game.h"
#include "map.h"
#include "move.h"
#include "rand.h"
#include "utils.h"
#include <stdio.h>

int main() {
  print_menu();
  printf("Input your choice:");
  char input = getchar();
  getchar();
  int score;
  int *index=NULL;
  switch (input) {
  case '1':
    game_start_new(0,NULL);
    break;
  case '2':
    index=game_history();
    game_start_new(1,index);
    break;
  case '3':
    game_history();
    break;
  default:
    break;
  }
}

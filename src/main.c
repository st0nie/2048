#include "map.h"
#include "move.h"
#include "rand.h"
#include "utils.h"
#include "game.h"
#include <stdio.h>

int main() {
  print_menu();
  printf("Input your choice:");
  char input= getchar();
  getchar();
  int score;
  switch (input)
  {
  case '1':
    game_start_new(0);
    break;
    case '2':
    game_start_new(1);
    break;
  default:
    break;
  }
}

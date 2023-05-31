#include "game.h"
#include "map.h"
#include "utils.h"

int game_start_new() {
  int size = size_prompt();
  GAMEMAP *map = map_create();
  while (1) {
	int move = move_prompt();
  }
  return 0; 
}

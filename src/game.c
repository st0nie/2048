#include "game.h"
#include "map.h"
#include "utils.h"

int game_start_new() {
  int size = size_prompt();
  gamemap *map = map_create(size);
  while (1) {
	int move = move_prompt();
  }
  return 0; 
}

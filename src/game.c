#include "game.h"
#include "map.h"
#include "utils.h"
#include <time.h>

int game_start_new(int type) {
  int t = time(0);
  GAMEMAP *the_map = map_create();
  if(type==1){
    char str[100]="./";
    printf("please input filename:");
    scanf("%s",str+2);
    getchar();
    putchar('\n');
    map_load(str,the_map);
  }
  int(*my_gamemap)[4] = the_map->map;
  int i = 0;
  int result;
  do {
    if (i) {
      getchar();
    }
    result = 0;
    print_map(my_gamemap);
    putchar('\n');
    int k = 0;
    char input;
    printf("Input direction:");
    while ((input = getchar()) != 'j' && input != 'k' && input != 'l' &&
           input != 'i'&& input != 's') {
      printf("Invalid input, try again:");
    };
    switch (input) {
    case 's':
      map_save(the_map, t);
      break;
    case 'i':
      result = move_up(the_map, 1);
      break;
    case 'k':
      result = move_down(the_map, 1);
      break;
    case 'j':
      result = move_left(the_map, 1);
      break;
    case 'l':
      result = move_right(the_map, 1);
      break;
    }
    if (result >= 0) {
      the_map->score += result;
    }
    printf("Score: %d\n", the_map->score);
    putchar('\n');
    i++;
  } while (judge(the_map, result));
  printf("Game Over!\n");
  putchar('\n');
  print_map(my_gamemap);
  return the_map->score;
}



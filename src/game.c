#include "game.h"
#include "map.h"
#include "utils.h"
#include <dirent.h>
#include <stdlib.h>
#include <time.h>

int game_start_new(int type, int *index) {
  int t = time(0);
  GAMEMAP *the_map = map_create();
  if (type == 1) {
    int num = 0;
    printf("Please input file number:");
    scanf("%d", &num);
    char str[100] = {0};
    num = index[num - 1];
    sprintf(str, "%d", num);
    getchar();
    putchar('\n');
    map_load(str, the_map);
  }
  int(*my_gamemap)[4] = the_map->map;
  int i = 0;
  int result;
  int saved = 0;
  do {
    if (i) {
      getchar();
    }
    if (saved) {
      saved--;
    }
    result = 0;
    print_map(my_gamemap);
    putchar('\n');
    int k = 0;
    char input;
    printf("Input direction:");
    while ((input = getchar()) != 'j' && input != 'k' && input != 'l' &&
           input != 'i' && input != 's' && input != 'q') {
      printf("Invalid input, try again:");
    };
    switch (input) {
    case 's':
      map_save(the_map, t);
      saved = 2;
      result = -2;
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
    case 'q':
      if (!saved) {
        getchar();
        printf("Save map?(y, n):");
        char ch;
        while ((ch = getchar()) != 'y' && ch != 'n') {
          printf("input y or n:");
        }
        if (ch == 'y')
          map_save(the_map, t);
      }
      return 0;
    }
    if (result >= 0) {
      the_map->score += result;
    }
    printf("Score: %d\n", the_map->score);
    putchar('\n');
    i++;
  } while (judge(the_map, result));
  printf("Game Over!\n");
  map_save(the_map, t);
  putchar('\n');
  print_map(my_gamemap);
  return the_map->score;
}

int *game_history(void) {
  struct dirent *dir;
  GAMEMAP *the_map = map_create();
  int(*my_gamemap)[4] = the_map->map;
  DIR *d = opendir("./saved");
  struct dirent *best = NULL;
  int best_score = 0;
  int *index = (int *)malloc(sizeof(int));
  int i = 0;
  int *p;
  if (d) {
    while ((dir = readdir(d)) != NULL) {
      if (dir->d_name[0] != '.') {
        p = realloc(index, i + 1 * (sizeof(int)));
        p[i] = atoi(dir->d_name);
        i++;
        printf("Map: (%d) %s\n", i, dir->d_name);
        int score = 0;
        score = map_load(dir->d_name, the_map);
        if (score >= best_score) {
          best_score = score;
          best = dir;
        }
        printf("Score: %d\n", score);
        print_map(my_gamemap);
        putchar('\n');
      }
    }
    p[i] = 0;
    if (best != NULL) {
      printf("Best map: %s\n", best->d_name);
      printf("Best score: %d\n", best_score);
    } else {
      printf("Not available map.\n");
    }
    closedir(d);
  }
  free(the_map);
  return p;
}

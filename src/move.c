#include "move.h"
#include <stdio.h>
#include <string.h>

static void sort(int (*arr)[4]) {
  int i, j;
  for (i = 0; i < 4; i++) {
    if ((*arr)[i] == 0) {
      for (j = i + 1; j < 4; j++) {
        if ((*arr)[j] != 0) {
          (*arr)[i] = (*arr)[j];
          (*arr)[j] = 0;
          break;
        }
      }
    }
  }
}

int move_left(GAMEMAP *the_map, int if_move) {
  int can = 0;
  int i, j, k, sum;
  i = j = k = sum = 0;
  int arr[4][4] = {0};

  // copy to arr
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      arr[i][j] = the_map->map[i][j];
    }
  }

  for (i = 0; i < 4; i++) {
    sort(&arr[i]);
  }

  for (i = 0; i < 4; i++) {
    for (j = 0; j + 1 < 4; j++) {
      if (arr[i][j] == arr[i][j + 1]) {
        sum += 2 * arr[i][j];
        arr[i][j] *= 2;
        arr[i][j + 1] = 0;
      }
    }
  }

  for (i = 0; i < 4; i++) {
    sort(&arr[i]);
  }

  // 判断能不能
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      if (arr[i][j] != the_map->map[i][j]) {
        can = 1;
      }
    }
  }

  if (if_move && can) {
    for (i = 0; i < 4; i++) {
      for (j = 0; j < 4; j++) {
        the_map->map[i][j] = arr[i][j];
      }
    }
  }

  if (can) {
    return sum;
  } else {
    return -1;
  }
}

int move_right(GAMEMAP *the_map, int if_move) {
  int can = 0;
  int i, j, k, sum;
  i = j = k = sum = 0;
  int arr[4][4] = {0};

  // copy to arr
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      arr[i][3 - j] = the_map->map[i][j];
    }
  }

  for (i = 0; i < 4; i++) {
    sort(&arr[i]);
  }

  for (i = 0; i < 4; i++) {
    for (j = 0; j + 1 < 4; j++) {
      if (arr[i][j] == arr[i][j + 1]) {
        sum += 2 * arr[i][j];
        arr[i][j] *= 2;
        arr[i][j + 1] = 0;
      }
    }
  }

  for (i = 0; i < 4; i++) {
    sort(&arr[i]);
  }

  // 判断能不能
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      if (arr[i][3 - j] != the_map->map[i][j]) {
        can = 1;
      }
    }
  }

  if (if_move && can) {
    for (i = 0; i < 4; i++) {
      for (j = 0; j < 4; j++) {
        the_map->map[i][3 - j] = arr[i][j];
      }
    }
  }

  if (can) {
    return sum;
  } else {
    return -1;
  }
}

int move_up(GAMEMAP *the_map, int if_move) {
  int can = 0;
  int i, j, k, sum;
  i = j = k = sum = 0;
  int arr[4][4] = {0};

  // copy to arr
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      arr[i][j] = the_map->map[j][3 - i];
    }
  }

  for (i = 0; i < 4; i++) {
    sort(&arr[i]);
  }

  for (i = 0; i < 4; i++) {
    for (j = 0; j + 1 < 4; j++) {
      if (arr[i][j] == arr[i][j + 1]) {
        sum += 2 * arr[i][j];
        arr[i][j] *= 2;
        arr[i][j + 1] = 0;
      }
    }
  }

  for (i = 0; i < 4; i++) {
    sort(&arr[i]);
  }

  // 判断能不能
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      if (arr[i][j] != the_map->map[j][3 - i]) {
        can = 1;
      }
    }
  }

  if (if_move && can) {
    for (i = 0; i < 4; i++) {
      for (j = 0; j < 4; j++) {
        the_map->map[j][3 - i] = arr[i][j];
      }
    }
  }

  if (can) {
    return sum;
  } else {
    return -1;
  }
}

int move_down(GAMEMAP *the_map, int if_move) {
  int can = 0;
  int i, j, k, sum;
  i = j = k = sum = 0;
  int arr[4][4] = {0};

  // copy to arr
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      arr[i][j] = the_map->map[3 - j][i];
    }
  }

  for (i = 0; i < 4; i++) {
    sort(&arr[i]);
  }

  for (i = 0; i < 4; i++) {
    for (j = 0; j + 1 < 4; j++) {
      if (arr[i][j] == arr[i][j + 1]) {
        sum += 2 * arr[i][j];
        arr[i][j] *= 2;
        arr[i][j + 1] = 0;
      }
    }
  }

  for (i = 0; i < 4; i++) {
    sort(&arr[i]);
  }

  // 判断能不能
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      if (arr[i][j] != the_map->map[3 - j][i]) {
        can = 1;
      }
    }
  }

  if (if_move && can) {
    for (i = 0; i < 4; i++) {
      for (j = 0; j < 4; j++) {
        the_map->map[3 - j][i] = arr[i][j];
      }
    }
  }

  if (can) {
    return sum;
  } else {
    return -1;
  }
}

int can_move(GAMEMAP *the_map) {
  if (move_up(the_map, 0) || move_down(the_map, 0) || move_left(the_map, 0) ||
      move_right(the_map, 0)) {
    return 1;
  }
  return 0;
}

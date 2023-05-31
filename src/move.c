#include "move.h"
#include <string.h>

int move_up(GAMEMAP *my_gamemap, int if_move) {
  int(*my_map)[4] = my_gamemap->map;
  int moved = 0;
  int i, j;
  int sum = 0;
  for (i = 0; i < 4; i++) {
    int init_line[4];
    int line[4];
    for (j = 0; j < 4; j++) {
      init_line[j] = my_map[j][i];
      line[j] = my_map[j][i];
    }
    int k, l;
    for (k = 0; k < 4; k++) {
      if (line[k] == 0) {
        for (l = k; l < 4; l++) {
          if (line[l] != 0) {
            line[k] = line[l];
            line[l] = 0;
            break;
          }
        }
      }
    }

    for (k = 0; k + 1 < 4; k++) {
      if (line[k] == line[k + 1]) {
        sum += line[k] * 2;
        line[k] *= 2;
        line[k + 1] = 0;
      }
    }

    for (k = 0; k < 4; k++) {
      if (line[k] == 0) {
        for (l = k; l < 4; l++) {
          if (line[l] != 0) {
            line[k] = line[l];
            line[l] = 0;
            break;
          }
        }
      }
    }

    int eq = memcmp(line, init_line, 4);
    if (eq != 0) {
      moved = 1;
      if (if_move) {
        for (j = 0; j < 4; j++) {
          my_map[j][i] = line[j];
        }
      }
    }
  }

  if (moved) {
    return sum;
  } else {
    return -1;
  }
}


int move_down(GAMEMAP *my_gamemap, int if_move) {
  int(*my_map)[4] = my_gamemap->map;
  int moved = 0;
  int i, j;
  int sum = 0;
  for (i = 0; i < 4; i++) {
    int init_line[4];
    int line[4];
    for (j = 0; j < 4; j++) {
      init_line[j] = my_map[3-j][i];
      line[j] = my_map[3-j][i];
    }
    int k, l;
    for (k = 0; k < 4; k++) {
      if (line[k] == 0) {
        for (l = k; l < 4; l++) {
          if (line[l] != 0) {
            line[k] = line[l];
            line[l] = 0;
            break;
          }
        }
      }
    }

    for (k = 0; k + 1 < 4; k++) {
      if (line[k] == line[k + 1]) {
        sum += line[k] * 2;
        line[k] *= 2;
        line[k + 1] = 0;
      }
    }

    for (k = 0; k < 4; k++) {
      if (line[k] == 0) {
        for (l = k; l < 4; l++) {
          if (line[l] != 0) {
            line[k] = line[l];
            line[l] = 0;
            break;
          }
        }
      }
    }

    int eq = memcmp(line, init_line, 4);
    if (eq != 0) {
      moved = 1;
      if (if_move) {
        for (j = 0; j < 4; j++) {
          my_map[3-j][i] = line[j];
        }
      }
    }
  }

  if (moved) {
    return sum;
  } else {
    return -1;
  }
}

int move_left(GAMEMAP *my_gamemap, int if_move) {
  int(*my_map)[4] = my_gamemap->map;
  int moved = 0;
  int i, j;
  int sum = 0;
  for (i = 0; i < 4; i++) {
    int init_line[4];
    int line[4];
    for (j = 0; j < 4; j++) {
      init_line[j] = my_map[i][j];
      line[j] = my_map[i][j];
    }
    int k, l;
    for (k = 0; k < 4; k++) {
      if (line[k] == 0) {
        for (l = k; l < 4; l++) {
          if (line[l] != 0) {
            line[k] = line[l];
            line[l] = 0;
            break;
          }
        }
      }
    }

    for (k = 0; k + 1 < 4; k++) {
      if (line[k] == line[k + 1]) {
        sum += line[k] * 2;
        line[k] *= 2;
        line[k + 1] = 0;
      }
    }

    for (k = 0; k < 4; k++) {
      if (line[k] == 0) {
        for (l = k; l < 4; l++) {
          if (line[l] != 0) {
            line[k] = line[l];
            line[l] = 0;
            break;
          }
        }
      }
    }

    int eq = memcmp(line, init_line, 4);
    if (eq != 0) {
      moved = 1;
      if (if_move) {
        for (j = 0; j < 4; j++) {
          my_map[i][j] = line[j];
        }
      }
    }
  }

  if (moved) {
    return sum;
  } else {
    return -1;
  }
}

int move_right(GAMEMAP *my_gamemap, int if_move) {
  int(*my_map)[4] = my_gamemap->map;
  int moved = 0;
  int i, j;
  int sum = 0;
  for (i = 0; i < 4; i++) {
    int init_line[4];
    int line[4];
    for (j = 0; j < 4; j++) {
      init_line[j] = my_map[i][3-j];
      line[j] = my_map[i][3-j];
    }
    int k, l;
    for (k = 0; k < 4; k++) {
      if (line[k] == 0) {
        for (l = k; l < 4; l++) {
          if (line[l] != 0) {
            line[k] = line[l];
            line[l] = 0;
            break;
          }
        }
      }
    }

    for (k = 0; k + 1 < 4; k++) {
      if (line[k] == line[k + 1]) {
        sum += line[k] * 2;
        line[k] *= 2;
        line[k + 1] = 0;
      }
    }

    for (k = 0; k < 4; k++) {
      if (line[k] == 0) {
        for (l = k; l < 4; l++) {
          if (line[l] != 0) {
            line[k] = line[l];
            line[l] = 0;
            break;
          }
        }
      }
    }

    int eq = memcmp(line, init_line, 4);
    if (eq != 0) {
      moved = 1;
      if (if_move) {
        for (j = 0; j < 4; j++) {
          my_map[i][j] = line[3-j];
        }
      }
    }
  }

  if (moved) {
    return sum;
  } else {
    return -1;
  }
}

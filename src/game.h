#ifndef GAME_H
#define GAME_H
#include "move.h"
// 开始新游戏
int game_start_new(int type, int *index);

// 展示历史
int *game_history(void);

#endif

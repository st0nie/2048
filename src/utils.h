#ifndef UTILS_H
#define UTILS_H
#include "map.h"
#include <stdio.h>
//生成菜单
void print_menu(void);

// 打印主菜单
void show_menu(void);

// 打印输入提示，返回值为用户输入
int menu_prompt(void);

// 打印输入地图大小提示，返回值为用户输入
int size_prompt(void);

// 打印用户选择移动方向的提示
int move_prompt(void);

// 进入用户选择的选单
void enter_menu(int);

// 打印地图
void print_map(int (*map)[4]);

// 判断是否能走
int judge(GAMEMAP *the_map, int result);

#endif

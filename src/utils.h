#ifndef UTILS_H
#define UTILS_H
#include <stdio.h>

// 打印主菜单
void show_menu (void);

// 打印输入提示，返回值为用户输入
int menu_prompt (void);

// 打印输入地图大小提示，返回值为用户输入
int size_prompt (void);

// 打印用户选择移动方向的提示
int move_prompt (void);

// 进入用户选择的选单
void enter_menu (int);

void print_map(int (*map)[4]){
  int i,j;
  i=j=0;
  for(i=0;i<4;i++){
	for(j=0;j<4;j++){
	  printf("%d ",map[i][j]);
	}
	putchar('\n');
  }
}

#endif

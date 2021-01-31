#include <stdio.h>
#include <stdlib.h>
#include "../headers/app.h"

static const char line[50] = "===============================================\n";
static const char menu[10][30] = {"1.withdrawal\n", "2.deposit\n", "3.quit\n"};
static int menuNums = 3;

void cleanScreen(void) {
  system("cls");
}

void showMenu(void) {
  printf("%s", line);
  printf("choose your operation!\n\n");
  int index = 0;
  for(; index < menuNums; index++){
    printf("%s\n", menu[index]);
  }
  printf("%s", line);
}

void getMenu(int *choice) {
  scanf("%d", choice);
}

void operateByChoice(int choice) {

}
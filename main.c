#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "./headers/app.h"

int main(){
  int choice = 0;
  while(1){
    cleanScreen();
    showMenu();
    getMenu(&choice);
    operateByChoice(choice);
    choice = 0;
  }
  return 0;
}
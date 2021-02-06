#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "./headers/app.h"

int main(){
  int choice = 0;
  int priority = 0;
  int failCount = 0;
  int loginSuccess = 0;
  printf("loading....");
  initUser();
  initBooks();
  while(failCount < 3){
    cleanScreen();
    login();
  }
  while(loginSuccess){
    cleanScreen();
    showMenu();
    getMenu(&choice);
    operateByChoice(priority, choice);
    if (isQuit()){
      break;
    }
    choice = 0;
  }
  return 0;
}
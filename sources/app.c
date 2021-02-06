#include <stdio.h>
#include <stdlib.h>
#include "../headers/app.h"
#include "../headers/linklist.h"

static void adminOperate(int choice);
static void userOperate(int choice);

static const char line[50] = "===============================================\n";
static const char adminMenu[10][30] = {"1.check books' info\n", "2.add book\n", "3.check users' info\n", "4.add user\n", "0.quit"};
static const char userMenu[10][30] = {"1.check borrowed books\n", "2.borrow books\n", "3.return books\n", "4.change password", "0.quit"};
static int adminMenuNums = 5;
static int userMenuNums = 5;
static int quitFlag = 0;

static PNode userHead = NULL;
static PNode bookHead = NULL;

void initUser(void) {
  analyseUser("../data/user.info");
  userHead = getUserHead();
}

void initBooks(void) {

}

void cleanScreen(void) {
  system("cls");
}

void showMenu(priority) {
  printf("%s", line);
  printf("choose your operation!\n\n");
  int index = 0;
  if (priority == 0) {
    for(; index < adminMenuNums; index++){
      printf("%s\n", adminMenu[index]);
    }
  }
  else if(priority == 1) {
    for(; index < userMenuNums; index++){
      printf("%s\n", userMenu[index]);
    }
  }
  printf("%s", line);
}

void getMenu(int *choice) {
  scanf("%d", choice);
}

void operateByChoice(int priority, int choice) {
  if (priority == 0) {
    adminOperate(choice);
  }
  else if(priority == 1) {
    userOperate(choice);
  }
}

static void adminOperate(int choice) {
  switch(choice){
    case 0: {
      quitFlag = 1;
      break;
    }
    case 1: break;
    case 2: break;
    case 3: break;
    case 4: break;
    default: break;
  }
}

static void userOperate(int choice) {
  switch(choice){
    case 0: {
      quitFlag = 1;
      break;
    }
    case 1: break;
    case 2: break;
    case 3: break;
    case 4: break;
    default: break;
  }
}

int isQuit(void) {
  return quitFlag;
}

int login(void) {
  char account[30];
  char password[30];
  printf("please login!\n");
  printf("account: ");
  scanf("%s", account);
  printf("\npassword: ");
  scanf("%s", password);
}
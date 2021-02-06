#ifndef _USER
#define _USER

#include "linklist.h"

typedef struct {
  char account[10];
  char password[16];
  int priority;
  Node node;
}User, *PUser;

void analyseUser(const char* fileName);
void setUserInfo(PUser userInfo, const char* key, const char* value);
void appendUser(PUser userInfo);
void printUserList(void);
void searchAccount(char* password);
PNode getUserHead(void);

#endif
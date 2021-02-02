#ifndef _USER
#define _USER

#include "linklist.h"

typedef struct {
  char account[10];
  char password[16];
  int priority;
  Node node;
}User, *PUser;

void analyseUser(const char *fileName);

#endif
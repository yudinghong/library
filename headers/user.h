#ifndef _USER
#define _USER

typedef struct {
  char account[10];
  char password[16];

}User, *PUser;

void analyseUser(const char *fileName);

#endif
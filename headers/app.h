#ifndef _APP
#define _APP

void initUser(void);
void initBooks(void);

void cleanScreen(void);
void showMenu(void);
void getMenu(int *);
void operateByChoice(int priority, int choice);
int isQuit(void);

int login(void);

#endif
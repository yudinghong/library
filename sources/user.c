#include "../headers/user.h"
#include <stdio.h>
#include <stdlib.h>
#include <file.h>

static PNode userHead = NULL;

void analyseUser(const char* fileName) {
  FILE *file = fopen(fileName, "r");
  char *line;
  char *section;
  char *key;
  char *value;
  initHead(userHead);
  line = (char*)malloc(sizeof(char) * 32);
  section = (char*)malloc(sizeof(char) * 32);
  key = (char*)malloc(sizeof(char) * 32);
  value = (char*)malloc(sizeof(char) * 32);

  PUser userInfo;
  while (fscanf(file, "%s", line) == 1){
    if (isSection(line)){
      memset(section, 0, sizeof(char) * 32);
      appendUser(userInfo);
      getSection(line, section);
    }
    else {
      memset(key, 0, sizeof(char) * 32);
      memset(value, 0, sizeof(char) * 32);
      getItem(line, key, value);  
      setUserInfo(userInfo, key, value);
    }
  }
}

void setUserInfo(PUser userInfo, const char* key, const char* value) {
  if (strcmp(key, "account") == 0){
    strcpy(userInfo->account, value);
  }
  else if(strcmp(key, "password") == 0){
    strcpy(userInfo->password, value);
  }
  else if(strcmp(key, "priority") == 0){
    userInfo->priority = atoi(value);
  }
}

void appendUser(PUser userInfo) {
  User newInfo = {"", "", 0, {NULL}};
  if (userHead == NULL) {
    initHead(userHead);
  }
  insert(userHead, &newInfo.node);
  userInfo = &newInfo;
}

void printUserList(void) {
  listPrint(userHead, User, "account: %s\npassword: %s\npriority: %d\n--------------\n", data->account, data->password, data->priority);
}

void searchAccount(char* password) {

}
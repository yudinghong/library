#include <string.h>

int isSection(const char* line){
  int len = strlen(line);
  return *(line) == '[' && *(line+len) == ']' ? 1 : 0;
}
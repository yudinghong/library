#ifndef _FILE
#define _FILE

int isSection(const char* line);
void getSection(const char* line, char sectionName);
void getItem(const char* line, char key, char value);

#endif
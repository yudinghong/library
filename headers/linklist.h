#ifndef _LINKLIST
#define _LINKLIST

#define initHead(head) \
{                      \
  head->next = NULL;   \
}   

#define containerOf(structType, pointer, member)                           \
{                                                                          \
  (structType *)((char *)(pointer) - (char *)&(((structType *)0)->member)) \
}

#define insert(head, newNode)                    \
{                                                \
  PNode temp = head;                             \
  while(temp->next != NULL) temp = temp->next;   \
  temp->next = newNode;                          \
}

// ... must be data->..
#define listPrint(head, structType, format, ...)                \
{                                                               \
  PNode temp = head;                                            \
  while(temp->next != NULL) {                                   \
    temp = temp->next;                                          \
    structType *data = containerOf(structType, temp, node);     \
    printf(format, ##__VA_ARGS__);                              \
  }                                                             \
}

#define remove(head, structType, condition)                       \
{                                                                 \
  PNode temp = head;                                              \
  while(temp->next != NULL) {                                     \
    structType *data = containerOf(structType, temp->next, node); \
    if (condition){                                               \
      PNode delTarget = temp->next;                               \
      temp->next = delTarget->next;                               \
      delTarget->next = NULL;                                     \
      break;                                                      \
    }                                                             \
    temp = temp->next;                                            \
  }                                                               \
}

// result must be a pointer
#define search(head, result, structType, condition)               \
{                                                                 \
  PNode temp = head;                                              \
  while(temp->next != NULL) {                                     \
    temp = temp->next;                                            \
    structType *data = containerOf(structType, temp, node);       \
    if (condition){                                               \
      result = data;                                              \
      break;                                                      \
    }                                                             \
  }                                                               \
}

typedef struct linknode{
  struct linknode *next;
}Node, *PNode;

#endif
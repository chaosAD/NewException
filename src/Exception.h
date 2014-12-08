#ifndef Exception_H
#define Exception_H

typedef struct Exception Exception;
typedef struct Exception* ExceptionPtr;
struct Exception {
  char *msg;
  int  errorCode;
};

#define CEXCEPTION_T        ExceptionPtr
#define CEXCEPTION_NONE     ((ExceptionPtr)0x5A5A5A5A)
#include "CException.h"

Exception *createException(char *msg, int errorCode);
void freeException(Exception *e);
void dumpException(Exception *e);

#endif // Exception_H

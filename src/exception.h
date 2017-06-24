#ifndef _EXCEPTION_H
#define _EXCEPTION_H

typedef struct Exception Exception;
typedef struct Exception* ExceptionPtr;
struct Exception{
  char *msg;
  int ErrorCode;
};

Exception *CreateException(char *msg,int ErrorCode);
void freeException(Exception *e);
void dumpException(Exception *e);

#endif // _EXCEPTION_H

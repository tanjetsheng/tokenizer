#include "exception.h"
#include <stdio.h>
#include <stdlib.h>
#include "CExceptionConfig.h"

Exception *CreateException(char *msg,int ErrorCode){
  Exception *e = malloc(sizeof(Exception));
  e->msg = msg;
  e->ErrorCode = ErrorCode;
  return e;
}
void freeException(Exception *e){
  free(e);
}

void dumpException(Exception *e){
  printf("%s (err=%d)\n" , e-> msg , e-> ErrorCode);
}

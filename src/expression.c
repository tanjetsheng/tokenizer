#include <stdio.h>
#include "expression.h"
#include "tokenizer.h"
#include "CException.h"
#include "exception.h"


int computeExpression(char *str){
  TokenizerString *tokStr;
  Token *token;
  TokenInt *tokenInt;
  printf("expr : %s\n",str);
  tokStr = tokenizerStringCreate(str);        //mockes
  token = tokenize(tokStr);                             //mocked
  
  if(token->id == INT_NUM){
    tokenInt = (TokenInt *)token;
    printf("the value of the integer is %d\n",tokenInt->value);
  }
  else{
    Throw(CreateException("first token not a number",1));
  }
  return 0;
  
}

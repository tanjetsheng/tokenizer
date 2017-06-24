#include <stdlib.h>
#include "unity.h"
#include "expression.h"
#include "mock_tokenizer.h"
#include "mock_tokenizerstring.h"
#include "CException.h"
#include "exception.h"

void setUp(void)
{}

void tearDown(void)
{}

void test_computeExpression_given_256_plus_38_return_294(void)
{
  int result;
  char *str = "256 + 38";
  TokenizerString tokStr = {str,0};
  TokenInt firstVal = {INT_NUM,256};
  
  tokenizerStringCreate_ExpectAndReturn(str,&tokStr);
  tokenize_ExpectAndReturn(&tokStr, (Token *)&firstVal);
  
  result = computeExpression(str);
  TEST_ASSERT_EQUAL(294,result);
}

typedef struct TokenizerChar TokenizerChar;
struct TokenizerChar{
  char *data;
  int index;
};

void tokenizerCharCreate(char *str){
  TokenizerChar *tokChar = (TokenizerChar *)malloc(sizeof(TokenizerChar));
  tokChar->data = str ;
  tokChar->index = 0;
  return tokChar;
  
}

char TokenizerChar(TokenizerChar *tokChar){
  char ch;
  ch = tokChar->data[tokChar->index++];
  return ch;
 
}

void test_tokenizeChar(){
  char msg[] = "hello";
  TokenizerChar *tokChar = tokenizerCharCreate(msg)
  
  char ch = tokenizerChar(tokChar);
  printf("1:%c\n", ch);
  ch = tokenizerChar(tokChar);
  printf("2:%c\n", ch);
  ch = tokenizerChar(tokChar);
  printf("3:%c\n", ch);
  

}
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  

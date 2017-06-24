#ifndef _TOKENIZER_H
#define _TOKENIZER_H
#include "tokenizerstring.h"

typedef enum{
  IDENTIFIER,
  INT_NUM,
  FLOAT_NUM,
  OPERATOR,
}Tokentype;
//generic token

typedef struct Token Token;
struct Token{
  Tokentype id;
  void *data;
};

typedef struct TokenId TokenId;
struct TokenId{
  Tokentype id;
  char *name;
};

typedef struct TokenInt TokenInt;
struct TokenInt{
  Tokentype id;
  int value;
};

typedef struct TokenFloat TokenFloat;
struct TokenFloat{
  Tokentype id;
  double value;
};

typedef struct TokenOp TokenOp;
struct TokenOp{
  Tokentype id;
  Token *left;
  Token *right;
};



Token *tokenize(TokenizerString *str);
#endif // _TOKENIZER_H





















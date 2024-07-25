/*Program to Separate All the Tokens in a C Program*/

%{
#include <stdio.h>

int yywrap(void) {
    return 1;
}
%}

%%

[a-zA-Z_][a-zA-Z0-9_]*  { printf("IDENTIFIER: %s\n", yytext); }
[0-9]+                  { printf("NUMBER: %s\n", yytext); }
"+"|"-"|"*"|"/"|"="|"=="|"!="|"<"|">"|"<="|">=" { printf("OPERATOR: %s\n", yytext); }
"("                    { printf("LEFT_PARENTHESIS: %s\n", yytext); }
")"                    { printf("RIGHT_PARENTHESIS: %s\n", yytext); }
"{"                    { printf("LEFT_BRACE: %s\n", yytext); }
"}"                    { printf("RIGHT_BRACE: %s\n", yytext); }
";"                    { printf("SEMICOLON: %s\n", yytext); }
","                    { printf("COMMA: %s\n", yytext); }
.|\n                   { /* ignore other characters */ }

%%

int main() {
    yylex();
    return 0;
}

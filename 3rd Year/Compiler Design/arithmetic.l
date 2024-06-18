/*program to recognize and classify arithmetic expressions*/

%{
#include <stdio.h>
%}

%%

[0-9]+      { printf("Number: %s\n", yytext); }
"+"         { printf("Plus\n"); }
"-"         { printf("Minus\n"); }
"*"         { printf("Multiplication\n"); }
"/"         { printf("Division\n"); }
"("         { printf("Left Parenthesis\n"); }
")"         { printf("Right Parenthesis\n"); }
[ \t\n]     { /* Ignore whitespace */ }

%%

int main() {
    yylex();
    return 0;
}

/*Program to Calculate Simple Expression*/

%{
#include <stdio.h>
#include <stdlib.h>

int yywrap() {
    return 1;
}
%}

%%

[0-9]+  { printf("%d\n", atoi(yytext)); }
"+"     { printf("+\n"); }
"-"     { printf("-\n"); }
"*"     { printf("*\n"); }
"/"     { printf("/\n"); }
"("     { printf("(\n"); }
")"     { printf(")\n"); }
.|\n    { /* ignore other characters */ }

%%

int main() {
    yylex();
    return 0;
}

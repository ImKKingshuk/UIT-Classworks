/*Program to Count Words Containing 'a' and 'b' Only*/

%{
#include <stdio.h>

int yywrap() {
    return 1;
}

int count = 0;
%}

%%
[a|b]+  { count++; }
.|\n    { /* ignore other characters */ }
%%

int main() {
    yylex();
    printf("Number of words containing only 'a' and 'b': %d\n", count);
    return 0;
}



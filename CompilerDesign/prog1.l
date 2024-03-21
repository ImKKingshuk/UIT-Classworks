%{
#include <stdio.h>
%}

%%

[0-9]+      printf("INTEGER\n");
"+"         printf("PLUS\n");
"-"         printf("MINUS\n");
"*"         printf("TIMES\n");
"/"         printf("DIVIDE\n");
" "         /* Ignore spaces */
\n          /* Ignore newlines */

%%

int main() {
    yylex();
    return 0;
}

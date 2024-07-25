/*Program to Count Negative and Positive Integers*/

%{
#include <stdio.h>
int positive_count = 0, negative_count = 0;

int yywrap(void) {
    return 1;
}
%}

%%
-?[0-9]+  {
    int num = atoi(yytext);
    if (num < 0) {
        negative_count++;
    } else {
        positive_count++;
    }
}
.|\n      { /* ignore other characters */ }
%%

int main() {
    yylex();
    printf("Positive integers: %d\n", positive_count);
    printf("Negative integers: %d\n", negative_count);
    return 0;
}

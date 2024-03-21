/*program to recognize and print email addresses*/

%{
#include <stdio.h>
%}

%%

[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Za-z]{2,} {
    printf("Email: %s\n", yytext);
}

. { /* Ignore other characters */ }

%%

int main() {
    yylex();
    return 0;
}

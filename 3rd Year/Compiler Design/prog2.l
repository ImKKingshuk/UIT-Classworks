/*Program to Count Vowels and Consonants in a Given String*/

%{
#include <stdio.h>
int vowels = 0, consonants = 0;

int yywrap(void) {
    return 1;
}
%}

%%
[aAeEiIoOuU]  { vowels++; }
[a-zA-Z]      { consonants++; }
%%

int main() {
    yylex();
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
    return 0;
}

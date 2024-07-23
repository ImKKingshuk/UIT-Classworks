/*Program to Count the Number of Characters, Words, Spaces, and Lines in a Given File*/

%{
#include <stdio.h>
int characters = 0, words = 0, spaces = 0, lines = 0;
int in_word = 0;
%}

%%
\n      { lines++; characters++; in_word = 0; }
[ \t]   { spaces++; characters++; in_word = 0; }
.       { characters++; if (!in_word) { words++; in_word = 1; } }
%%

int main() {
    yylex();
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Spaces: %d\n", spaces);
    printf("Lines: %d\n", lines);
    return 0;
}

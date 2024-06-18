/*program that counts the number of characters, words, and lines in a given input. */

%{
#include <stdio.h>
int charCount = 0;
int wordCount = 0;
int lineCount = 0;
%}

%%

[a-zA-Z]+   { wordCount++; charCount += yyleng; }
\n          { lineCount++; charCount++; }
.           { charCount++; }

%%

int main() {
    yylex();
    printf("Character Count: %d\n", charCount);
    printf("Word Count: %d\n", wordCount);
    printf("Line Count: %d\n", lineCount);
    return 0;
}

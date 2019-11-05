#include <stdio.h>


int main () 
{

    printf("Please input:\n");
    char ch;
    int count = 0;
    int word = 0;

    while ((ch = getchar()) != '\n') {
        if (ch == ' ') {
            word = 0;
        } else if (word == 0) {
            word = 1;
            count++;
        }
    }

    printf("the total number of word is %d\n", count);

    return 0;
}
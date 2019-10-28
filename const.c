#include <stdio.h>

int main()
{
    const int LENGTH = 20;
    const int WIDTH = 5;
    const char NEWLINE = '\n';

    int area;

    area = LENGTH * WIDTH;
    printf("value of area: %d\n", area);
    printf("%c", NEWLINE);

    return 0;
}
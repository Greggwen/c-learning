#include <stdio.h>

int sum(int a, int b);

int main () 
{
    int s = sum(10, 20);

    printf("s is %d\n", s);
    return 0;
}

// int sum (int a, int b)
// {
//     return a + b;
// }
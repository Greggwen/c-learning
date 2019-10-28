#include <stdio.h>

int sum(int a, int b);


int main()
{
    int s = sum(1, 2);
    printf("%d\n", s);
    return s;
}

int sum(int a, int b)
{
    return a + b;
}
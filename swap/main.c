#include <stdio.h>


void swap(int *x, int *y);

int main()
{
    int a = 100;
    int b = 200;

    printf("交换前，a 的值：%d\n", a);
    printf("交换前，b 的值：%d\n", b);

    swap(&a, &b);

    printf("交换前，a 的值：%d\n", a);
    printf("交换前，b 的值：%d\n", b);

    return 0;
}

void swap(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y ;
    *y = temp;

    return;
}
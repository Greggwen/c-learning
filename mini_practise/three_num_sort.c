#include <stdio.h>


int main () {

    int a, b, c, t;

    printf("Please input three numbers:\n");

    scanf("%d,%d,%d", &a, &b, &c);

    if (a > b) {
        t = a; 
        a = b; 
        b = t;
    }

    if (a > c) {
        t = a; 
        a = c; 
        c = t;
    }

    if (b > c) {
        t = b; 
        b = c; 
        c = t;
    }

    printf("The order of the number is:\n");
    printf("%d,%d,%d",a,b,c);    /*输出函数顺序输出a、b、c的值*/
    return 0;
}
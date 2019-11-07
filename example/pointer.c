#include <stdio.h>

// 什么是指针？指针是一个变量，其值为另一个变量的地址，即，内存位置的直接地址。

int main ()
{

    printf("=======================DEMO 1============================\n");
    // DEMO1
    int a = 1;
    char vr[10];

    printf("var1 变量地址为:%p\n", &a);
    printf("vr[0] 变量地址为:%p\n", &vr);

    printf("=======================DEMO 2============================\n");

    // DEMO2
    int var = 20;
    int *ip;

    ip = &var;

    printf("Address of var variable: %p\n", &var);

    // 在指针变量中存储的地址
    printf("Address stored in var variable: %p\n", ip);

    // 使用指针访问值 
    printf("Value of *ip variable: %d\n", *ip);

    printf("=======================DEMO 3============================\n");

    // DeMO3: NULL指针地址
    int *ptr = NULL;
    printf("ptr的地址是：%p\n", ptr);



    return 0;
}
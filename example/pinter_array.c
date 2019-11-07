#include <stdio.h>

const int MAX = 3;

const int MAX2 = 4;

int main ()
{

    // 将指针指向整个数组
    int var[] = {1, 10, 100};
    int i, *ptr[MAX];

    for (i = 0; i < MAX; i ++) {
        ptr[i] = &var[i];
    }

    for (i = 0; i < MAX; i ++) {
        printf("Value of var[%d] = %d, 其地址为：%p\n", i, *ptr[i], ptr[i]);
    }

    // 一个指向字符的指针数组来存储一个字符串列表
    const char *name[] = {
        "Zara Ali",
        "Rara Ali",
        "Raso Ali",
        "Sara Ali"
    };

    for (int i = 0; i < MAX2; i ++) {
        printf("Value of names[%d] = %s， 其地址为：%p\n", i, name[i], *name[i]);
    }


    return 0;
}
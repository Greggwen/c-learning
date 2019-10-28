#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() 
{
    printf("Hello World!\n");
    printf("int 存储大小为： %lu\n", sizeof(int));
    printf("float 存储最大字节数为： %lu\n", sizeof(float));
    printf("float 最小值为：%E\n", FLT_MIN);
    printf("float 最大值为：%E\n", FLT_MAX);
    printf("float精度值为：%d\n", FLT_DIG);
    return 0;
}
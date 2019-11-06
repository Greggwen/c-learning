#include <stdio.h>

enum DAY {
    Mon=1, Tue, Wed, Thu, Fri, Sat, Sun
};

enum DAY2 {
    MON=1, TUE, WEN, THU, FRI, SAT, SUN
} day2;

int main () {

    enum DAY day;
    day = Wed;

    printf("%d", day);

    
    for (day2 = MON; day2 <= SUN; day2++) {
        printf("枚举元素：%d\n", day2);
    }

    return 0;
}

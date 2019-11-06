#include <stdio.h>

double getAverage(int arr[], int size);

int main ()
{
    int balance[5] = {1000, 2, 3, 17, 50};

    double average;

    average = getAverage(balance, 5);

    printf("the average is %0.4f\n", average);

    return 0;
}

double getAverage(int arr[], int size)
{

    int i = 0;
    double average;
    double sum = 0;

    for (i = 0; i < size; i ++) {
        sum += arr[i];
    }

    average = sum / size;

    return average;
}
#define _CRT_SECURE_NO_WARNINGS 1

#include"swap.h"

void swap(int sum1, int sum2)
{
    int temp = sum1;
    sum1 = sum2;
    sum2 = temp;
    cout << "交换了一次，虽然不知道有没有成功" << endl;
}
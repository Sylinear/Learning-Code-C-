#define _CRT_SECURE_NO_WARNINGS 1

#include"swap.h"

void swap(int sum1, int sum2)
{
    int temp = sum1;
    sum1 = sum2;
    sum2 = temp;
    cout << "������һ�Σ���Ȼ��֪����û�гɹ�" << endl;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include"Circle.h"

//���еĺ��� ����������
    //�� 
void Circle::relation(Point p1)
{
    int l = (center.m_x - p1.m_x) * (center.m_x - p1.m_x)
        + (center.m_y - p1.m_y) * (center.m_y - p1.m_y);
    int r2 = m_r * m_r;
    if (l < r2)
    {
        cout << "����Բ��" << endl;
    }
    else if (l == r2)
    {
        cout << "����Բ��" << endl;
    }
    else
    {
        cout << "����Բ��" << endl;
    }
}
#define _CRT_SECURE_NO_WARNINGS 1
#include"Circle.h"

//类中的函数 加上作用域
    //↓ 
void Circle::relation(Point p1)
{
    int l = (center.m_x - p1.m_x) * (center.m_x - p1.m_x)
        + (center.m_y - p1.m_y) * (center.m_y - p1.m_y);
    int r2 = m_r * m_r;
    if (l < r2)
    {
        cout << "点在圆内" << endl;
    }
    else if (l == r2)
    {
        cout << "点在圆上" << endl;
    }
    else
    {
        cout << "点在圆外" << endl;
    }
}
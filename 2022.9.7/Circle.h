#pragma once
#include<iostream>
#include"Point.h"
using namespace std;



class Circle
{
public:
    Point center;//圆心的位置        ---在类中 可以让另一个类作为本类中的成员
    int m_r;//圆的半径

public:
    void relation(Point p1);

};
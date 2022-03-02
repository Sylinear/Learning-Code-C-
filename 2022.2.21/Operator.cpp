#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;




//运算符
    //用以执行代码的运算
        //本章主要讲解：算术运算符 赋值运算符 比较运算符 逻辑运算符
int main()
{

//算术运算符
   //加减乘除
    int a1 = 10;
    int b1 = 4;
    cout << a1 + b1 << endl;
    cout << a1 - b1 << endl;
    cout << a1 * b1 << endl;
    cout << a1 / b1 << endl;//注意：计算机语言中的整型没有四舍五入  此处本应为2.5 但整型会直接去掉小数部分 只保留整数部分 结果为2
    int a2 = 10;
    int b2 = 20;
    cout << a1 / b2 << endl;
    int a3 = 10;
    int b3 = 0;
        //cout << a3 / b3 << endl;//报错 除数不可为0

    double d1 = 0.5;
    double d2 = 0.22;
    cout << d1 / d2 << endl;//运算的结果可以是整数也可以是小数

   //取模 %(求余数)
    cout << 13 % 4 << endl;//13除以4 得到商为3 余数为1 取模结果为1
    cout << 10 % 20 << endl;//10除以20 商为0 余数为20 取模结果为20
        //cout << 10 % 0 << endl;//除数不能为0 因此报错

     //注意！小数不能做取模运算
        //cout << b1 % d1 << endl;

   //递增 递减
        //前置递增 ++a      后置递增 a++
        //前置递减 --a      后置递减 a--
    int a = 10;
    a++;//等价于：a=a+1
    cout << a << endl;
    ++a;//同样是让a=a+1
    cout << a << endl;

        //前置与后置的区别在于：前置是【先进行++ 再计算表达式】 如：
    a2 = 10;
    b2 = ++a2 * 10;//先让a2+1 再乘10
    cout << "b2 = " << b2 << endl;//结果为110
    cout << "a2 = " << a2 << endl;

    a3 = 10;
    b3 = a3++ * 10;//此处是让a3乘10 并复制给b3 完成后再让a3++
    cout << "b2 = " << b3 << endl;//结果为100
    cout << "a2 = " << a3 << endl;//a3进行了++ 结果为11







//赋值运算符
    //将表达式的值赋给变量
       //包含：  =   +=   -=   *=   /=   %=
    cout << "取模运算：" << endl;
    a1 = 10;
    a1 += 1;    // a1 = a1 + 1
    cout << a1 << endl; //得11
    a1 -= 2;    // a1 = a1 - 2
    cout << a1 << endl; //得9
    a1 *= 2;    // a1 = a1 * 2
    cout << a1 << endl; //得18
    a1 /= 2;    // a1 = a1 / 2
    cout << a1 << endl; //得9
    a1 %= 5;    // a1 = a1 % 4
    cout << a1 << endl; //得4







//比较运算符
     //用于表达式的比较，并返回一个真值或假值
    //有以下符号：
    //运算符        
    // ==   !=   >    <    >=    <=
        //若等式正确 返回真(1) 若等式错误 返回假(0)
    cout << "比较运算：" << endl;
    a = 10;
    int b = 20;
    cout << (a == b) << endl;
    cout << (a < b) << endl;
    cout << (a >= b) << endl;






//逻辑运算符
     //根据表达式的值返回真值或假值
    //包括：  !(逻辑非)   &&(逻辑与)   ||(逻辑或)

    // ! 非
    cout << "逻辑运算:" << endl;
    a = 10;
    cout << !a << endl;//非0即为真 非真 即为假 结果是0
    cout << !!a << endl;//假假得真 结果为1

    // && 与
    a = 10; b = 0;
    cout << (a && b) << endl;//全为真才是真 任一假则是假
    cout << (a && !b) << endl;

    // || 或
    a = 10; b = 0;
    cout << (a && b) << endl;//任一真则是真

    system("pause");
    return 0;
}
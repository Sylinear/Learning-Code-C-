#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace::std;



//函数
    //将一段经常使用的代码封装起来，减少重复代码。一个较大的程序，一般分为若干个程序块，每个模块实现特定的功能。
    //今后想使用该功能 只需要调用函数即可 不用重复写一次代码

/*
函数的定义一般主要有5个步骤：
1、返回值类型     一个函数可以返回一个值。在函数定义中
2、函数名         给函数起个名称
3、参数表列       使用该函数时，传入的数据
4、函数体语句     花括号内的代码，函数内需要执行的语句
5、return表达式   和返回值类型挂钩，函数执行完后，返回相应的数据 

定义函数的语法：
    返回值类型 函数名 （参数列表）
    {
       函数体语句

       return表达式
    }

*/

//定义一个加法函数，实现两个数相加
//int add(int sum1 , int sum2)
//{
//    int sum = sum1 + sum2;        //在函数定义的时候 sum1 sum2并没有真实的数据 只是形式上的参数 称为形参
//                                                    //因此参数列表也可以称为形参列表
//    return sum;
//}
////函数的调用
//int main()
//{
//    int a = 5;
//    int b = 6;
//    cout << "sum = " << add(a, b) << endl;
//
//    int c = add(a, b);//调用时传入的参数a 和 b为实际参数(实参)
//                                //当调用函数的时候 实参的值会传递给形参
//
//    return 0;
//
//}


//值传递
void swap(int num1, int num2)
{
    //不需要返回值时 声明时可以成void(无类型)  最后不需要写return
    cout << "交换前：" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    int temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "交换后：" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    return;//可以不写return 也只写return 不写数值 也可以对应void类型
}
int main()
{
    int a = 5;
    int b = 10;

    cout << "main中的 a = " << a << endl;
    cout << "main中的 b = " << b << endl;
    
    swap(a, b);
    cout << "main中的 a = " << a << endl;
    cout << "main中的 b = " << b << endl;
    //可以发现 a和b的值并没有变化
        //因为实际在swap函数中交换的是形参 形参只是实参的一份临时拷贝 实参并没有受到影响

    //*值传递时，形参是修饰不了实参的
    return 0;
}


//函数常见样式
//常见的函数样式有4种
//1. 无参无返
//2. 有参无返
//3. 无参有返
//4. 有参有返
//void test01()
//{
//    //void a = 10; //无类型是不可以创建变量的 原因是无法分配内存
//        //没有参数 没有返回值
//    cout << "this is test01" << endl;
//    //调用函数即可 test01();
//}
//
//void test02(int a)
//{
//    cout << "this is test02" << endl;
//    cout << "a = " << a << endl;
//}
//
//int test03()
//{
//    cout << "this is test03" << endl;
//    return 10;
//}
//
//
//int test03(int b)
//{
//    cout << "this is test04" << endl;
//    return b;
//}



//函数的声明
    //提前告诉编译器函数的存在 告诉编译器函数名称与如何调用函数 函数的实际主体可以单独定义
//int max(int a, int b);
//int max(int a, int b);//声明有分号
//int max(int a, int b);
////*声明可以多次，但定义只有一次
//int main()
//{
//    int a = 5;
//    int b = 10;
//    cout << max(a, b) << endl;
//
//
//    return 0;
//}
//int max(int a, int b)
//{
//    return a > b ? a : b;//三目运算符 代码简洁
//}




//函数的分文件编写
    //函数分文件编写一般有4个步骤
        //1. 创建后缀名为.h的头文件
        //2. 创建后缀名为.cpp的源文件
        //3. 在头文件中写函数的声明
        //4. 在源文件中写函数的定义
#include"swap.h"
int main()
{
    int a = 10;
    int b = 15;
    swap(a, b);





    return 0;
}
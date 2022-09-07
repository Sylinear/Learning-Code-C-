#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//函数提高



////函数默认参数
//    //c++中 函数的形参列表中 形参是可以有默认值的
//    //语法：返回值类型  函数名  (参数 = 默认值){}
//int func(int a, int b = 10, int c = 10)
//{
//    return a + b + c;
//}
//
////【注意】：
//    //*1.若某个参数有默认值，则从该参数往后的每个参数都必须有默认值！
//    //*2.如果函数声明时有默认值，函数实现时就不能有默认参数
//
//int func2(int a, int b = 10, int c = 10);//函数声明 与 函数定义不能同时有默认参数 
//                                            //若声明时有默认值，函数定义时就不能有默认参数！
//                                                //因此声明与定义中 只能有一个有默认参数！
//
//int func2(int a, int b = 10, int c = 10)//此处并没有报错，但是运行时报错了
//{
//    return a + b + c;
//}
//
////int func1(int a, int b = 10,int c)//此处c没有默认参数 函数报错了
////{
////    return a + b + c;
////}
//
//int main()
//{
//    cout << func(10) << endl;//如果没有传入，则使用默认值
//
//    cout << func(10,20) << endl;//如果自己传入数据了，就用自己的数据
//    
//    cout << func(10,20,30) << endl;
//
//    cout << func2(10) << endl;//运行时函数报错了，因为func2的默认参数重定义
//
//    return 0;
//}



////函数占位参数
//    //C++中函数的形参列表里可以有占位参数，用来做占位，调用函数时必须填补该位置
//    //语法：返回值类型 函数名(数据类型){}
//                             //↑ 仅需要写类型 不需写变量名
//
//void func(int a ,int)//此处第二个int则是占位用的
//{
//    cout << "this is func" << endl;
//}
////1.占位参数目前我们还无法使用
////2.占位参数还可以有默认参数
//void func(int a, int = 10)
//{
//    cout << "this is func" << endl;
//}
//
//int main()
//{
//    func(10, 6);
//    func(10);//报错 参数不足
//    return 0;
//}
////课本说到：在现阶段函数的占位参数存在意义不大，但是后面的课程中会用到该技术



////函数重载
//    //在C++中 函数名可以相同，提高复用性
//    //函数重载的条件：
//        //1. 同一个作用域下
//        //2. 函数名称相同
//        //3. 函数参数的类型不同 或者 参数个数不同 或者 参数顺序不同
//        //4.*****注意 返回值不同不可以作为函数重载条件！！******
//int func()
//{
//    cout << "此处是func1" << endl;
//    return 0;
//}
//int func(int a)
//{
//    cout << "此处是func2" << endl;
//    return 0;
//}
//int func(int a, int b)
//{
//    cout << "此处是func3" << endl;
//    return 0;
//}
//int func(double a, int b)
//{
//    cout << "此处是func4" << endl;
//    return 0;
//}
//int func(int a, double b)
//{
//    cout << "此处是func5" << endl;
//    return 0;
//}
//int func(double a, double b)
//{
//    cout << "此处是func6" << endl;
//    return 0;
//}
//int func(float a, float b)
//{
//    cout << "此处是func7" << endl;
//    return 0;
//}
////void func()//报错了 因为返回值不同并不满足函数重载的条件
////{
////    cout << "此处是func4" << endl;
////}
//
//int main()
//{
//    func();
//    func(10);
//    func(10,20);
//    func(3.14, 20);
//    func(50, 3.14);
//    func(3.14, 1.5);//小数默认是double 因此没有进入func7
//
//    return 0;
//}




//函数重载注意事项
  //1、引用作为重载条件
void func(int& a) //引用参数
{
    cout << "func(int &a)调用" << endl;
}

void func(const int& a)//加一个const 能否触发
{
    cout << "func(int const &a)调用" << endl;
}
//const int&  与  int& 属于类型不同 可以触发函数重载

void func1(int a)
{
    cout << "func(int a)调用" << endl;
}

void func1(const int a)
{
    cout << "func(const int a)调用" << endl;
}
//而int 和 const int 则不能触发函数重载

  //2、函数重载 与 默认参数
void func2(int a)
{
    cout << "func2(int a)的调用" << endl;
}
//void func2(int a = 10)
//{
//    cout << "func2(int a = 10)的调用" << endl;
//}
void func2(int a,int b =10)
{
    cout << "func2(int a,int b =10)的调用" << endl;
}
int main()
{
    int a = 10;
    func(a);//调用了没有加const的那个

    const int b = 10;
    func(b);//调用了加const的那个

    func(10);//调用了const的那个

        //理解：因为变量-意味着可读可写  而const-意味着只可读不可写
                //因此 a调用了没有加const的那个    而const变量 和 常量 调用了加const的那个
                        //int &a = 10;这个是不合法的代码 因为引用是给变量起别称 必须在栈区或者堆区等合法的内存空间
                                //而const int&a = 10;是合法的 这就是【常量引用】 而常量引用也无法修改


    func2();//默认参数并不能触发重载，属于参数相同，尽量避免默认参数和函数重载一起出现
    func2(10, 20);

    return 0;
}
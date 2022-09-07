#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;



//引用 给变量起一个别名
//    //语法： 数据类型 &别名 = 原名
//int main()
//{
//    int a = 10;
//    int &b = a;//此时b和a 对应的是同一块内存
//
//    cout << "a=" << a << endl;
//    cout << "b=" << b << endl;
//
//    b = 100;
//    cout << "a=" << a << endl;
//    cout << "b=" << b << endl;//操作b时 a也同时发生改变
//
//    cout << &b << endl;
//    cout << &a << endl;//可以看到 他们对应的是同一个地址
//
//
//    //int& c;      //报错 引用必须初始化 不能为空值 这是当然的 引用是起别名的过程 没有原名如何起别名
//    //int &c = 10; //报错 仅有变量可以进行引用操作 10是常量 不可引用
//    int d = 20;
//    //int& b = d;
//    //&b = d;//均报错 引用仅可初始化一次 且不可以改变
//    b = d;//这是赋值操作，并非修改引用
//
//
//    /*
//    总结：
//
//    1.语法： 类型 &别名 = 原名;
//    2.特点： 别名与原名 指向同一块地址 修改一者 另一者也会改变
//    3.注意事项： ①引用必须初始化  ②引用初始化后，不可以再更改(无法再作为其它人的别名)
//
//    */
//    return 0;
//}



//引用做函数参数
//    //之前需要在函数中修改实参，需要进行传址调用。但如果不想用指针，也可以使用【引用】来传参，同时也可以修改实参
//
////交换函数
//    //值传递
//void mySwap01(int a, int b)
//{
//    int temp = a;
//    a = b;
//    b = temp;
//}
//    //址传递
//void mySwap02(int* pa, int *pb)
//{
//    int temp = *pa;
//    *pa = *pb;
//    *pb = temp;
//}
//    //引用传递 - 新方法
//void mySwap03(int &m, int &n)//实际为 int &m = a; int &n =b; 是一个取别名的过程 对应同一个地址 可直接修改
//{
//    int temp = m;
//    m = n;
//    n = temp;
//}
//int main()
//{
//    int a = 3;
//    int b = 5;
//    cout << "a = " << a << endl;
//    cout << "b = " << b << endl;
//    mySwap01(a, b);
//    cout << "swap01 a =" << a << endl;
//    cout << "swap01 b =" << b << endl;//值传递无法交换数值
//    
//    a = 3; b = 5;
//    cout << "a = " << a << endl;
//    cout << "b = " << b << endl;
//    mySwap02(&a, &b);
//    cout << "swap02 a =" << a << endl;
//    cout << "swap02 b =" << b << endl;//址传递可以交换数值
//
//    a = 3; b = 5;
//    cout << "a = " << a << endl;
//    cout << "b = " << b << endl;
//    mySwap03(a, b);
//    cout << "swap03 a =" << a << endl;
//    cout << "swap03 b =" << b << endl;//引用传递也可以交换数值
//    //引用传递的好处是 语法更清楚简单
//
//    return 0;
//}



//引用做函数返回值
//    //引用可作为函数的返回值 
//  
////1.不要返回局部变量的引用
//int& test01()
//{
//    int a = 10;
//    return a;
//}//此处相当于 返回值为 int&类型的a  用引用int&来接收
// //但a为局部变量 存放在栈区  稍后a会被释放
//
//
//int& test02()
//{
//    static int a = 20;
//    return a;
//}//此处a为全局变量 存放在堆区 可以作为返回值
//int main()
//{
//    int& ref = test01();//返回类型为int& 接收类型即为int&
//    cout << "ref = " << ref << endl;
//    cout << "ref = " << ref << endl;
//    cout << "ref = " << ref << endl;//地址被释放 结果乱码
//
//    int& ref2 = test02();
//    cout << "ref2 = " << ref2 << endl;
//    cout << "ref2 = " << ref2 << endl;
//    cout << "ref2 = " << ref2 << endl;//可以正常使用 但左值必须也是引用
//    int& ref3 = test02();
//    cout << "ref3 = " << ref3 << endl;
//
// //2.函数的调用可以作为左值
//    test02() = 1000;
//    cout << "ref2 = " << ref2 << endl;//可见ref被修改了 所以函数的调用是可以作为左值的
//                                                    //此时所有引用的值都会被修改
//    cout << "ref3 = " << ref3 << endl;
//
//    /*
//    
//    总结：
//        1.引用可作为函数参数，可修改实参
//        2.引用可作为函数返回值，且需要用引用来接受。注意不要返回局部变量。
//        3.引用作为返回值的函数，可以作为左值。此时返回值及所有的引用 都会被修改。
//    
//    */
//
//    return 0;
//}



//引用的本质
    //引用的本质在c++的内部实现 是一个指针常量

void func(int& ref)
{
    ref = 100;
}
int main()
{
    int a = 10;

    int& ref = a;//c++自动转换为：                     int* const ref = &a;
                                        //因为ref是指针常量 因此指针指向不可修改 故引用不可更改
    ref = 20;    //c++检测到ref类型为int&  自动转换为： *ref = 20;

    cout << "a:" << a << endl;
    cout << "ref:" << ref << endl;
    
    func(a);

    //因此 C++的引用本质上是指针常量 但是所有指针的操作都由编译器完成
    return 0;
}



//常量引用
void showValue(const int& v)
{
    cout << v << endl;
}
int main()
{
    //int& ref = 10;//之前说过这样的写法是不可以的 这时候需要用到常量引用
    const int& ref = 10;//编译器中会进行：int temp =10; const int &ref = 10;

    //ref = 100;//报错 常量引用不可以修改变量

    int a = 10;
    showValue(a);//用以修饰形参 避免修改实参 ---- 疑问：那为什么不直接传实参呢？等同于const int* const


    return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace::std;


//指针
    //可以通过指针间接访问内存
    //内存中的数据都有内存编号 相当于内存的地址 指针即是该内存地址 通常用16进制数表示
//int main()
//{
//    //指针的定义
//    int a = 10;
//
//    int* p0;
//
//    //指针变量的赋值
//    p0 = &a;     //& - 取址符号 可以获取变量的地址
//
//    cout << &a << endl;
//    cout << p0 << endl;
//
//    //指针的使用
//    int b = *p0;     //*可以访问指针指向的内存空间 该操作称为解引用
//    cout << b << endl;
//    cout << *p0 << endl;
//
//
//
//
//    //指针所占的内存空间
//        //不同的变量用不同类的指针进行储存
//    char c = 'a';
//    double d = 3.14;
//    float f = 2.5f;
//
//    cout << sizeof(a) << endl;
//    cout << sizeof(b) << endl;
//    cout << sizeof(c) << endl;
//    cout << sizeof(d) << endl;
//
//    char* p1 = &c;
//    double* p2 = &d;
//    float* p3 = &f;
//    cout << sizeof(p0) << endl;
//    cout << sizeof(p1) << endl;
//    cout << sizeof(p2) << endl;
//    cout << sizeof(p3) << endl;
//
//    //可以发现 无论是什么类型的指针 在32位操作系统下 指针均是4个字节 (而64位系统则是8个字节 但一般我们通常都是使用32位)
//
//    cout << sizeof(int*) << endl;
//    cout << sizeof(char*) << endl;
//    cout << sizeof(double*) << endl;
//    cout << sizeof(float*) << endl;
//    //sizeof函数 可以直接写类型
//
//
//
//
//    //空指针 和 野指针
//    int* n_p = NULL;//此处指针指向的是内存编号为0的空间 称其为空指针 
//            //通常你创建一个指针变量但不知道要指向哪里的时候 就可以置为空 指针使用完后也要置空
//
//    //空指针是无法访问的 因为内存编号0~255位系统占用内存 不允许用户访问
//    //*p = 100;
//    //cout << *n_p << endl;
//
//
//    int* u_p = (int*)0x1100;//该指针指向了一个你随意写的空间 但这个空间你并没有申请使用 此时我们称为非法访问
//    //*u_p = 100;  //当你修改该指针指向的内容时 有可能会导致其它代码的内存被修改
//    //因此我们都必须避免野指针
//
//    //空指针/野指针均不要访问 ，而野指针请不要出现
//    
//
//
//
//    //cosnt修饰的指针
//    a = 10;
//    b = 20;
//    //常量指针
//    const int* p_1 = &a;        
//    //此处const修饰的是指针类型 意味着[指针指向的int值]不可修改 但指针自身可修改 
//    p_1 = &b;//修改指针         成功
//    //*p_1 = 30;//修改指针指向的值 报错
//
//    //指针常量
//    int* const p_2 = &a;        
//    //此处const修饰的是p_2自己 意味着[指针自身]不可修改 但指针指向空间内的值则可以修改
//    //p_2 = &b;   //修改指针      报错
//    *p_2 = 30;//修改指针指向的值 成功 
//
//    const int* const p_3 = &a;
//    //此时指针类型 与 变量 两者均不可修改了
//
//
//
//
//    //指针和数组
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int* p = arr;//数组名表示首元素地址 意味着此时 p = &arr[0]
//    
//    cout << "第一个元素:" << arr[0] << endl;
//    cout << "指针访问第一个元素:" << *p << endl;
//    cout << "指针访问第二个元素:" << *(p + 1) << endl;
//        //其实 此处 p 与 arr均表示首元素地址 因此也可以这样访问第二个元素：
//    cout << "指针访问第二个元素:" << p[1] << endl;
//            // p[x] 等价于 *(p + x)
//
//    //用指针遍历数组
//    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//    {
//        cout << *p << endl;
//        p++;
//    }
//
//    return 0;
//}




//指针和函数
//void swap1(int a, int b)//传值调用
//{
//    int temp = a;
//    a = b;
//    b = temp;
//}//无法交换 因为交换的是形参 不会影响实参
//
//void swap2(int* p1, int* p2)//传址调用
//{
//    int temp = *p1;
//    *p1 = *p2;
//    *p2 = temp;
//}//交换成功 通过间接调用 访问的确实是a和b对应的空间
//
//int main()
//{
//    int a = 5;
//    int b = 20;
//    swap1(a, b);
//    cout << "a = " << a << endl;
//    cout << "b = " << b << endl;
//
//    swap2(&a, &b);
//    cout << "a = " << a << endl;
//    cout << "b = " << b << endl;
//
//    //因此 调用函数时如果想保证实参不改变 则使用值传递
//        //若想修改实参 则需要使用址传递
//
//    return 0;
//}




//指针 数组 函数
    //封装一个函数，利用冒泡排序，实现对整型数组的升序排序
void bubble(int* arr, int sz)  
                //此处也可以写 int arr[] 语法上表示为传入了数组  而写int* arr则是表示为传入了首元素地址 不过结果是一样的
{
    for (int i = 0; i < sz - 1; i++)
    {
        for (int j = 0; j < sz - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
    int sz = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << endl;
    }

    bubble(arr, sz);

    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
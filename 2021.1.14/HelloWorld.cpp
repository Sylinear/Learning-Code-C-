#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>

using namespace std;

/*
    main是一个程序的入口
    每个程序都必须有这么一个函数
    有且仅有一个

    --多行注释
*/
int main()
{
    cout << "hello world\n" << endl; // 8行代码的含义就是在屏幕中输出"hello wolrd" 并换行  --单行注释
    cout << "hello C++" << endl;



//变量创建的语法：  
    //数据类型 数据名 = 变量初始值 分号
    int a = 10;
    cout << "a = " << a << endl;
        //输出结果 a = 10
    


//常量
    //1.#define 宏常量
#define DAY 7 //通常在文件上方定义

    //2.const修饰的变量
const int month = 20;

    cout << "一周总共有： " << DAY << "天" << endl;
    //DAY = 14;//报错 常量不可修改

    cout << "一年总共有" << month << "个月" << endl;
    //month = 24;//报错 常量不可修改



//关键字
    //C++中预先保留的单词 定义变量或常量时不要用关键字
    //int class = 10;//报错 class是关键字 不可以作为变量的名称



//标识符命名规则
    //给标识符(变量、常量)命名     
    //1.标识符不能是关键字
    //2.标识符只能由字母、数字、下划线组成
    //3.第一个字符必须为字母或下划线 不能是数字
    //4.字母区分大小写

    int abc = 10;
    int _abc = 20;
    int _123abc = 30;
    int 123abc = 40;//错误 第一个字符不能是数字 可以是字母或下划线
    int aaa = 50;
    cout << aaa << endl;//输出50
    cout << AAA << endl;//报错 因为aaa和AAA是不一样的标识符

    //建议：给变量命名时，最好能够做到【见名知意】
    int num1 = 10;
    int num2 = 20;
    int sum = num1 + num2;
    cout << sum << endl;

    system("pause");
    return 0;
} 




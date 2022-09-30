#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;


//[成员变量]和[成员函数]分开存储 
/*
    在c++中,类内的成员变量和成员函数分开存储,只有非静态成员变量才属于类的对象
*/
//class Person
//{
//};
//class Person1
//{
//public:
//    int m_A;//非静态成员变量
//
//    static int m_B;//静态成员变量
//
//    void func() //非静态成员函数
//    {}
//
//    static void func(int a)//静态成员函数
//    {}
//};
//int Person1::m_B = 5;
//
//void test01()
//{
//    Person p;
//    cout << "size of p =" << sizeof(p) << endl;
//    //空白对象(类中无成员)占用内存空间 为 1字节    
//          //原因: c++编译器会给每个空对象也分配一个字节的空间 以区分空对象所占内存的位置(不同空对象所占内存不同)
//                            //每个空对象都有自己独一无二的内存地址 因此会给他分配一个字节
//}
//void test02()
//{
//    Person1 p;
//    cout << "size of p1 =" << sizeof(p) << endl;
//    //对象的大小为4  就是非静态成员变量的大小 因为非静态成员变量是属于对象的
//            //而静态成员变量不属于 因此对象的大小不需计算静态成员
//                //而成员函数与成员变量是分开存储的 可见对象的大小并未包含成员函数的大小
//}
//int main()
//{
//    test01();
//    test02();
//    return 0;
//}






//this指针
/*

上一部分已知成员变量和成员函数会分开存储,每一个非静态成员函数只会诞生一份函数实例,存放于代码区.
    多个同类型的对象会共用一块代码.
        问题:一块代码是如何区分 到底是哪个对象调用了自己?

        ---> c++提供特殊的对象指针 , this指针 ,用以解决上述问题. this指针指向被调用的成员函数所属的对象.

    this指针是隐含每一个非静态成员函数的指针,不需我们自己定义,直接使用即可

    this指针的用途:
        1.解决名称冲突:函数形参 和 成员变量同名时 ,可以用this指针来区分
        2.返回对象本身用*this:在函数中,可以把返回值返回对象本身, 使用return *this

*/
//class Person
//{
//public:
//    Person(int age)
//    {
//        this->age = age; //1.解决名称冲突: 同样的age   this是一个指针 需要用->访问成员 
//    }                                   //this指针指向的是 调用该函数的那个对象
//
//    void PersonAddAge(Person &p)
//    {
//        this->age += p.age;//自身年龄加上对方年龄
//    }
//
//    Person& PersonAddAge1(Person& p) //用引用的方式来返回
//    {
//        this->age += p.age;//自身年龄加上对方年龄
//
//        return *this;//返回类型为类  返回值为*this   对this指针解引用 即返回了该对象
//    }
//    int age;
//};
//
//void test01()
//{
//    Person p1(18);
//    cout << "p1的年龄为:" << p1.age << endl;
//}
//
//void test02()
//{
//    Person p1(10);
//
//    Person p2(15);
//
//    p2.PersonAddAge(p1);//年龄相加函数
//    cout << "p2的年龄为:" << p2.age << endl; //p2变为25岁
//
//    //p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);//若想要多加几次年龄呢?
//        //因为目前写的 p2.PersonAddAge返回值为void 因此返回后变成了 "void".PersonAddAge(p1)
//            //那如何才可以让链式编程实现呢?
//
//    //链式编程思想
//    p2.PersonAddAge1(p1).PersonAddAge1(p1).PersonAddAge1(p1);
//        //因为目前写的 p2.PersonAddAge1返回值为Person& *this,即返回了p2
//                    //因此返回后变成了 "p2".PersonAddAge(p1).PersonAddAge(p1) 就可以实现链式编程了
//
//              //问题1:那能不能直接返回this指针 用Person*来接受呢? 
//                            //不行 因为this是函数中的局部变量
//                                            //存储在栈区 在函数结束后释放 因此需要 *this返回对象本体
//            
//              //问题2:返回值类型 能否是Person 而不用Person&(引用)?
//                            //不行 因为返回值为Person时 实际上是拷贝构造了一个新的对象p3 
//                                    //因此返回后变成了 "p3".PersonAddAge(p1).PersonAddAge(p1) 
//                                            //每次修改的都是原本一次拷贝 实际上p2只有第一次得到了修改
//
//    cout << "p2的年龄为:" << p2.age << endl;
//}
//int main()
//{
//    test01();
//    test02();
//    return 0;
//}







//空指针访问成员函数
/*

c++中允许空指针调用成员函数 但要注意是否用到this指针 并要保证代码健壮性

*/
//class Person
//{
//public:
//    void showClassName()
//    {
//        cout << "this is Person class" << endl;
//    }
//
//    void showPersonAge()
//    {
//        //为了避免指针调用 导致非法访问 所以会加一句对this指针的判断
//        if (NULL == this)
//        {
//            return;//若this为空 则直接结束函数
//        }
//        cout << "age = " << m_Age << endl;
//    }
//
//    int m_Age;
//};
//
//void test01()
//{
//    Person* p = NULL;   //类指针 指向空指针
//    p->showClassName(); //调用指针内的两个函数 第一个函数正常执行
//    p->showPersonAge(); //但是在第二个函数时 代码崩了 显示异常"this是nulltpr 读取访问权限冲突
//                
//                        //这是因为   cout << "age = " << m_Age << endl;
//                            //默认等同于               this->m_Age
//                                //告知编译器 你所调用的成员 是这个实体对象里的成员 
//                                     //但我们现在没有进行实例化对象 只是一个空指针 因此无法访问
//}
//
//int main()
//{
//    test01();//代码崩了
//
//
//    return 0;
//}







//const修饰的成员函数 [常函数]
/*

    常函数:

        成员函数被const修饰后 我们称之为 [常函数]
    
        常函数内不可以修改成员属性!

        成员属性声明时加关键字mutable后,在常函数中则依然可以修改


    常对象:

        声明对象前加const 则变成 [常对象]

        常对象只能调用常函数
*/
class Person 
{
public:
    void showPerson0()  //正常函数
    {
        m_A = 100;
    }
    void showPerson() const  //在括号后 {}之前 加上const 则变成了 [常函数]
    {
        m_A = 100;  //常函数中 无法修改普通成员
        //因此此处等价于 this->m_A = 100; 

            //this指针的本质 是指针常量 -> this指针的指向是不可以修改的
                //Person* const this;
            //而一旦在函数的()后 加上const后 就变成了:  const Person* cosnt this;
                                                // 即 不仅指向不可修改 连指向的值 也不可修改!

        //意味着  在成员函数后加const使其变成[常函数]  本质上const修饰的是this指针 让指针的值也不可修改!

        m_B = 100; //可见 m_B是可以修改的
    }

    int m_A;
    mutable int m_B;//特殊变量 即使在常函数中,也可以修改这个值! 关键字: mutable 
};

void test01()
{
    Person p1;
    p1.showPerson(); //调用函数时 this指针指向该p1

}

void test02()
{
    const Person p; //在对象前加const 变为常对象
    p.m_A = 100;//无法修改 因为是常对象
    p.m_B = 200;//但这个带mutable变量的关键字可以修改 常函数\常对象均可以修改

    //常对象只能调用常函数
    p.showPerson0(); //可见 p无法调用普通函数
    p.showPerson(); //但是常函数 依旧可以调用
}

int main()
{

    return 0;
}
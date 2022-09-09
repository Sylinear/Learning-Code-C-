#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

/*
C++是面向对象的语语言

C++面向对象的三大特性为：【封装、继承、多态】

C++认为【万事万物都皆为对象】，对象上有其[属性]和[行为]


如：​	人可以作为对象，属性有姓名、年龄、身高、体重...，行为有走、跑、跳、吃饭、唱歌...

​	车也可以作为对象，属性有轮胎、方向盘、车灯...,行为有载人、放音乐、放空调...

​	具有相同性质的【对象】，我们可以抽象称为【类】，人属于人类，车属于车类
*/


//封装
/*
封装是C++面向对象三大特性之一

封装的意义：

* 将属性和行为作为一个整体，表现生活中的事物
* 将属性和行为加以权限控制
*/

//封装意义一
    //在设计类时,属性和行为作为一个整体,表现事物
    //语法: class 类名{ 访问权限 :  属性 / 行为};
                            //类中的属性和行为 统称为:[成员]
                                    //因此属性又称为:成员属性\成员变量  行为又称为:成员函数\成员方法

//示例1 设计一个圆类 求圆的周长
    //圆求周长的公式: 2 * PI * 半径

    //#define PI 3.14//自定义常量

    //class Circle    //class表示设计一个类 后面紧跟的是类名
    //{
    //public: //访问权限  此处为公共权限 下一节介绍

    //    //属性
    //    int m_r; //圆有半径

    //    //行为
    //    double calculateZC()    //获取圆的周长
    //    {
    //        return 2 * PI * m_r;
    //    }
    //};//到此 这个求圆的周长的类已经设计完了
    //    //这是一个类型  但是目前我们还没有属于这个类型的具体变量 --> 对象
    //        //我们现在可以通过这个原类 来创建一个具体的圆(对象)

    //int main()
    //{
    //    Circle c1;//通过圆类 创造一个具体的圆(对象)  该过程称之为[实例化](通过一个类 创建要给对象的过程)

    //    c1.m_r = 10;//给圆对象的属性进行赋值

    //    cout << "圆的周长为:" << c1.calculateZC() << endl;//通过类内部自带的行为 计算出周长

    //    return 0;
    //}


//示例2 设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号
    //#include<string>
    //class Student
    //{
    //public://访问权限-公共权限
    //
    //    //属性:姓名 学号
    //    string m_name;
    //    string m_number;

    //    //行为 
    //    void setname(string& name)
    //    {
    //        m_name = name;
    //    }
    //    void setnumber(string& number)
    //    {
    //        m_number = number;
    //    }
    //    void showinf()
    //    {
    //        cout << "学生姓名为:" << m_name << "\t" << "学生学号为:" << m_number << endl;
    //    }
    //};
    //int main()
    //{
    //    Student s1;//实例化对象
    //
    //    string name;
    //    string number;
    //    cout << "请输入学生姓名:";
    //    cin >> name;
    //    s1.setname(name);
    //    cout << "请输入学生学号:";
    //    cin >> number;
    //    s1.setnumber(number);
    //    s1.showinf();
    //    return 0;
    //}




//封装意义二
    //类在设计时，可以把属性和行为放在不同的权限下,加以控制
    //访问权限有三种:
        //1.pubilc      公共权限    类内可以访问,类外也可以访问
        //2.protected   保护权限    类内可以访问,类外不可以访问    子类可以访问父类的
        //3.private     私有权限    类内可以访问,类外不可以访问    子类不可以访问父类的
                //那protected和private有什么区别呢? 区别主要体现在[继承]中 父类中的保护权限 子类可以访问 私有则不可以

    //#include<string>
    //class Person
    //{
    //public://公共权限
    //    string m_name;//姓名

    //protected://保护权限
    //    string m_car;//汽车

    //private://私有权限
    //    int m_password;//银行卡密码

    //public:
    //    void func()
    //    {
    //        m_name = "张三";
    //        m_car = "拖拉机";
    //        m_password = 123456;//在class内 都是属于类内 在类内可以随意访问 不会出现问题
    //    }
    //};
    //int main()
    //{
    //    //类外
    //    Person p1;//实例化对象
    //    p1.m_name = "王五";//类外可以访问
    //    p1.m_car = "奔驰";//报错 显示不可访问
    //    p1.m_password = 564132;//报错 显示不可访问
    //    p1.func();//可以访问
    //    return 0;
    //}




//struct 和 class 的区别
    //区别:唯一区别在于[默认的访问权限不同]  struct默认为共有 class默认为私有
    //struct S1
    //{
    //    int m_a;
    //private:
    //    int m_b;
    //};

    //class C1
    //{
    //    int m_b;
    //};

    //int main()
    //{
    //    S1 s1;
    //    s1.m_a = 1;//struct默认为公有 类外可以访问
    //    s1.m_b = 2;//自己修改为私有后 类外也不可以访问了

    //    C1 c1;
    //    c1.m_b = 2;//class默认为私有 类外不能访问
    //    return 0;
    //}




//成员属性设置为私有
    //优点1:将所有成员属性设置为私有,可以自己控制读写权限
    //优点2:对于写入权限,我们可以检测数据的有效性
    //#include<string>
    //class Person
    //{
    //private:
    //    //姓名
    //    string m_name;      //可读可写
    //    //年龄
    //    int m_age;          //只读
    //    //情人
    //    string m_lover;     //只写
    //    //这些属性都是私有权限 类外无法直接访问

    //    int m_ID = 10;      //初始化为10,可读可写,但范围必须是0~150之间

    //public:
    //    //通过一些公共权限的函数侧面的来对成员属性进行赋值

    //    void setName(string name)//写入姓名
    //    {
    //        m_name = name;
    //    }
    //    string getName()//读取姓名
    //    {
    //        return m_name;
    //    }
    //    int getAge()//读取年龄
    //    {
    //        m_age = 0;//初始化为0岁
    //        return m_age;
    //    }
    //    void setLover(string lover)//写入情人
    //    {
    //        m_lover = lover;
    //    }

    //    void setID(int ID)//设置ID
    //    {
    //        if (ID < 0 || ID>150)
    //        {
    //            cout << "ID不合规格!" << endl;
    //            return ;//增加设置ID的条件
    //        }
    //        m_ID = ID;
    //    }
    //    int getID()
    //    {
    //        return m_ID;
    //    }
    //};
    //int main()
    //{

    //    Person p1;

    //    //p1.m_name = "张三";
    //    //p1.m_age = 10;//都无法直接访问

    //    p1.setName("张三");
    //    cout <<"姓名为:"<< p1.getName() << endl;
    //    cout <<"年龄为:"<< p1.getAge() << endl;
    //    p1.setLover("小芳");

    //    //p1.m_lover;//无法访问

    //        //属性全定为私有 只能通过公共权限的行为进行修改 就可以借此控制读写的权限

    //    p1.setID(1000);
    //    cout << "ID为:" << p1.getID() << endl;
    //        //类的行为中有限制条件 可以检测并限制外界写入时的有效性
    //
    //    return 0;
    //}

//封装联系案例1:设计立方体类
    /*设计立方体类(Cube)

      求出立方体的面积和体积

      分别用全局函数和成员函数判断两个立方体是否相等。
    */
    //class Cube
    //{
    //public:
    //    int m_L;//立方体的棱长

    //public:
    //    int SofCube()//获取表面积
    //    {
    //        return 6 * m_L;
    //    }
    //    int VofCube()//获取体积
    //    {
    //        return (m_L * m_L * m_L);
    //    }
    //public:
    //    bool compare(Cube& c)//此处的c为外部传入的 因为这是在类内 可以直接判断访问自己的变量
    //    {
    //        if (m_L == c.m_L)
    //        {
    //            cout << "两个立方体相等" << endl;
    //            return true;
    //        }
    //        else
    //        {
    //            cout << "两个立方体不相等" << endl;
    //            return false;
    //        }
    //    }
    //};
    //bool compare(Cube& c1, Cube& c2) //使用指针或者引用 减少传参的大小
    //{
    //    if (c1.m_L == c2.m_L)
    //    {
    //        cout << "两个立方体相等" << endl;
    //        return true;
    //    }
    //    else
    //    {
    //        cout << "两个立方体不相等" << endl;
    //        return false;
    //    }
    //}
    //int main()
    //{
    //    Cube c1{ 10 };//实例化对象同时初始化数据
    //    Cube c2;
    //    c2.m_L = 20;
    //    Cube c3{ 20 };

    //    cout << c1.SofCube() << endl;
    //    cout << c2.VofCube() << endl;
    //    compare(c1, c2);
    //    compare(c2, c3);

    //    bool ret = compare(c1, c2);
    //    if(1 == ret)
    //    { 
    //        cout << "两个立方体相等" << endl;
    //    }
    //    else
    //    {
    //        cout << "两个立方体不相等" << endl;
    //    }

    //    return 0;
    //}

//封装联系案例2:点和圆的关系
    //设计一个圆形类（Circle），和一个点类（Point），计算点和圆的关系。
    //class Point
    //{
    //public:
    //    int m_x;
    //    int m_y;//点的位置
    //};
    //class Circle
    //{
    //public:
    //    Point center;//圆心的位置        ---在类中 可以让另一个类作为本类中的成员
    //    int m_r;//圆的半径
    //};

    //void relation(Circle c1, Point p1)
    //{
    //    int l = (c1.center.m_x - p1.m_x) * (c1.center.m_x - p1.m_x)
    //        + (c1.center.m_y - p1.m_y) * (c1.center.m_y - p1.m_y);
    //    int r2 = c1.m_r * c1.m_r;
    //    if (l < r2)
    //    {
    //        cout << "点在圆内" << endl;
    //    }
    //    else if (l == r2)
    //    {
    //        cout << "点在圆上" << endl;
    //    }
    //    else
    //    {
    //        cout << "点在圆外" << endl;
    //    }
    //}
//尝试用封装的思路
#include"Point.h"
#include"Circle.h"

int main()
    {
        Circle c1{ {0,0},3 };
        Point p1{ 0,1 };
        Point p2{ 3,3 };
        Point p3{ 3.0 };

        //注意 使用封装后 就不能直接访问了
        //relation(c1, p1);
        //relation(c1, p2);
        //relation(c1, p3);

        c1.relation(p1);
        c1.relation(p2);
        c1.relation(p3);
        return 0;
    }
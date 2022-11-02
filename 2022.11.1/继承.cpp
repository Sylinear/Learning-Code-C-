#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;


/*
    继承是面向对象三大特性之一

    有些类与类之间有特殊的关系

    例如： 小动物类   包括 猫 狗    而加菲猫 布偶猫 波斯猫 都属于猫  而哈士奇 京巴 柯基都属于狗

    
        我们发现，定义这些类时，下级别的成员除了拥有上一级的共性，还有自己的特性。

    这个时候我们就可以考虑利用继承的技术，减少重复代码
*/

//继承的基本语法
    //有很多网站 都有公共的头部、底部、左侧列表， 只有中心内容不同。我们试试普通写法和继承写法的区别。看一下其好处和意义。

//普通实现

//class Java
//{
//public:
//    void header()
//    {
//        cout << "首页、公开课、登录、注册....(公共头部)" << endl;
//    }
//    void footer()
//    {
//        cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
//    }
//    void left()
//    {
//        cout << "Java、Python、C++、...（公共分类列表）" << endl;
//    }
//    void content()
//    {
//        cout << "Java学科视频" << endl;
//    }
//};
//class Python
//{
//public:
//    void header()
//    {
//        cout << "首页、公开课、登录、注册....(公共头部)" << endl;
//    }
//    void footer()
//    {
//        cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
//    }
//    void left()
//    {
//        cout << "Java、Python、C++、...（公共分类列表）" << endl;
//    }
//    void content()
//    {
//        cout << "Python学科视频" << endl;
//    }
//};
//class Cpp
//{
//public:
//    void header()
//    {
//        cout << "首页、公开课、登录、注册....(公共头部)" << endl;
//    }
//    void footer()
//    {
//        cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
//    }
//    void left()
//    {
//        cout << "Java、Python、C++、...（公共分类列表）" << endl;
//    }
//    void content()
//    {
//        cout << "Cpp学科视频" << endl;
//    }
//};
//void test01()
//{
//    cout << "Java学习页面如下:" << endl;
//    Java ja;
//    ja.header();
//    ja.footer();
//    ja.left();
//    ja.content();
//
//    cout << "------------------" << endl;
//    cout << "Python学习页面如下:" << endl;
//    Python pt;
//    pt.header();
//    pt.footer();
//    pt.left();
//    pt.content();
//
//    cout << "------------------" << endl;
//    cout << "C++学习页面如下:" << endl;
//    Cpp cpp;
//    cpp.header();
//    cpp.footer();
//    cpp.left();
//    cpp.content();
//
//    //可见以上三个类有大量的重复内容  每次定义新对象、实例化对象时都有大量代码重写
//}

//继承写法
    //公共页面类
//class BasePage
//{
//public:
//    void header()
//    {
//        cout << "首页、公开课、登录、注册....(公共头部)" << endl;
//    }
//    void footer()
//    {
//        cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
//    }
//    void left()
//    {
//        cout << "Java、Python、C++、...（公共分类列表）" << endl;
//    }
//};
//class Java : public BasePage                    //继承语法   class 子类名  :  继承方式  父类名
//{
//public:                                         //其中父类中的所有成员变量和成员函数 子类都会拥有
//    void content()                                      //子类中只需要定义它独有的成员即可
//    {
//        cout << "Java学科视频" << endl;
//    }
//};
//class Python : public BasePage
//{
//public:
//    void content()
//    {
//        cout << "Python学科视频" << endl;
//    }
//};
//class Cpp : public BasePage
//{
//public:
//    void content()
//    {
//        cout << "C++学科视频" << endl;
//    }
//};
//void test02()                                   //实例化 跟刚刚单独写是一样的 没有区别
//{
//    cout << "Java学习页面如下:" << endl;
//    Java ja;
//    ja.header();
//    ja.footer();
//    ja.left();
//    ja.content();
//
//    cout << "------------------" << endl;
//    cout << "Python学习页面如下:" << endl;
//    Python pt;
//    pt.header();
//    pt.footer();
//    pt.left();
//    pt.content();
//
//    cout << "------------------" << endl;
//    cout << "C++学习页面如下:" << endl;
//    Cpp cpp;
//    cpp.header();
//    cpp.footer();
//    cpp.left();
//    cpp.content();
//}
//int main()
//{
//    //test01();
//    test02();
//
//    return 0;
//}
//继承的好处:   减少重复的代码    在实际开发中、遇到了代码量极大的工程，如WINDOWS底层等，都依靠继承
    //继承语法   class 子类名  :  继承方式  父类名
            //其中父类中的所有成员变量和成员函数 子类都会拥有
                //子类中只需要定义它独有的成员即可
        //本次课只介绍了公共继承 public  后面会介绍另外几种继承方式
    //子类  也称为【派生类】   父类 也称为【基类】   不同的课本有不同的叫法 也要认识

//**派生类中的成员，包含两大部分** ：
        //①一类是从基类继承过来的，②一类是自己增加的成员。
        //从基类继承过过来的表现其共性，而新增的成员体现了其个性。






//继承方式
/*
  **继承方式一共有三种：**

         公共继承
         保护继承
         私有继承
*/
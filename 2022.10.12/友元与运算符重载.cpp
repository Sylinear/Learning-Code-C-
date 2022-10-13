#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

/*
友元

类中的属性和函数有不同的访问权限 如public private protected等

public如同客厅,所有客人都可以访问.而private如同卧室,只有自己可以进去.

但如果你想允许一些闺蜜基友进房间,也是可以的.

    让私有属性 可以让类外特殊的一些函数或者类进行访问,需要用到的就是 [友元]


    友元:让一个函数或者类 访问另一个类中的私有成员

    关键字:firend

友元的三种实现:
    全局函数做友元
    类做友元
    成员函数做友元
*/





//全局函数做友元
//#include<string>
////建筑物类
//class Building
//{
//
//    friend void goodGay01(Building* building);//友元声明
//        //告知函数名goodGay01为该类的友元 
//            //只是一个声明 无需放在public作用域下
//
//public:
//    Building()  //默认构造
//    {
//    m_SittingRoom = "客厅";
//    m_BedRoom = "卧室";
//    }
//public:
//    string m_SittingRoom;//公共 客厅
//private:
//    string m_BedRoom;//私有 卧室
//};
//
////全局函数 想访问类中的私有成员
//void goodGay(Building *building)//类用指针传参或者引用传址都可以
//{
//    cout << "好基友全局函数 正在访问:" << building->m_SittingRoom << endl;
//        //可见 公共属性在类外是可以正常访问的
//    //cout << "好基友全局函数 正在访问:" << building->m_BedRoom << endl;
//        //可见 私有属性在类外无法访问
//}
//
//void goodGay01(Building* building)//
//{
//    cout << "好基友全局函数 正在访问:" << building->m_SittingRoom << endl;
//    cout << "好基友全局函数 正在访问:" << building->m_BedRoom << endl;
//        //在类中声明过goodGay01()为友元后 可见私有属性也可以访问了
//}
//
//void test01()
//{
//    Building building;//实例化对象
//    goodGay(&building);//传址调用
//}
//void test02()
//{
//    Building building;//实例化对象
//    goodGay01(&building);//传址调用
//}
//int main()
//{
//    test02();
//
//    return 0;
//}






//类做友元
//#include<string>
//class Building;//预先声明类 避免报错
//class GoodGay//好朋友类
//{
//public:
//    GoodGay();//构造函数    成员在类内声明 在类外实现 也是可行的
//
//    void visit();//参观函数 访问Building中的属性(公共 及 私有)
//
//private:
//    Building* building;
//
//};
//
//class Building//建筑类
//{
//
//    friend class GoodGay; //友元类 告知GoodGay类是本类的友元 可以访问私有成员
//
//public:
//    Building(); //构造函数    成员在类内声明 在类外实现 
//
//public:
//    string m_SittingRoom;//客厅
//private:
//    string m_BedRoom;//卧室
//};
//
////类外实现Building的成员函数
////作用域 + 构造函数
//Building::Building()
//{
//    cout << "Building的构造" << endl;
//    m_SittingRoom = "客厅";
//    m_BedRoom = "卧室";
//}
//
//
////类外实现GoodGay的成员函数
////作用域 + 构造函数
//GoodGay::GoodGay()
//{
//    cout << "GoodGay的构造" << endl;
//    //创建建筑物对象
//    building = new Building;        // "变量 = new 类型" 语法在堆空间创建一个该类型的对象并返回指针
//                                            //在new类时会自动运行构造函数
//}
////返回值 + 作用域 + 函数
//void GoodGay::visit()
//{
//    cout << "好基友类正在访问" << building->m_SittingRoom << endl;
//    cout << "好基友类正在访问" << building->m_BedRoom << endl;
//}
//void test01()
//{
//    GoodGay gg; //实例化对象
//    gg.visit();
//}
//int main()
//{
//    test01();
//
//    return 0;
//}







//成员函数做友元
//#include<string>
//
//class Building;//先声明
//
//class GoodGay//好朋友类
//{
//public:
//    GoodGay();
//
//    void visit();//让visit可以访问building中私有的成员
//    void visit2();//而visit不可以访问Building的私有成员
//
//    Building* building;
//};
//
//class Building//建筑类
//{
//
//    friend void GoodGay::visit(); //友元成员函数 说明作用域及函数名
//
//public:
//    Building();//先在类中声明 再于类外实现
//
//public:
//    string m_SittingRoom;//客厅
//private:
//    string m_BedRoom;//卧室
//};
//
////类外实现成员函数
//Building::Building()//构造
//{
//    m_SittingRoom = "客厅";
//    m_BedRoom = "卧室";
//}
//
//GoodGay::GoodGay()//构造
//{
//    building = new Building;    //在堆区创建Building
//}
//
//void GoodGay::visit()
//{
//    cout << "visit正在访问" << building->m_SittingRoom << endl;
//    cout << "visit正在访问" << building->m_BedRoom << endl;
//}
//
//void GoodGay::visit2()
//{
//    cout << "visit2正在访问" << building->m_SittingRoom << endl;
//    //cout << "visit正在访问" << building->m_BedRoom << endl; //此处只对函数visit友元 因此visit2不能访问
//}
//
//int main()
//{
//    GoodGay gg;
//    gg.visit();
//    gg.visit2();
//    return 0;
//}










/*
运算符重载

譬如 = - * / ++ -- () []等常见的运算符 对于类 可以对这些已有的运算符重新定义 赋予另一种功能 来适应不同的数据类型

对于内置数据类型，编译器知道如何运算
    如：int a = 10; int b = 20;    int c = a + b;
但对于自定义类型，特别是内部含有指针的，此时让两个变量相加，编译器就不知道该如何操作了

    运算符关键字：operator

        operator+
        operator-
        operator++
          ...
        
    本质为：Person p3 = p1.operator+(p2); 或 p3 = operator+(p1,p2);
                            成员函数重载              全局函数重载                 
    简化为：Person p3 = p1 + p2;

*/


//加号运算符重载
    //实现两个自定义类型数据相加的运算
        //1.通过成员函数重载+号
        //2.通过全局函数重载+号
//class Person
//{
//public:
//    Person()
//    {
//        cout << "person的默认构造" << endl;
//    }
//    Person(const Person& p) {
//        this->m_A = p.m_A;
//        this->m_B = p.m_B;
//        cout << "拷贝构造" << endl;
//    }
//    ~Person()
//    {
//        cout << "person的析构" << endl;
//    }
//    //成员函数重载+号
//    //Person operator+(const Person& p)//传参调用 为避免修改p 加上const
//    //{
//    //    Person temp;//创建临时变量 此处会调用构造函数 实例化一个temp
//    //    temp.m_A = this->m_A + p.m_A;
//    //    temp.m_B = this->m_B + p.m_B;//this是指针 记住 需要用->访问成员
//    //    cout << "temp的地址:" << &temp << endl;
//    //    return temp;
//    //}
//public:
//    int m_A;
//    int m_B;
//};
//
    ////全局函数重载+号
//Person operator+(Person& p1, Person& p2)
//{
//    Person temp;//构造临时变量 并在函数结束 返回值后析构
//    temp.m_A = p1.m_A + p2.m_A;
//    temp.m_B = p1.m_B + p2.m_B;
//    cout << "temp的地址:" << &temp << endl;
//    return temp;
//}
////运算符重载也可以进行函数重载
//Person operator+(Person& p1, int val)
//{
//    Person temp;//构造临时变量 并在函数结束 返回值后析构
//    temp.m_A = p1.m_A + val;
//    temp.m_B = p1.m_B + val;
//    cout << "temp的地址:" << &temp << endl;
//    return temp;
//}
//void test01()
//{
//    Person p1;
//    p1.m_A = 10;
//    p1.m_B = 20;
//
//    Person p2;
//    p2.m_A = 10;
//    p2.m_B = 20;
//
//    Person p3 = p1 + p2;//p3此处进行一次拷贝构造 temp拷贝给p3后自己直接析构
//    cout << "p3的地址:" << &p3 << endl;
//
//    p1 + p2;//而如果不用函数接受的话 temp此处会先拷贝构造成一个匿名对象 之后匿名对象直接析构 
//
//    cout << "p3.m_A = " << p3.m_A << endl;
//    cout << "p3.m_B = " << p3.m_B << endl << endl;
//}
//
//void test02()
//{
//    Person p1;
//    p1.m_A = 10;
//    p1.m_B = 20;
//
//    Person p3 = p1 + 100; //此时参数变为了整型
//    cout << "p3.m_A = " << p3.m_A << endl;
//    cout << "p3.m_B = " << p3.m_B << endl << endl;
//}
//
//int main()
//{
//    test01();
//    test02();
//    return 0;
//}
//注意1: 内置数据类型的运算符不可以改变 只能改变自定义类型
//注意2: 不要滥用运算符重载







//左移运算符重载
 /*
 
    左移运算符:  <<

    如: cout << "ni shi zhu"<< endl;中的<<即是左移运算符

    有些情况下如:
        Person p; 
        p.m_A = 10; 
        p.m_B = 20;
      如何快速用cout?而不用如此繁琐一个一个按?
    
    实现:
        cout << p << endl; 即可输出其中所有成员

    此处就需要重载左移运算符

 */ 

//class Person
//{
//public:
//  //通常不会用成员函数重载运算符,因为无法实现cout在左侧
//    //void operator<<(cout)   //----->   p.operator(cout) 简化为: p1 << cout;   cout在左边 不对
//    //{
//
//    //}
//
//    friend ostream& operator<<(ostream& cout, Person& p); //使运算符重载函数友元 使其可以访问私有成员
//
//
//    int m_A;
//    int m_B;
//};
//
////通常使用全局函数进行左移运算符重载 
//        //我们最终想实现: cout << p1; 
//        //即 operator<<( cout , p1 );两个参数
//ostream& operator<<( ostream &cout , Person &p)  //cout名为标准输出流对象 
//                                                    //右键查看路径 可见类型为:ostream 输出流
//{
//    cout << "m_A = " << p.m_A << "  m_B = " << p.m_B << endl;
//    return cout;//返回标准输出流对象  返回值类型同样为 ostream&
//
//          //↑并且此处的cout 只不过是函数中用引用起的别名 可以随便改成其他名字 一样可以生效
//}
////注意: 运算符重载如何访问私有权限?
////      使用友元即可
//
//void test01()
//{
//    Person p;
//    p.m_A = 10;
//    p.m_B = 20;
//
//    cout << p;
//    cout << p << endl;//此处无法再<<endl了 因为我们把返回值定为void 而我们需要让返回值也变成其他内容
//                                    //而当返回值改为 ostream& 并且函数返回输出流cout后 就可以继续往后追加
//                                            //实现链式运算
//}
//
//int main()
//{
//    test01();
//
//    return 0;
//}







//递增运算符重载
/*

    递增运算符:  ++

    注意区分前置++和后置++
    int a = 10;
    cout << ++a << endl; //结果会为11
    cout << a << endl; //结果也是11
    cout << a++ << endl;//结束是11
    coout << a << endl;结果为12
    
    //因此我们重载递增运算符时,也要写前置递增和后置递增两种.
*/
//class MyInteger   //自定义整型变量
//{
//
//    friend ostream& operator<<(ostream& cout, const MyInteger& myint);//左移友元
//
//public:
//    MyInteger()
//    {
//        m_Num = 0;//构造初始化为0
//    }
//
//    //重载前置++运算符
//    MyInteger& operator++()
//    {
//        //先++
//        this->m_Num++;
//
//        //后返回
//        return  *this;//返回值应该是MyInteger类型本身 不能++完cout的类型改变了
//    }                       //因此函数返回值为 MyInteger&
//              //*******问题: 此处是否能不返回引用 而是直接返回MyInteger?
//                    //不能! 因为此处返回的是一个新的对象 会进行一次拷贝构造 修改的不是同一个数据了
//
//
//    //重载后置++运算符
//       //但是发现编译器认为我们写的是前置++的重载函数 但我们明明返回值不同 -----返回值不能作为重载条件
//       //那这时候怎么办呢?  ---->  占位参数
//    MyInteger operator++(int)  //int 为占位参数   可以用于区分前置和后置
//    {           // operator++(int) [[[[[编译器会默认为后置递增]]]]]]
//        
//        //先记录当时结果
//        MyInteger temp = *this;
//        
//        //后递增原本
//        m_Num++;
//
//        //最后将记录结果返回
//        return temp;
//    }//注意!!!此处的返回值 是MyInteger 而不是返回引用 因为temp只是一个临时拷贝 等下会被释放
//            //因此此处必须返回值
//private:
//    int m_Num;
//};
//void test01()
//{
//    MyInteger myint;
//    cout << myint << endl;//无法输出 因为这个是自定义对象 我们需要先重载左移运算符才可以
//}
//
////重载左移运算符
//ostream& operator<<(ostream& cout , const MyInteger& myint)//此处第二个参数有所修改
//{
//    cout << myint.m_Num << endl;
//    return cout;
//}
//void test02()
//{
//    MyInteger myint;
//    cout << ++myint <<endl;
//}
//void test03()
//{
//    MyInteger myint;
//    cout << myint++ << endl;
//    cout << myint << endl;
//}
//int main()
//{
//    test01();
//    test02();
//    test03();
//    return 0;
//}







//赋值运算符重载
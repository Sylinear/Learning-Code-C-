#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace::std;


//结构体
    //自定义的数据类型 允许用户存储不同的数据类型


//结构体的定义
//struct Student  //Student为结构体的变量名
//{
//    //成员列表 下列称为结构体的成员
//    string name;    
//    int age;
//    int score;
////};
//}s3,s4;    //也可以在定义结构体时 顺便创建结构体变量
//
//int main()
//{
//    //创建结构体变量的方法
//    struct Student s1;
//    struct Student s2 = { "zhangsan",17,98 };
//    
//    //访问结构体变量成员的方法：
//    //法1 " . "通过变量访问
//    s1.name = "lisi";
//    s1.age = 21;
//    s1.score = 321;
//
//    cout << "姓名：" << s1.name << "\t年龄：" << s1.age << "\t分数" << s1.score << endl;
//
//    //法2 " -> "通过指针访问
//    //结构体指针
//    struct Student* p = &s3;//用指针p指向s3
//    p->name = "wangwu";
//    (&s3)->age = 16;//取地址也可以
//    p->score = 92;
//    //其中在C++中 关键字struct可以省略
//    Student s5;
//    Student* p2 = &s5;
//
//    cout << "姓名：" << s2.name << "\t年龄：" << s2.age << "\t分数" << s2.score << endl;
//    cout << "姓名：" << p->name << "\t年龄：" << p->age << "\t分数" << p->score << endl;
//
//
//    //结构体数组
//    struct Student arr[4] =
//    {
//        {"张三",18,80 },
//        {"李四",19,60 },
//        {"王五",20,70 }
//    };
//    
//    arr[3].name = "赵六";
//    arr[3].age = 80;
//    arr[3].score = 900;
//
//    //遍历结构体数组
//    cout << "\n结构体数组的输出：" << endl;
//    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//    {
//        cout << "姓名：" << arr[i].name << "\t年龄：" << arr[i].age << "\t分数：" << arr[i].score << endl;
//    }
//
//    return 0;
//}





//结构体嵌套结构体
//struct student
//{
//    string name;
//    int age;
//    int score;
//};
//struct teacher
//{
//    int id;
//    string name;
//    int age;
//    struct student stu;//老师会带一个学生 此处是一个字结构体
//};
//
//int main()
//{
//    struct teacher t1;
//    t1.id = 00001;
//    t1.name = "王老师";
//    t1.age = 40;
//    t1.stu = { "zhangsan",18,89 };
//
//    teacher t2;
//    t2.id = 00002;
//    t2.name = "张老师";
//    t2.age = 51;
//    //嵌套访问 两个" . "
//    t2.stu.name = "lisi";
//    t2.stu.age = 18;
//    t2.stu.score = 85;
//
//    teacher t3 = { 00004,"程老师",49,{"wangwu",21,102} };
//    
//    cout << "教师姓名：" << t1.name << "\t教师编号：" << t1.id << "\t教师年龄" 
//        << t1.age << "\t学生姓名" << t1.stu.name << "\t学生分数" << t1.stu.score << endl;
//
//    return 0;
//}





//结构体做函数参数
//struct student
//{
//    string name;
//    int age;
//    int score;
//};
//void printfStudent1(student stu)
//{
//    stu.age = 28;
//    cout << "\n子函数1中 姓名：" << stu.name << "\t学生年龄：" << stu.age << "\t学生分数：" << stu.score << endl;
//}
//
//void printfStudent2(student* p)
//{
//    p->age = 38;
//    cout << "\n子函数2中 姓名：" << p->name << "\t学生年龄：" << p->age << "\t学生分数：" << p->score << endl;
//}
//
//
//int main()
//{
//    student s1 = { "zhangsan",1,98 };
//    cout << "主函数中 姓名：" << s1.name << "\t学生年龄：" << s1.age << "\t学生分数：" << s1.score << endl;
//
//
//    printfStudent1(s1);
//    cout << "函数1后 主函数中 姓名：" << s1.name << "\t学生年龄：" << s1.age << "\t学生分数：" << s1.score << endl;
//    //可见 传值调用 实参的内容并不改变 只是修改了形参
//
//    printfStudent2(&s1);
//    cout << "函数2后 主函数中 姓名：" << s1.name << "\t学生年龄：" << s1.age << "\t学生分数：" << s1.score << endl;
//    //可见 传址调用 间接访问下 才可以修改实参的内容
//
//    //但实际应用中 结构体往往都是用 传址
//        //因为结构体如果占用内存过大 调用会占用大内存 但传址调用永远是4/8个字节 因此结构体用传址调用更好
//
//    return 0;
//}
//
////结构体中const的使用场景
//void printfStudent3(const student* p)//上文说到 结构体通常都会使用传址调用 但如果不想修改结构体中的内容 可以加一个const 来避免误操作
//{
//    //p->age = 38;      //此时如果修改结构体变量 则会有报错
//    cout << "\n子函数2中 姓名：" << p->name << "\t学生年龄：" << p->age << "\t学生分数：" << p->score << endl;
//}




//结构体案例1
/*
**案例描述：**

学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下

设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员

学生的成员有姓名、考试分数，创建数组存放3名老师，通过函数给每个老师及所带的学生赋值

最终打印出老师数据以及老师所带的学生数据。

*/


#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<string>
using namespace std;

#define MAX 1000

//通讯录管理系统

/*

系统需求：

通讯录是一个可以记录亲人、好友信息的工具。

本教程主要利用C++来实现一个通讯录管理系统

系统中需要实现的功能如下：

* 添加联系人：向通讯录中添加新人，信息包括（姓名、性别、年龄、联系电话、家庭住址）最多记录1000人
* 显示联系人：显示通讯录中所有联系人信息
* 删除联系人：按照姓名进行删除指定联系人
* 查找联系人：按照姓名查看指定联系人信息
* 修改联系人：按照姓名重新修改指定联系人
* 清空联系人：清空通讯录中所有信息
* 退出通讯录：退出当前使用的通讯录

*/


//菜单界面
void showMenu()
{
    cout << "\n***************************" << endl;
    cout << "*****  1、添加联系人  *****" << endl;
    cout << "*****  2、显示联系人  *****" << endl;
    cout << "*****  3、删除联系人  *****" << endl;
    cout << "*****  4、查找联系人  *****" << endl;
    cout << "*****  5、修改联系人  *****" << endl;
    cout << "*****  6、清空联系人  *****" << endl;
    cout << "*****  0、退出通讯录  *****" << endl;
    cout << "***************************\n" << endl;
}

//联系人结构体
struct Person   
{
    string name;
    int gender;    // 1男  2女  输入其它内容都不予通过
    int age;
    string phone;
    string address;
};

//通讯录结构体
struct Addressbooks  
{
    Person personArray[MAX];    //最大人数  用标识符来定义 便于后期修改
    int size;
};


//添加联系人
void addPerson(Addressbooks* pabs)
{
    //判断通讯录是否已满，如果满了就不再添加
    if (pabs->size >= MAX)
    {
        cout << "通讯录已满！无法添加！" << endl;
        return;
    }
    else
    {
        //添加具体联系人
        //姓名
        string name;
        cout << "请输入姓名：" << endl;
        cin >> name;
        pabs->personArray[pabs->size].name = name;

        //性别
        cout << "请输入性别：" << endl;
        cout << "1 --- 男" << endl;
        cout << "2 --- 女" << endl;
        int gender = 0;
        while (true)
        {
            cin >> gender;
            if (1 == gender || 2 == gender)
            {
                //输入正确 录入数据 退出循环
                pabs->personArray[pabs->size].gender = gender;
                break;
            }
            else
            {
                //输入错误 重新输入
                cout << "输入错误，请重新输入" << endl;
            }
        }

        //年龄
        cout << "请输入年龄：" << endl;
        cin >> pabs->personArray[pabs->size].age;

        //电话
        cout << "请输入电话：" << endl;
        cin >> pabs->personArray[pabs->size].phone;

        //地址
        cout << "请输入地址" << endl;
        cin >> pabs->personArray[pabs->size].address; 

        //更新通讯录人数
        pabs->size++;

        cout << "--添加成功！--" << endl;
        
        //刷新屏幕
        system("pause");//请按任意键继续
        system("cls");//清屏操作

    }
}



//显示联系人
void showPerson(Addressbooks* p)
{
    //判断通讯录中人数是否为0，如果为0，提示记录为空；如果不为0，显示所有联系人信息
    if (0 == p->size)
    {
        cout << "--通讯录为空！--" << endl;
    }
    else
    {
        for (int i = 0; i < p->size; i++)
        {
            cout << "\t姓名:" << p->personArray[i].name << "\t";
            cout << "\t性别:" << (p->personArray[i].gender == 1 ? "男":"女") << "\t";
                                                      //↑此处用三目运算符 快速判断输出男或女
            cout << "\t年龄:" << p->personArray[i].age << "\t";
            cout << "\t电话:" << p->personArray[i].phone << "\t";
            cout << "\t地址:" << p->personArray[i].address << endl;
        }
    }

    //刷新屏幕
    system("pause");
    system("cls");//clean sreen
}                                                                                 



//检测联系人是否存在
int checkPerson(Addressbooks *p)
{

}


//删除联系人
void delPerson(Addressbooks* p)
{

}

int main()
{
    Addressbooks abs;
        //初始化通讯录中当前的人员个数
    abs.size = 0;


    while(true)
    {
    showMenu();//菜单的调用

    int select = 0;//创建用户选择输入的变量
    cin >> select;

        switch (select)
        {
        case 1:
            //添加联系人
            addPerson(&abs);
            break;
        case 2:
            //显示联系人
            showPerson(&abs);
            break;
        case 3:
            //删除联系人
            delPerson(&abs);
            break;
        case 4:
            //查找联系人
            break;
        case 5:
            //修改联系人
            break;
        case 6:
            //清空联系人
            break;
        case 0:
            //退出通讯录
            cout << "退出通讯录，欢迎下次使用" << endl;
            system("pause");
            return 0;//退出main函数
            break;
        default:
            //非法输入
            break;


    }
    }




    return 0;
}
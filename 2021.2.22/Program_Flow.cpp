#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//程序流程结构
    //最基本：顺序结构  选择结构  循环结构




int main()
{
//选择结构
  //if语句
    //int a = 1;
    //int b = 0;
    //cout << "请输入b的数值：" << endl;
    //cin >> b;
    //if (a > b)
    //{
    //    cout << a << endl;
    //}

    //if (b > a)
    //{
    //    cout << a << endl;
    //}
    //else
    //{
    //    cout << b << endl;
    //}

    //if (b > a)
    //{
    //    cout << "1" << endl;
    //}
    //else if (a = b)
    //{
    //    cout << "2" << endl;
    //}
    //else
    //{
    //    cout << "3" << endl;
    //}

    ////**练习案例：** 三只小猪称体重:有三只小猪ABC，请分别输入三只小猪的体重，并且判断哪只小猪最重？

    //a = 0;
    //b = 0;
    //int c = 0;
    //cout << "请输入A小猪的体重：" << endl;
    //cin >> a;
    //cout << "请输入B小猪的体重：" << endl;
    //cin >> b;
    //cout << "请输入C小猪的体重：" << endl;
    //cin >> c;

    //if (a > b)
    //{
    //    if (a > c)
    //    {
    //        cout << "A小猪最重" << endl;
    //    }
    //    else
    //    {
    //        cout << "C小猪最重" << endl;
    //    }
    //}
    //else
    //{
    //    if (b > c)
    //    {
    //        cout << "B小猪最重" << endl;
    //    }
    //    else
    //    {
    //        cout << "C小猪最重" << endl;
    //    }
    //}




  //三目运算符 (a>b? a : b)
        //由三个表达式组成 若果表达式1为真 执行表达式2 并返回2的结果  否则执行表达式3 并返回三的结果

    // int a = 1;
    // int b = 2;
    // int c = 3;

    //cout << (a > b ? a : b) << endl;
    //cout << (a > b ? b = a + b : c = a + c) << endl;//返回了a+c的值 但并没有实行a+b

    ////三目运算符的返回值可以进行赋值
    //(a > b ? a : b) = 100;
    //被返回的代码 的可以进行赋值 此处返回了b b被赋值为100了






  //switch语句
        //注意：switch表达式类型只能是整型或者字符
            //注意：如果case中没有break 则会继续向下执行 break的作用是退出分支结构
                //switch的缺点是不能判断区间
    //int score = 0;
    //cout << "请给电影打分:" << endl;
    //cin >> score;

    //switch (score)
    //{
    //case 10:
    //case 9:
    //    //使用冒号
    //    cout << "非常好" << endl;
    //    break;
    //case 8:
    //case 7:
    //    cout << "还不错" << endl;
    //    break;
    //case 6:
    //    cout << "合格" << endl;
    //    break;
    //default:
    //    cout << "烂片" << endl;
    //    break;
    //}







//循环结构
  //while
    //在屏幕打印0~9
    //int num = 0;
    //while (num < 10)  //非0为真 0为假
    //{
    //    cout << num << endl;
    //    num++;
    //}

    //猜数字
    //系统随机生成一个1到100之间的数字，玩家进行猜测，如果猜错，提示玩家数字过大或过小，如果猜对恭喜玩家胜利，并且退出游戏

    //1.系统生成随机数
    //生成随机数 使用rand()函数
    //srand((unsigned int)time(NULL)); //srand()函数添加随机数种子 利用系统当前的试卷来生成随机数 防止每次随机数都一样
    //                    //time需要头文件 #include<ctime>
    //int num = rand() % 100 + 1;      //rand()%100 生成0~99随机数 rand是随机生成一个数 取模100后得到0-99的范围 再加一 得到1~100的范围
    //cout << num << endl;
    //
    ////2.玩家猜测
    //int val = 0;
    //while(1)
    //{
    //cin >> val;//玩家输入val的数值


    ////3.判断猜测 
    //    //猜对-->退出 
    //    //猜错-->重新返回第二步
    //if (val > num)
    //{
    //    cout << "猜测过大" << endl;
    //}
    //else if(val < num)
    //{
    //    cout << "猜测过小" << endl;
    //}
    //else if (val == num)
    //{
    //    cout << "恭喜您！猜对了！" << endl;
    //    break;//break退出当前循环
    //}
    //}

  //do while
    //在屏幕中输出0到9        
    //int num = 0;
    //do 
    //{
    //    //cout << num << endl;
    //    //num++;
    //    
    //    cout << num++ << endl;//后置++ 先cout再++ 

    //} while (num < 10);

    //水仙花数
    //int num = 100;

    //do {
    //        int a, b, c = 0;
    //        a = num / 100; //百位
    //        b = num / 10 % 10;//十位
    //        c = num % 10;//个位
    //    if (a*a*a + b*b*b + c*c*c == num)
    //    {
    //        cout << num << endl;
    //    }
    //    num++;
    //} while (num < 1000);


  //for循环
    //for(起始表达式;条件表达式;末尾循环体) { 循环语句; }
    //for (int i = 0; i < 10; i++) //执行顺序：1 2 3 4
    //    //1         3       4
    //{
    //    cout << i << endl;  //2
    //}

    //int i = 0;
    //for (; i < 10;) //括号中的表达式可以不写
    //{
    //    cout << i << endl;
    //}
    //敲桌子
    //从1开始数到数字100， 如果数字个位含有7，或者数字十位含有7，或者该数字是7的倍数，我们打印敲桌子，其余数字直接打印输出。
    //for (int i = 1; i <= 100; i++)
    //{
    //    if (i % 10 == 7 || i / 10 == 7 || i % 7 == 0)
    //    {
    //        cout << "敲桌子" << endl;
    //    }
    //    else
    //    {
    //        cout << i << endl;
    //    }
    //}


  //嵌套循环
    //for (int i = 0; i < 10; i++)
    //{
    //    for (int j = 0; j < 10 ; j++)
    //    {
    //        cout << "*   ";
    //    }
    //    cout << "\n" << endl;
    //}
    ////乘法口诀表
    ////利用嵌套循环，实现九九乘法表
    //for (int i = 1; i < 10; i++)
    //{
    //    for (int j = 1; j < i+1; j++)
    //    {
    //        cout << j << "*" << i << "=" << i * j << "\t";
    //    }
    //    cout << "\n" << endl;
    //}



//跳转语句
  //break    
    //①在switch中使用  ②在循环中使用  ③在嵌套循环中使用可跳出最近的内层循环
    
    
  //continue
    //一旦执行到continue 则跳过本次循环剩余的语句 执行下一次循环
    //for (int i = 0; i < 10; i++)
    //{
    //    if (i > 5 && i < 8)
    //    {
    //        continue;
    //    }
    //    cout << i << endl;
    //}
    
  //goto
    //cout << 0 << endl;
    //goto FLAG;
    //
    //cout << 1 << endl;

    //FLAG2:
    //cout << 3 << endl;

    //FLAG:
    //cout << 3 << endl;
    //goto FLAG2;

    system("pause");
    return 0;
}
    

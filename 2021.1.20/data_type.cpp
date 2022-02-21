#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>

using namespace std;

int main()
{
//数据类型的存在意义 ———— 给变量分配合适的内存空间

//整型
    //用以表示整数
    int a = 10;
    //  ↑ 在一段内存空间放入了数据[10] 并命名为a
    //↑ int 申请的内存为4个字节

  /*整数类型  
    int(整型)           4字节                                           -2^15 ~ 2^15 - 1 （要-1是因为0也占了一位） -32768 ~ 32767
    short(短整型)       2字节                                           -2^31 ~ 2^31 - 1 
    long(长整型)        windos为4字节 linux中32位为4字节 64位为8字节      -2^31 ~ 2^31 - 1 
    long long(长长整型) 8字节                                            -2^63 ~ 2^63 - 1 
  */
    short num1 = 10;
    int num2 = 10;
    long num3 = 10;
    long long num4 = 10;

    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    cout << "num3 = " << num3 << endl;
    cout << "num4 = " << num4 << endl;

    //正常情况下使用int即可




//sizeof
    cout << "short占用空间为：" << sizeof(short) << endl;//写数据类型
    cout << "short占用空间为：" << sizeof(num1) << endl;//或变量 都可以




//实型(浮点型)
    //用以表示浮点型
    //有两种 单精度：float     双精度：double
    // 默认情况下 输出一个小数 会显示出六位有效数字
    // float  4字节   7位有效数字
    // double 8字节   15~16位有效数字
    
    float f1 = 3.1415926f;//这个f可以不写 但一般写上f 来表示它是单精度浮点型
                        //因为不写f时 编译器默认将小数认为是双精度 此时写float f1 = 3.14会增加一步强制类型转换为单精度
    cout << "f1 = " << f1 << endl;
    
    double d1 = 3.1415926;
    cout << "d1 = " << d1 << endl;
    //但是结果都只显示了6位有效数字 如何显示更多位呢？ 后续会学到 
    //但此时f1已经涉及到精度丢失的问题！

    //科学计数法表示小数
    float f2 = 3e2;
        // 若e后面是正数 则为：3× 10^2；
    cout << "f2 = " << f2 << endl;//结果确实为300
    float f3 = 3e-2;
        // 若e后面是负数 则为：3× 0.1^2  (也就是10^-2)
    cout << "f3 = " << f3 << endl;//结果确实为0.03






//字符型
        //1.用单引号将字符括起来 'a'
        //2.单引号内只能有一个字符 不可以有多个字符  'b'√  'ab'×
    //占用1个字节内存
    //储存字符串时 并不是将字符放到内存 而是将对应的ASCII编码放到存储单元
        //如 a对应97 b对应98 c对应99  当然 计算机储存的是二进制而非十进制
    char ch = 'a';
    cout << ch << endl;
    cout << sizeof(char) << endl;

    cout << (int)ch << endl;//强转为int类型输出 可以查看其ASCII码值
    
    ch = 102;
    cout << ch << endl;//也可以直接用ASCII码给字符型赋值

    //常见字母的ASCII码值要记住：A-65(0x41)  a-97(0x61)






//转义字符
    //有一些ASCII码值无法直接显示出来 如：
        //\a  \b  \f  \n  \r  \t                \v      \\      '       "    \?  \0    \ddd    \xhh 
        //警报 退格 换页 换行 回车 水平制表(TAB)  垂直指标 反斜线 单引号 双引号 问号 数字0 8进制数 16进制数 

    //以几个经典为例子：
    //换行符\n
    cout << "hello world" << endl;
    cout << "hello world\n"; //效果相等
    
    //反斜杠 \\ 
    //cout<<"\"<<endl;//报错了
    cout<<"\\"<<endl; //要这样才能输出 因为单个\ 他会以为你将要输入转义字符 而将你的\"当作无法处理的转移字符
    cout << "\\//" << endl;
    cout << "\\\\//" << endl; //一个\\只能对应一个\ 若要输出两个\ 则需要两组\\

    //水平制表符 \t
    cout << "aa\thelloworld" << endl;
    cout << "aaaaaa\thelloworld" << endl;   // \t是从最左端开始补充空格到下一个【8宽度】的位置 如果你前面的字符多 那补充的空格就少
    cout << "aaaaaaa\tworld" << endl;   //若前面已有7个字符 则只补充一个空格
    cout << "aaaaaaaa\tworld" << endl;  //若本身就已经到了8个字符 则跳到下一个8宽度位置
    cout << "aaaaaaa\t\tworld" << endl; //也可以多个\t叠加使用
    //善用水平制表符\t 可以使得打印出来的数据更整齐美观
    cout << "姓名\t年龄\t地址\t" << endl;
    cout << "张三\t12\t北京" << endl;
    cout << "李四\t48\t广州" << endl;







//字符串
    //表示一串字符
   //两种风格
    //1.C风格：  
    char str1[] = "hello";
    cout << str1 << endl;
        //C语言风格必须在变量名后加[] 表示字符的数组
        //注意：字符串必须用双引号括起来

    //2.C++风格：
    string str2 = "world";
    cout << str2 << endl;
        //注意：在旧版中使用C++字符串 需要引入头文件#include<string> 但在VS2019版本中不需







//布尔类型bool
    //表示真\假的值
    // bool类型只有两个值：
        //true--真(本质为1)
        //false--假(本质为0)
    //bool类型只占用一个字节

    bool flag = true;
    cout << flag << endl; //数值就是1

    flag = false;
    cout << flag << endl; //数值就是0

    cout << "size of bool = " << sizeof(bool) << endl;







//数据的输入
    //用于从键盘获取数据
        //关键字：cin


    //整型
    int a1 = 0;
    cout << "请输入整型变量：" << endl;
    cin >> a1;   //cin流入到a中
    cout << "刚刚输入的数值是：" << a1 << endl;
    cout << "ASCII中对应的字母是："<<(char)a1 << endl;//强转后输出了字符'a'

    //浮点型
    float f = 3.14f;//后置f表示他是float类型 否则默认为double类型
    cout << "请给浮点型变量f赋值：" << endl;
    cin >> f;
    cout << "浮点型f = " << f << endl;

    //字符型
    char ch1 = 'a';
    cout << "请给字符变量ch1赋值" << endl;
    cin >> ch1;
    cout << "字符变量ch = " << ch1 << endl;
    cout << "字符变量ch的ASCII码值为：" << (int)ch1 << endl;
    
    //字符串型
    string str3 = "hello";
    cout << "请输入一个字符串：" << endl;
    cin >> str3;
    cout << "刚刚输入的字符串为：" << str3 << endl;
        记得包含头文件 虽然VS2019没有报错

    //布尔类型
    bool flag1 = false;
    cout << "请给bool类型的flag1赋值：" << endl;
    cin >> flag1;
    cout << "布尔类型flag1 = " << flag1 << endl;
        //要输入1或0 不能输入true或flase
        //注意：布尔类型只要输入非0 都表示为真
    system("pause");
    return 0;
}

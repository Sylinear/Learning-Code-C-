#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>

using namespace std;

int main()
{
//�������͵Ĵ������� �������� ������������ʵ��ڴ�ռ�

//����
    //���Ա�ʾ����
    int a = 10;
    //  �� ��һ���ڴ�ռ����������[10] ������Ϊa
    //�� int ������ڴ�Ϊ4���ֽ�

  /*��������  
    int(����)           4�ֽ�                                           -2^15 ~ 2^15 - 1 ��Ҫ-1����Ϊ0Ҳռ��һλ�� -32768 ~ 32767
    short(������)       2�ֽ�                                           -2^31 ~ 2^31 - 1 
    long(������)        windosΪ4�ֽ� linux��32λΪ4�ֽ� 64λΪ8�ֽ�      -2^31 ~ 2^31 - 1 
    long long(��������) 8�ֽ�                                            -2^63 ~ 2^63 - 1 
  */
    short num1 = 10;
    int num2 = 10;
    long num3 = 10;
    long long num4 = 10;

    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    cout << "num3 = " << num3 << endl;
    cout << "num4 = " << num4 << endl;

    //���������ʹ��int����




//sizeof
    cout << "shortռ�ÿռ�Ϊ��" << sizeof(short) << endl;//д��������
    cout << "shortռ�ÿռ�Ϊ��" << sizeof(num1) << endl;//����� ������




//ʵ��(������)
    //���Ա�ʾ������
    //������ �����ȣ�float     ˫���ȣ�double
    // Ĭ������� ���һ��С�� ����ʾ����λ��Ч����
    // float  4�ֽ�   7λ��Ч����
    // double 8�ֽ�   15~16λ��Ч����
    
    float f1 = 3.1415926f;//���f���Բ�д ��һ��д��f ����ʾ���ǵ����ȸ�����
                        //��Ϊ��дfʱ ������Ĭ�Ͻ�С����Ϊ��˫���� ��ʱдfloat f1 = 3.14������һ��ǿ������ת��Ϊ������
    cout << "f1 = " << f1 << endl;
    
    double d1 = 3.1415926;
    cout << "d1 = " << d1 << endl;
    //���ǽ����ֻ��ʾ��6λ��Ч���� �����ʾ����λ�أ� ������ѧ�� 
    //����ʱf1�Ѿ��漰�����ȶ�ʧ�����⣡

    //��ѧ��������ʾС��
    float f2 = 3e2;
        // ��e���������� ��Ϊ��3�� 10^2��
    cout << "f2 = " << f2 << endl;//���ȷʵΪ300
    float f3 = 3e-2;
        // ��e�����Ǹ��� ��Ϊ��3�� 0.1^2  (Ҳ����10^-2)
    cout << "f3 = " << f3 << endl;//���ȷʵΪ0.03






//�ַ���
        //1.�õ����Ž��ַ������� 'a'
        //2.��������ֻ����һ���ַ� �������ж���ַ�  'b'��  'ab'��
    //ռ��1���ֽ��ڴ�
    //�����ַ���ʱ �����ǽ��ַ��ŵ��ڴ� ���ǽ���Ӧ��ASCII����ŵ��洢��Ԫ
        //�� a��Ӧ97 b��Ӧ98 c��Ӧ99  ��Ȼ �����������Ƕ����ƶ���ʮ����
    char ch = 'a';
    cout << ch << endl;
    cout << sizeof(char) << endl;

    cout << (int)ch << endl;//ǿתΪint������� ���Բ鿴��ASCII��ֵ
    
    ch = 102;
    cout << ch << endl;//Ҳ����ֱ����ASCII����ַ��͸�ֵ

    //������ĸ��ASCII��ֵҪ��ס��A-65(0x41)  a-97(0x61)






//ת���ַ�
    //��һЩASCII��ֵ�޷�ֱ����ʾ���� �磺
        //\a  \b  \f  \n  \r  \t                \v      \\      '       "    \?  \0    \ddd    \xhh 
        //���� �˸� ��ҳ ���� �س� ˮƽ�Ʊ�(TAB)  ��ֱָ�� ��б�� ������ ˫���� �ʺ� ����0 8������ 16������ 

    //�Լ�������Ϊ���ӣ�
    //���з�\n
    cout << "hello world" << endl;
    cout << "hello world\n"; //Ч�����
    
    //��б�� \\ 
    //cout<<"\"<<endl;//������
    cout<<"\\"<<endl; //Ҫ����������� ��Ϊ����\ ������Ϊ�㽫Ҫ����ת���ַ� �������\"�����޷�������ת���ַ�
    cout << "\\//" << endl;
    cout << "\\\\//" << endl; //һ��\\ֻ�ܶ�Ӧһ��\ ��Ҫ�������\ ����Ҫ����\\

    //ˮƽ�Ʊ��� \t
    cout << "aa\thelloworld" << endl;
    cout << "aaaaaa\thelloworld" << endl;   // \t�Ǵ�����˿�ʼ����ո���һ����8���ȡ���λ�� �����ǰ����ַ��� �ǲ���Ŀո����
    cout << "aaaaaaa\tworld" << endl;   //��ǰ������7���ַ� ��ֻ����һ���ո�
    cout << "aaaaaaaa\tworld" << endl;  //���������Ѿ�����8���ַ� ��������һ��8����λ��
    cout << "aaaaaaa\t\tworld" << endl; //Ҳ���Զ��\t����ʹ��
    //����ˮƽ�Ʊ���\t ����ʹ�ô�ӡ���������ݸ���������
    cout << "����\t����\t��ַ\t" << endl;
    cout << "����\t12\t����" << endl;
    cout << "����\t48\t����" << endl;







//�ַ���
    //��ʾһ���ַ�
   //���ַ��
    //1.C���  
    char str1[] = "hello";
    cout << str1 << endl;
        //C���Է������ڱ��������[] ��ʾ�ַ�������
        //ע�⣺�ַ���������˫����������

    //2.C++���
    string str2 = "world";
    cout << str2 << endl;
        //ע�⣺�ھɰ���ʹ��C++�ַ��� ��Ҫ����ͷ�ļ�#include<string> ����VS2019�汾�в���







//��������bool
    //��ʾ��\�ٵ�ֵ
    // bool����ֻ������ֵ��
        //true--��(����Ϊ1)
        //false--��(����Ϊ0)
    //bool����ֻռ��һ���ֽ�

    bool flag = true;
    cout << flag << endl; //��ֵ����1

    flag = false;
    cout << flag << endl; //��ֵ����0

    cout << "size of bool = " << sizeof(bool) << endl;







//���ݵ�����
    //���ڴӼ��̻�ȡ����
        //�ؼ��֣�cin


    //����
    int a1 = 0;
    cout << "���������ͱ�����" << endl;
    cin >> a1;   //cin���뵽a��
    cout << "�ո��������ֵ�ǣ�" << a1 << endl;
    cout << "ASCII�ж�Ӧ����ĸ�ǣ�"<<(char)a1 << endl;//ǿת��������ַ�'a'

    //������
    float f = 3.14f;//����f��ʾ����float���� ����Ĭ��Ϊdouble����
    cout << "��������ͱ���f��ֵ��" << endl;
    cin >> f;
    cout << "������f = " << f << endl;

    //�ַ���
    char ch1 = 'a';
    cout << "����ַ�����ch1��ֵ" << endl;
    cin >> ch1;
    cout << "�ַ�����ch = " << ch1 << endl;
    cout << "�ַ�����ch��ASCII��ֵΪ��" << (int)ch1 << endl;
    
    //�ַ�����
    string str3 = "hello";
    cout << "������һ���ַ�����" << endl;
    cin >> str3;
    cout << "�ո�������ַ���Ϊ��" << str3 << endl;
        �ǵð���ͷ�ļ� ��ȻVS2019û�б���

    //��������
    bool flag1 = false;
    cout << "���bool���͵�flag1��ֵ��" << endl;
    cin >> flag1;
    cout << "��������flag1 = " << flag1 << endl;
        //Ҫ����1��0 ��������true��flase
        //ע�⣺��������ֻҪ�����0 ����ʾΪ��
    system("pause");
    return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;


/*
    �̳������������������֮һ

    ��Щ������֮��������Ĺ�ϵ

    ���磺 С������   ���� è ��    ���ӷ�è ��żè ��˹è ������è  ����ʿ�� ���� �»������ڹ�

    
        ���Ƿ��֣�������Щ��ʱ���¼���ĳ�Ա����ӵ����һ���Ĺ��ԣ������Լ������ԡ�

    ���ʱ�����ǾͿ��Կ������ü̳еļ����������ظ�����
*/

//�̳еĻ����﷨
    //�кܶ���վ ���й�����ͷ�����ײ�������б� ֻ���������ݲ�ͬ������������ͨд���ͼ̳�д�������𡣿�һ����ô������塣

//��ͨʵ��

//class Java
//{
//public:
//    void header()
//    {
//        cout << "��ҳ�������Ρ���¼��ע��....(����ͷ��)" << endl;
//    }
//    void footer()
//    {
//        cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
//    }
//    void left()
//    {
//        cout << "Java��Python��C++��...�����������б�" << endl;
//    }
//    void content()
//    {
//        cout << "Javaѧ����Ƶ" << endl;
//    }
//};
//class Python
//{
//public:
//    void header()
//    {
//        cout << "��ҳ�������Ρ���¼��ע��....(����ͷ��)" << endl;
//    }
//    void footer()
//    {
//        cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
//    }
//    void left()
//    {
//        cout << "Java��Python��C++��...�����������б�" << endl;
//    }
//    void content()
//    {
//        cout << "Pythonѧ����Ƶ" << endl;
//    }
//};
//class Cpp
//{
//public:
//    void header()
//    {
//        cout << "��ҳ�������Ρ���¼��ע��....(����ͷ��)" << endl;
//    }
//    void footer()
//    {
//        cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
//    }
//    void left()
//    {
//        cout << "Java��Python��C++��...�����������б�" << endl;
//    }
//    void content()
//    {
//        cout << "Cppѧ����Ƶ" << endl;
//    }
//};
//void test01()
//{
//    cout << "Javaѧϰҳ������:" << endl;
//    Java ja;
//    ja.header();
//    ja.footer();
//    ja.left();
//    ja.content();
//
//    cout << "------------------" << endl;
//    cout << "Pythonѧϰҳ������:" << endl;
//    Python pt;
//    pt.header();
//    pt.footer();
//    pt.left();
//    pt.content();
//
//    cout << "------------------" << endl;
//    cout << "C++ѧϰҳ������:" << endl;
//    Cpp cpp;
//    cpp.header();
//    cpp.footer();
//    cpp.left();
//    cpp.content();
//
//    //�ɼ������������д������ظ�����  ÿ�ζ����¶���ʵ��������ʱ���д���������д
//}

//�̳�д��
    //����ҳ����
//class BasePage
//{
//public:
//    void header()
//    {
//        cout << "��ҳ�������Ρ���¼��ע��....(����ͷ��)" << endl;
//    }
//    void footer()
//    {
//        cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
//    }
//    void left()
//    {
//        cout << "Java��Python��C++��...�����������б�" << endl;
//    }
//};
//class Java : public BasePage                    //�̳��﷨   class ������  :  �̳з�ʽ  ������
//{
//public:                                         //���и����е����г�Ա�����ͳ�Ա���� ���඼��ӵ��
//    void content()                                      //������ֻ��Ҫ���������еĳ�Ա����
//    {
//        cout << "Javaѧ����Ƶ" << endl;
//    }
//};
//class Python : public BasePage
//{
//public:
//    void content()
//    {
//        cout << "Pythonѧ����Ƶ" << endl;
//    }
//};
//class Cpp : public BasePage
//{
//public:
//    void content()
//    {
//        cout << "C++ѧ����Ƶ" << endl;
//    }
//};
//void test02()                                   //ʵ���� ���ոյ���д��һ���� û������
//{
//    cout << "Javaѧϰҳ������:" << endl;
//    Java ja;
//    ja.header();
//    ja.footer();
//    ja.left();
//    ja.content();
//
//    cout << "------------------" << endl;
//    cout << "Pythonѧϰҳ������:" << endl;
//    Python pt;
//    pt.header();
//    pt.footer();
//    pt.left();
//    pt.content();
//
//    cout << "------------------" << endl;
//    cout << "C++ѧϰҳ������:" << endl;
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
//�̳еĺô�:   �����ظ��Ĵ���    ��ʵ�ʿ����С������˴���������Ĺ��̣���WINDOWS�ײ�ȣ��������̳�
    //�̳��﷨   class ������  :  �̳з�ʽ  ������
            //���и����е����г�Ա�����ͳ�Ա���� ���඼��ӵ��
                //������ֻ��Ҫ���������еĳ�Ա����
        //���ο�ֻ�����˹����̳� public  �����������⼸�ּ̳з�ʽ
    //����  Ҳ��Ϊ�������ࡿ   ���� Ҳ��Ϊ�����ࡿ   ��ͬ�Ŀα��в�ͬ�Ľз� ҲҪ��ʶ

//**�������еĳ�Ա���������󲿷�** ��
        //��һ���Ǵӻ���̳й����ģ���һ�����Լ����ӵĳ�Ա��
        //�ӻ���̳й������ı����乲�ԣ��������ĳ�Ա����������ԡ�






//�̳з�ʽ
/*
  **�̳з�ʽһ�������֣�**

         �����̳�
         �����̳�
         ˽�м̳�
*/
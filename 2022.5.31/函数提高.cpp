#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//�������



////����Ĭ�ϲ���
//    //c++�� �������β��б��� �β��ǿ�����Ĭ��ֵ��
//    //�﷨������ֵ����  ������  (���� = Ĭ��ֵ){}
//int func(int a, int b = 10, int c = 10)
//{
//    return a + b + c;
//}
//
////��ע�⡿��
//    //*1.��ĳ��������Ĭ��ֵ����Ӹò��������ÿ��������������Ĭ��ֵ��
//    //*2.�����������ʱ��Ĭ��ֵ������ʵ��ʱ�Ͳ�����Ĭ�ϲ���
//
//int func2(int a, int b = 10, int c = 10);//�������� �� �������岻��ͬʱ��Ĭ�ϲ��� 
//                                            //������ʱ��Ĭ��ֵ����������ʱ�Ͳ�����Ĭ�ϲ�����
//                                                //��������붨���� ֻ����һ����Ĭ�ϲ�����
//
//int func2(int a, int b = 10, int c = 10)//�˴���û�б�����������ʱ������
//{
//    return a + b + c;
//}
//
////int func1(int a, int b = 10,int c)//�˴�cû��Ĭ�ϲ��� ����������
////{
////    return a + b + c;
////}
//
//int main()
//{
//    cout << func(10) << endl;//���û�д��룬��ʹ��Ĭ��ֵ
//
//    cout << func(10,20) << endl;//����Լ����������ˣ������Լ�������
//    
//    cout << func(10,20,30) << endl;
//
//    cout << func2(10) << endl;//����ʱ���������ˣ���Ϊfunc2��Ĭ�ϲ����ض���
//
//    return 0;
//}



////����ռλ����
//    //C++�к������β��б��������ռλ������������ռλ�����ú���ʱ�������λ��
//    //�﷨������ֵ���� ������(��������){}
//                             //�� ����Ҫд���� ����д������
//
//void func(int a ,int)//�˴��ڶ���int����ռλ�õ�
//{
//    cout << "this is func" << endl;
//}
////1.ռλ����Ŀǰ���ǻ��޷�ʹ��
////2.ռλ������������Ĭ�ϲ���
//void func(int a, int = 10)
//{
//    cout << "this is func" << endl;
//}
//
//int main()
//{
//    func(10, 6);
//    func(10);//���� ��������
//    return 0;
//}
////�α�˵�������ֽ׶κ�����ռλ�����������岻�󣬵��Ǻ���Ŀγ��л��õ��ü���



////��������
//    //��C++�� ������������ͬ����߸�����
//    //�������ص�������
//        //1. ͬһ����������
//        //2. ����������ͬ
//        //3. �������������Ͳ�ͬ ���� ����������ͬ ���� ����˳��ͬ
//        //4.*****ע�� ����ֵ��ͬ��������Ϊ����������������******
//int func()
//{
//    cout << "�˴���func1" << endl;
//    return 0;
//}
//int func(int a)
//{
//    cout << "�˴���func2" << endl;
//    return 0;
//}
//int func(int a, int b)
//{
//    cout << "�˴���func3" << endl;
//    return 0;
//}
//int func(double a, int b)
//{
//    cout << "�˴���func4" << endl;
//    return 0;
//}
//int func(int a, double b)
//{
//    cout << "�˴���func5" << endl;
//    return 0;
//}
//int func(double a, double b)
//{
//    cout << "�˴���func6" << endl;
//    return 0;
//}
//int func(float a, float b)
//{
//    cout << "�˴���func7" << endl;
//    return 0;
//}
////void func()//������ ��Ϊ����ֵ��ͬ�������㺯�����ص�����
////{
////    cout << "�˴���func4" << endl;
////}
//
//int main()
//{
//    func();
//    func(10);
//    func(10,20);
//    func(3.14, 20);
//    func(50, 3.14);
//    func(3.14, 1.5);//С��Ĭ����double ���û�н���func7
//
//    return 0;
//}




//��������ע������
  //1��������Ϊ��������
void func(int& a) //���ò���
{
    cout << "func(int &a)����" << endl;
}

void func(const int& a)//��һ��const �ܷ񴥷�
{
    cout << "func(int const &a)����" << endl;
}
//const int&  ��  int& �������Ͳ�ͬ ���Դ�����������

void func1(int a)
{
    cout << "func(int a)����" << endl;
}

void func1(const int a)
{
    cout << "func(const int a)����" << endl;
}
//��int �� const int ���ܴ�����������

  //2���������� �� Ĭ�ϲ���
void func2(int a)
{
    cout << "func2(int a)�ĵ���" << endl;
}
//void func2(int a = 10)
//{
//    cout << "func2(int a = 10)�ĵ���" << endl;
//}
void func2(int a,int b =10)
{
    cout << "func2(int a,int b =10)�ĵ���" << endl;
}
int main()
{
    int a = 10;
    func(a);//������û�м�const���Ǹ�

    const int b = 10;
    func(b);//�����˼�const���Ǹ�

    func(10);//������const���Ǹ�

        //��⣺��Ϊ����-��ζ�ſɶ���д  ��const-��ζ��ֻ�ɶ�����д
                //��� a������û�м�const���Ǹ�    ��const���� �� ���� �����˼�const���Ǹ�
                        //int &a = 10;����ǲ��Ϸ��Ĵ��� ��Ϊ�����Ǹ��������� ������ջ�����߶����ȺϷ����ڴ�ռ�
                                //��const int&a = 10;�ǺϷ��� ����ǡ��������á� ����������Ҳ�޷��޸�


    func2();//Ĭ�ϲ��������ܴ������أ����ڲ�����ͬ����������Ĭ�ϲ����ͺ�������һ�����
    func2(10, 20);

    return 0;
}
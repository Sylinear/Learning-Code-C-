#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace::std;


//�ṹ��
    //�Զ������������ �����û��洢��ͬ����������


//�ṹ��Ķ���
//struct Student  //StudentΪ�ṹ��ı�����
//{
//    //��Ա�б� ���г�Ϊ�ṹ��ĳ�Ա
//    string name;    
//    int age;
//    int score;
////};
//}s3,s4;    //Ҳ�����ڶ���ṹ��ʱ ˳�㴴���ṹ�����
//
//int main()
//{
//    //�����ṹ������ķ���
//    struct Student s1;
//    struct Student s2 = { "zhangsan",17,98 };
//    
//    //���ʽṹ�������Ա�ķ�����
//    //��1 " . "ͨ����������
//    s1.name = "lisi";
//    s1.age = 21;
//    s1.score = 321;
//
//    cout << "������" << s1.name << "\t���䣺" << s1.age << "\t����" << s1.score << endl;
//
//    //��2 " -> "ͨ��ָ�����
//    //�ṹ��ָ��
//    struct Student* p = &s3;//��ָ��pָ��s3
//    p->name = "wangwu";
//    (&s3)->age = 16;//ȡ��ַҲ����
//    p->score = 92;
//    //������C++�� �ؼ���struct����ʡ��
//    Student s5;
//    Student* p2 = &s5;
//
//    cout << "������" << s2.name << "\t���䣺" << s2.age << "\t����" << s2.score << endl;
//    cout << "������" << p->name << "\t���䣺" << p->age << "\t����" << p->score << endl;
//
//
//    //�ṹ������
//    struct Student arr[4] =
//    {
//        {"����",18,80 },
//        {"����",19,60 },
//        {"����",20,70 }
//    };
//    
//    arr[3].name = "����";
//    arr[3].age = 80;
//    arr[3].score = 900;
//
//    //�����ṹ������
//    cout << "\n�ṹ������������" << endl;
//    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//    {
//        cout << "������" << arr[i].name << "\t���䣺" << arr[i].age << "\t������" << arr[i].score << endl;
//    }
//
//    return 0;
//}





//�ṹ��Ƕ�׽ṹ��
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
//    struct student stu;//��ʦ���һ��ѧ�� �˴���һ���ֽṹ��
//};
//
//int main()
//{
//    struct teacher t1;
//    t1.id = 00001;
//    t1.name = "����ʦ";
//    t1.age = 40;
//    t1.stu = { "zhangsan",18,89 };
//
//    teacher t2;
//    t2.id = 00002;
//    t2.name = "����ʦ";
//    t2.age = 51;
//    //Ƕ�׷��� ����" . "
//    t2.stu.name = "lisi";
//    t2.stu.age = 18;
//    t2.stu.score = 85;
//
//    teacher t3 = { 00004,"����ʦ",49,{"wangwu",21,102} };
//    
//    cout << "��ʦ������" << t1.name << "\t��ʦ��ţ�" << t1.id << "\t��ʦ����" 
//        << t1.age << "\tѧ������" << t1.stu.name << "\tѧ������" << t1.stu.score << endl;
//
//    return 0;
//}





//�ṹ������������
//struct student
//{
//    string name;
//    int age;
//    int score;
//};
//void printfStudent1(student stu)
//{
//    stu.age = 28;
//    cout << "\n�Ӻ���1�� ������" << stu.name << "\tѧ�����䣺" << stu.age << "\tѧ��������" << stu.score << endl;
//}
//
//void printfStudent2(student* p)
//{
//    p->age = 38;
//    cout << "\n�Ӻ���2�� ������" << p->name << "\tѧ�����䣺" << p->age << "\tѧ��������" << p->score << endl;
//}
//
//
//int main()
//{
//    student s1 = { "zhangsan",1,98 };
//    cout << "�������� ������" << s1.name << "\tѧ�����䣺" << s1.age << "\tѧ��������" << s1.score << endl;
//
//
//    printfStudent1(s1);
//    cout << "����1�� �������� ������" << s1.name << "\tѧ�����䣺" << s1.age << "\tѧ��������" << s1.score << endl;
//    //�ɼ� ��ֵ���� ʵ�ε����ݲ����ı� ֻ���޸����β�
//
//    printfStudent2(&s1);
//    cout << "����2�� �������� ������" << s1.name << "\tѧ�����䣺" << s1.age << "\tѧ��������" << s1.score << endl;
//    //�ɼ� ��ַ���� ��ӷ����� �ſ����޸�ʵ�ε�����
//
//    //��ʵ��Ӧ���� �ṹ������������ ��ַ
//        //��Ϊ�ṹ�����ռ���ڴ���� ���û�ռ�ô��ڴ� ����ַ������Զ��4/8���ֽ� ��˽ṹ���ô�ַ���ø���
//
//    return 0;
//}
//
////�ṹ����const��ʹ�ó���
//void printfStudent3(const student* p)//����˵�� �ṹ��ͨ������ʹ�ô�ַ���� ����������޸Ľṹ���е����� ���Լ�һ��const �����������
//{
//    //p->age = 38;      //��ʱ����޸Ľṹ����� ����б���
//    cout << "\n�Ӻ���2�� ������" << p->name << "\tѧ�����䣺" << p->age << "\tѧ��������" << p->score << endl;
//}




//�ṹ�尸��1
/*
**����������**

ѧУ������������Ŀ��ÿ����ʦ����5��ѧ�����ܹ���3����ʦ����������

���ѧ������ʦ�Ľṹ�壬��������ʦ�Ľṹ���У�����ʦ������һ�����5��ѧ����������Ϊ��Ա

ѧ���ĳ�Ա�����������Է���������������3����ʦ��ͨ��������ÿ����ʦ��������ѧ����ֵ

���մ�ӡ����ʦ�����Լ���ʦ������ѧ�����ݡ�

*/


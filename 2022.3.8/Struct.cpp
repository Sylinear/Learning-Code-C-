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
//struct Stu
//{
//    string name;
//    int score;
//};
//struct Teacher
//{
//    string name;
//    Stu arr[5];
//};
//
//void GiveTeacher(struct Teacher t_arr[] , int sz)//�˴�����������(��Ԫ�ص�ַ) ����Ǵ�ַ���� �����޸�
//{
//    for (int i = 0; i < sz; i++)
//    {
//        string nameSeed = "ABCDEFGHIKLMNOPQRSTUVWXZY";
//        t_arr[i].name = "��ʦ";
//        t_arr[i].name += nameSeed[i];//��C++�� �����ַ�������ֱ��������� ʵ��strcat��Ч��
//
//        
//        string sName = "ѧ��";
//        for (int j = 0; j < 5 ; j++)
//        {
//            t_arr[i].arr[j].name = sName + nameSeed[5*i + j];//��C++�� �����ַ�������ֱ��������� ʵ��strcat��Ч��
//            t_arr[i].arr[j].score = rand() % 61 + 40;//Ϊ�˱����������40 ����������Χ0~60 ��+40
//        }
//    }
//}
//
//void PrintTeacher(struct Teacher t_arr[], int sz)
//{
//    for (int i = 0; i < sz; i++)
//    {
//        cout << "\n��" << i+1 << "����ʦ����Ϣ��" << endl;
//        cout << "\t��ʦ������" << t_arr[i].name << endl;
//        for (int j = 0; j < 5; j++)
//        {
//            cout << "\t\t��" << j << "��ѧ����������" << t_arr[i].arr[j].name << "\t������" << t_arr[i].arr[j].score << endl;
//        }
//    }
//}
//int main()
//{
//    srand((unsigned int)time(NULL));//���������
//    Teacher t_arr[3];//��ʦ����
//
//    GiveTeacher(t_arr, (sizeof(t_arr) / sizeof(t_arr[0])));//��������
//    PrintTeacher(t_arr, (sizeof(t_arr) / sizeof(t_arr[0])));//��ӡ����
//
//    return 0;
//}



//�ṹ�尸��2
/*
**����������**

���һ��Ӣ�۵Ľṹ�壬������Ա���������䣬�Ա�;�����ṹ�����飬�����д��5��Ӣ�ۡ�

ͨ��ð��������㷨���������е�Ӣ�۰���������������������մ�ӡ�����Ľ����

����Ӣ����Ϣ���£�
        {"����",23,"��"},
        {"����",22,"��"},
        {"�ŷ�",20,"��"},
        {"����",21,"��"},
        {"����",19,"Ů"},
*/

struct hero
{
    string name;
    int age;
    string gender;
};
int main()
{
    hero arr[5] =
    {
        {"����",23,"��"},
        {"����",22,"��"},
        {"�ŷ�",20,"��"},
        {"����",21,"��"},
        {"����",19,"Ů"},
    };
    int sz = sizeof(arr) / sizeof(arr[0]);

    //��ӡ����ȷ����Ϣ
    cout << "Ӣ�۵���Ϣ��" << endl;
    for (int i = 0; i < sz; i++)
    {
        cout << "��" << i + 1 << "��Ӣ�ۣ�" << endl;
        cout << "\t����:" << arr[i].name << "\t����:" << arr[i].age << "\t�Ա�" << arr[i].gender << endl;
    }

    for (int i = 0; i < sz - 1; i++)
    {
        //һ�����Ԫ�� ���������Ҫ����(���һ��Ԫ�ز���)
        for (int j = 0; j < sz - 1 - i; j++)
        {
            //ÿһ�� Ҫ���еĽ���(��һ�� ��Ҫ�Ƚ�4��) ����ÿһ�� �����������μ���һ��
            if (arr[j].age > arr[j + 1].age)
            {
                hero temp = arr[j];     //��C++�� ����ֱ�Ӵ����ṹ��������н��� ����һһ����
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "\n-----������-----" << endl;

    //��ӡ������
    cout << "\nӢ�۵���Ϣ��" << endl;
    for (int i = 0; i < sz; i++)
    {
        cout << "��" << i + 1 << "��Ӣ�ۣ�" << endl;
        cout << "\t����:" << arr[i].name << "\t����:" << arr[i].age << "\t�Ա�" << arr[i].gender << endl;
    }

    return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

/*
��Ԫ

���е����Ժͺ����в�ͬ�ķ���Ȩ�� ��public private protected��

public��ͬ����,���п��˶����Է���.��private��ͬ����,ֻ���Լ����Խ�ȥ.

�������������һЩ���ۻ��ѽ�����,Ҳ�ǿ��Ե�.

    ��˽������ ���������������һЩ������������з���,��Ҫ�õ��ľ��� [��Ԫ]


    ��Ԫ:��һ������������ ������һ�����е�˽�г�Ա

    �ؼ���:firend

��Ԫ������ʵ��:
    ȫ�ֺ�������Ԫ
    ������Ԫ
    ��Ա��������Ԫ
*/





//ȫ�ֺ�������Ԫ
//#include<string>
////��������
//class Building
//{
//
//    friend void goodGay01(Building* building);//��Ԫ����
//        //��֪������goodGay01Ϊ�������Ԫ 
//            //ֻ��һ������ �������public��������
//
//public:
//    Building()  //Ĭ�Ϲ���
//    {
//    m_SittingRoom = "����";
//    m_BedRoom = "����";
//    }
//public:
//    string m_SittingRoom;//���� ����
//private:
//    string m_BedRoom;//˽�� ����
//};
//
////ȫ�ֺ��� ��������е�˽�г�Ա
//void goodGay(Building *building)//����ָ�봫�λ������ô�ַ������
//{
//    cout << "�û���ȫ�ֺ��� ���ڷ���:" << building->m_SittingRoom << endl;
//        //�ɼ� ���������������ǿ����������ʵ�
//    //cout << "�û���ȫ�ֺ��� ���ڷ���:" << building->m_BedRoom << endl;
//        //�ɼ� ˽�������������޷�����
//}
//
//void goodGay01(Building* building)//
//{
//    cout << "�û���ȫ�ֺ��� ���ڷ���:" << building->m_SittingRoom << endl;
//    cout << "�û���ȫ�ֺ��� ���ڷ���:" << building->m_BedRoom << endl;
//        //������������goodGay01()Ϊ��Ԫ�� �ɼ�˽������Ҳ���Է�����
//}
//
//void test01()
//{
//    Building building;//ʵ��������
//    goodGay(&building);//��ַ����
//}
//void test02()
//{
//    Building building;//ʵ��������
//    goodGay01(&building);//��ַ����
//}
//int main()
//{
//    test02();
//
//    return 0;
//}






//������Ԫ
//#include<string>
//class Building;//Ԥ�������� ���ⱨ��
//class GoodGay//��������
//{
//public:
//    GoodGay();//���캯��    ��Ա���������� ������ʵ�� Ҳ�ǿ��е�
//
//    void visit();//�ιۺ��� ����Building�е�����(���� �� ˽��)
//
//private:
//    Building* building;
//
//};
//
//class Building//������
//{
//
//    friend class GoodGay; //��Ԫ�� ��֪GoodGay���Ǳ������Ԫ ���Է���˽�г�Ա
//
//public:
//    Building(); //���캯��    ��Ա���������� ������ʵ�� 
//
//public:
//    string m_SittingRoom;//����
//private:
//    string m_BedRoom;//����
//};
//
////����ʵ��Building�ĳ�Ա����
////������ + ���캯��
//Building::Building()
//{
//    cout << "Building�Ĺ���" << endl;
//    m_SittingRoom = "����";
//    m_BedRoom = "����";
//}
//
//
////����ʵ��GoodGay�ĳ�Ա����
////������ + ���캯��
//GoodGay::GoodGay()
//{
//    cout << "GoodGay�Ĺ���" << endl;
//    //�������������
//    building = new Building;        // "���� = new ����" �﷨�ڶѿռ䴴��һ�������͵Ķ��󲢷���ָ��
//                                            //��new��ʱ���Զ����й��캯��
//}
////����ֵ + ������ + ����
//void GoodGay::visit()
//{
//    cout << "�û��������ڷ���" << building->m_SittingRoom << endl;
//    cout << "�û��������ڷ���" << building->m_BedRoom << endl;
//}
//void test01()
//{
//    GoodGay gg; //ʵ��������
//    gg.visit();
//}
//int main()
//{
//    test01();
//
//    return 0;
//}







//��Ա��������Ԫ
//#include<string>
//
//class Building;//������
//
//class GoodGay//��������
//{
//public:
//    GoodGay();
//
//    void visit();//��visit���Է���building��˽�еĳ�Ա
//    void visit2();//��visit�����Է���Building��˽�г�Ա
//
//    Building* building;
//};
//
//class Building//������
//{
//
//    friend void GoodGay::visit(); //��Ԫ��Ա���� ˵�������򼰺�����
//
//public:
//    Building();//������������ ��������ʵ��
//
//public:
//    string m_SittingRoom;//����
//private:
//    string m_BedRoom;//����
//};
//
////����ʵ�ֳ�Ա����
//Building::Building()//����
//{
//    m_SittingRoom = "����";
//    m_BedRoom = "����";
//}
//
//GoodGay::GoodGay()//����
//{
//    building = new Building;    //�ڶ�������Building
//}
//
//void GoodGay::visit()
//{
//    cout << "visit���ڷ���" << building->m_SittingRoom << endl;
//    cout << "visit���ڷ���" << building->m_BedRoom << endl;
//}
//
//void GoodGay::visit2()
//{
//    cout << "visit2���ڷ���" << building->m_SittingRoom << endl;
//    //cout << "visit���ڷ���" << building->m_BedRoom << endl; //�˴�ֻ�Ժ���visit��Ԫ ���visit2���ܷ���
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
���������

Ʃ�� = - * / ++ -- () []�ȳ���������� ������ ���Զ���Щ���е���������¶��� ������һ�ֹ��� ����Ӧ��ͬ����������

���������������ͣ�������֪���������
    �磺int a = 10; int b = 20;    int c = a + b;
�������Զ������ͣ��ر����ڲ�����ָ��ģ���ʱ������������ӣ��������Ͳ�֪������β�����

    ������ؼ��֣�operator

        operator+
        operator-
        operator++
          ...
        
    ����Ϊ��Person p3 = p1.operator+(p2); �� p3 = operator+(p1,p2);
                            ��Ա��������              ȫ�ֺ�������                 
    ��Ϊ��Person p3 = p1 + p2;

*/


//�Ӻ����������
    //ʵ�������Զ�������������ӵ�����
        //1.ͨ����Ա��������+��
        //2.ͨ��ȫ�ֺ�������+��
//class Person
//{
//public:
//    Person()
//    {
//        cout << "person��Ĭ�Ϲ���" << endl;
//    }
//    Person(const Person& p) {
//        this->m_A = p.m_A;
//        this->m_B = p.m_B;
//        cout << "��������" << endl;
//    }
//    ~Person()
//    {
//        cout << "person������" << endl;
//    }
//    //��Ա��������+��
//    //Person operator+(const Person& p)//���ε��� Ϊ�����޸�p ����const
//    //{
//    //    Person temp;//������ʱ���� �˴�����ù��캯�� ʵ����һ��temp
//    //    temp.m_A = this->m_A + p.m_A;
//    //    temp.m_B = this->m_B + p.m_B;//this��ָ�� ��ס ��Ҫ��->���ʳ�Ա
//    //    cout << "temp�ĵ�ַ:" << &temp << endl;
//    //    return temp;
//    //}
//public:
//    int m_A;
//    int m_B;
//};
//
    ////ȫ�ֺ�������+��
//Person operator+(Person& p1, Person& p2)
//{
//    Person temp;//������ʱ���� ���ں������� ����ֵ������
//    temp.m_A = p1.m_A + p2.m_A;
//    temp.m_B = p1.m_B + p2.m_B;
//    cout << "temp�ĵ�ַ:" << &temp << endl;
//    return temp;
//}
////���������Ҳ���Խ��к�������
//Person operator+(Person& p1, int val)
//{
//    Person temp;//������ʱ���� ���ں������� ����ֵ������
//    temp.m_A = p1.m_A + val;
//    temp.m_B = p1.m_B + val;
//    cout << "temp�ĵ�ַ:" << &temp << endl;
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
//    Person p3 = p1 + p2;//p3�˴�����һ�ο������� temp������p3���Լ�ֱ������
//    cout << "p3�ĵ�ַ:" << &p3 << endl;
//
//    p1 + p2;//��������ú������ܵĻ� temp�˴����ȿ��������һ���������� ֮����������ֱ������ 
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
//    Person p3 = p1 + 100; //��ʱ������Ϊ������
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
//ע��1: �����������͵�����������Ըı� ֻ�ܸı��Զ�������
//ע��2: ��Ҫ�������������







//�������������
 /*
 
    ���������:  <<

    ��: cout << "ni shi zhu"<< endl;�е�<<�������������

    ��Щ�������:
        Person p; 
        p.m_A = 10; 
        p.m_B = 20;
      ��ο�����cout?��������˷���һ��һ����?
    
    ʵ��:
        cout << p << endl; ��������������г�Ա

    �˴�����Ҫ�������������

 */ 

//class Person
//{
//public:
//  //ͨ�������ó�Ա�������������,��Ϊ�޷�ʵ��cout�����
//    //void operator<<(cout)   //----->   p.operator(cout) ��Ϊ: p1 << cout;   cout����� ����
//    //{
//
//    //}
//
//    friend ostream& operator<<(ostream& cout, Person& p); //ʹ��������غ�����Ԫ ʹ����Է���˽�г�Ա
//
//
//    int m_A;
//    int m_B;
//};
//
////ͨ��ʹ��ȫ�ֺ�������������������� 
//        //����������ʵ��: cout << p1; 
//        //�� operator<<( cout , p1 );��������
//ostream& operator<<( ostream &cout , Person &p)  //cout��Ϊ��׼��������� 
//                                                    //�Ҽ��鿴·�� �ɼ�����Ϊ:ostream �����
//{
//    cout << "m_A = " << p.m_A << "  m_B = " << p.m_B << endl;
//    return cout;//���ر�׼���������  ����ֵ����ͬ��Ϊ ostream&
//
//          //�����Ҵ˴���cout ֻ�����Ǻ�������������ı��� �������ĳ��������� һ��������Ч
//}
////ע��: �����������η���˽��Ȩ��?
////      ʹ����Ԫ����
//
//void test01()
//{
//    Person p;
//    p.m_A = 10;
//    p.m_B = 20;
//
//    cout << p;
//    cout << p << endl;//�˴��޷���<<endl�� ��Ϊ���ǰѷ���ֵ��Ϊvoid ��������Ҫ�÷���ֵҲ�����������
//                                    //��������ֵ��Ϊ ostream& ���Һ������������cout�� �Ϳ��Լ�������׷��
//                                            //ʵ����ʽ����
//}
//
//int main()
//{
//    test01();
//
//    return 0;
//}







//�������������
/*

    ���������:  ++

    ע������ǰ��++�ͺ���++
    int a = 10;
    cout << ++a << endl; //�����Ϊ11
    cout << a << endl; //���Ҳ��11
    cout << a++ << endl;//������11
    coout << a << endl;���Ϊ12
    
    //����������ص��������ʱ,ҲҪдǰ�õ����ͺ��õ�������.
*/
//class MyInteger   //�Զ������ͱ���
//{
//
//    friend ostream& operator<<(ostream& cout, const MyInteger& myint);//������Ԫ
//
//public:
//    MyInteger()
//    {
//        m_Num = 0;//�����ʼ��Ϊ0
//    }
//
//    //����ǰ��++�����
//    MyInteger& operator++()
//    {
//        //��++
//        this->m_Num++;
//
//        //�󷵻�
//        return  *this;//����ֵӦ����MyInteger���ͱ��� ����++��cout�����͸ı���
//    }                       //��˺�������ֵΪ MyInteger&
//              //*******����: �˴��Ƿ��ܲ��������� ����ֱ�ӷ���MyInteger?
//                    //����! ��Ϊ�˴����ص���һ���µĶ��� �����һ�ο������� �޸ĵĲ���ͬһ��������
//
//
//    //���غ���++�����
//       //���Ƿ��ֱ�������Ϊ����д����ǰ��++�����غ��� ��������������ֵ��ͬ -----����ֵ������Ϊ��������
//       //����ʱ����ô����?  ---->  ռλ����
//    MyInteger operator++(int)  //int Ϊռλ����   ������������ǰ�úͺ���
//    {           // operator++(int) [[[[[��������Ĭ��Ϊ���õ���]]]]]]
//        
//        //�ȼ�¼��ʱ���
//        MyInteger temp = *this;
//        
//        //�����ԭ��
//        m_Num++;
//
//        //��󽫼�¼�������
//        return temp;
//    }//ע��!!!�˴��ķ���ֵ ��MyInteger �����Ƿ������� ��Ϊtempֻ��һ����ʱ���� ���»ᱻ�ͷ�
//            //��˴˴����뷵��ֵ
//private:
//    int m_Num;
//};
//void test01()
//{
//    MyInteger myint;
//    cout << myint << endl;//�޷���� ��Ϊ������Զ������ ������Ҫ����������������ſ���
//}
//
////�������������
//ostream& operator<<(ostream& cout , const MyInteger& myint)//�˴��ڶ������������޸�
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







//��ֵ���������
#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<string>
using namespace std;

#define MAX 1000

//ͨѶ¼����ϵͳ

/*

ϵͳ����

ͨѶ¼��һ�����Լ�¼���ˡ�������Ϣ�Ĺ��ߡ�

���̳���Ҫ����C++��ʵ��һ��ͨѶ¼����ϵͳ

ϵͳ����Ҫʵ�ֵĹ������£�

* �����ϵ�ˣ���ͨѶ¼��������ˣ���Ϣ�������������Ա����䡢��ϵ�绰����ͥסַ������¼1000��
* ��ʾ��ϵ�ˣ���ʾͨѶ¼��������ϵ����Ϣ
* ɾ����ϵ�ˣ�������������ɾ��ָ����ϵ��
* ������ϵ�ˣ����������鿴ָ����ϵ����Ϣ
* �޸���ϵ�ˣ��������������޸�ָ����ϵ��
* �����ϵ�ˣ����ͨѶ¼��������Ϣ
* �˳�ͨѶ¼���˳���ǰʹ�õ�ͨѶ¼

*/


//�˵�����
void showMenu()
{
    cout << "\n***************************" << endl;
    cout << "*****  1�������ϵ��  *****" << endl;
    cout << "*****  2����ʾ��ϵ��  *****" << endl;
    cout << "*****  3��ɾ����ϵ��  *****" << endl;
    cout << "*****  4��������ϵ��  *****" << endl;
    cout << "*****  5���޸���ϵ��  *****" << endl;
    cout << "*****  6�������ϵ��  *****" << endl;
    cout << "*****  0���˳�ͨѶ¼  *****" << endl;
    cout << "***************************\n" << endl;
}

//��ϵ�˽ṹ��
struct Person   
{
    string name;
    int gender;    // 1��  2Ů  �����������ݶ�����ͨ��
    int age;
    string phone;
    string address;
};

//ͨѶ¼�ṹ��
struct Addressbooks  
{
    Person personArray[MAX];    //�������  �ñ�ʶ�������� ���ں����޸�
    int size;
};


//�����ϵ��
void addPerson(Addressbooks* pabs)
{
    //�ж�ͨѶ¼�Ƿ�������������˾Ͳ������
    if (pabs->size >= MAX)
    {
        cout << "ͨѶ¼�������޷���ӣ�" << endl;
        return;
    }
    else
    {
        //��Ӿ�����ϵ��
        //����
        string name;
        cout << "������������" << endl;
        cin >> name;
        pabs->personArray[pabs->size].name = name;

        //�Ա�
        cout << "�������Ա�" << endl;
        cout << "1 --- ��" << endl;
        cout << "2 --- Ů" << endl;
        int gender = 0;
        while (true)
        {
            cin >> gender;
            if (1 == gender || 2 == gender)
            {
                //������ȷ ¼������ �˳�ѭ��
                pabs->personArray[pabs->size].gender = gender;
                break;
            }
            else
            {
                //������� ��������
                cout << "�����������������" << endl;
            }
        }

        //����
        cout << "���������䣺" << endl;
        cin >> pabs->personArray[pabs->size].age;

        //�绰
        cout << "������绰��" << endl;
        cin >> pabs->personArray[pabs->size].phone;

        //��ַ
        cout << "�������ַ" << endl;
        cin >> pabs->personArray[pabs->size].address; 

        //����ͨѶ¼����
        pabs->size++;

        cout << "--��ӳɹ���--" << endl;
        
        //ˢ����Ļ
        system("pause");//�밴���������
        system("cls");//��������

    }
}



//��ʾ��ϵ��
void showPerson(Addressbooks* p)
{
    //�ж�ͨѶ¼�������Ƿ�Ϊ0�����Ϊ0����ʾ��¼Ϊ�գ������Ϊ0����ʾ������ϵ����Ϣ
    if (0 == p->size)
    {
        cout << "--ͨѶ¼Ϊ�գ�--" << endl;
    }
    else
    {
        for (int i = 0; i < p->size; i++)
        {
            cout << "\t����:" << p->personArray[i].name << "\t";
            cout << "\t�Ա�:" << (p->personArray[i].gender == 1 ? "��":"Ů") << "\t";
                                                      //���˴�����Ŀ����� �����ж�����л�Ů
            cout << "\t����:" << p->personArray[i].age << "\t";
            cout << "\t�绰:" << p->personArray[i].phone << "\t";
            cout << "\t��ַ:" << p->personArray[i].address << endl;
        }
    }

    //ˢ����Ļ
    system("pause");
    system("cls");//clean sreen
}                                                                                 



//�����ϵ���Ƿ���ڣ�������ڣ�������ϵ�����������еľ���λ�ã���������ڣ�����-1
int checkPerson(Addressbooks *p,string t_name)
//����ֵ  ͨѶ¼        ����         �Ա�����
{
    for (int i = 0; i < p->size; i++)
    {
        //�ҵ��û����������
        if (t_name == p->personArray[i].name )
        {
            return i;
        }
    }

    //����������û���ҵ�������-1
    return -1;
}


//ɾ����ϵ��
void delPerson(Addressbooks* p)
{
    //��ͨѶ¼Ϊ�գ���ɾ��
    if (0 == p->size)
    {
        cout << "ͨѶ¼Ϊ�գ�" << endl;
        return ;
    }
    
    cout << "������ɾ����ϵ�˵�������" << endl;
    string name;
    cin >> name;
    int ret = checkPerson(p, name);
    if (-1 == ret)
    {
        //û�鵽 ��ʾ
        cout << "���޴���" << endl;
    }
    else
    {
        //�鵽�� ɾ��
            //��������ϵ�˵�������ǰ�ƶ� �����ü�¼����Ա����size -1
        for (int i = ret; i < p->size; i++)
        {
            p->personArray[i] = p->personArray[i + 1];
        }
        p->size--;//����ͨѶ¼�е���Ա��
        cout << "ɾ���ɹ�" << endl;
    }

    system("pause");
    system("cls");//�����Ļ
}


//������ϵ��
void FindPerson(Addressbooks *p)
{
    //��ͨѶ¼Ϊ�գ��򲻲���
    if (0 == p->size)
    {
        cout << "ͨѶ¼Ϊ�գ�" << endl;
        return;
    }

    cout << "�����������ϵ�˵�������" << endl;
    string name;
    cin >> name;
    int ret = checkPerson(p, name);
    if (-1 == ret)
    {
        //�Ҳ��� ��ʾ
        cout << "���޴���" << endl;
    }
    else
    {
        //�ҵ��ˣ���ʾ����ϵ��
        cout << "\t����:" << p->personArray[ret].name << "\t";
        cout << "\t�Ա�:" << (p->personArray[ret].gender == 1 ? "��" : "Ů") << "\t";
        //���˴�����Ŀ����� �����ж�����л�Ů
        cout << "\t����:" << p->personArray[ret].age << "\t";
        cout << "\t�绰:" << p->personArray[ret].phone << "\t";
        cout << "\t��ַ:" << p->personArray[ret].address << endl;
    }
 
    system("pause");
    system("cls");
}


//�޸���ϵ��
void ModifyPerson(Addressbooks* p)
{
    //��ͨѶ¼Ϊ�գ��򲻲���
    if (0 == p->size)
    {
        cout << "ͨѶ¼Ϊ�գ�" << endl;
        return;
    }

    cout << "������Ҫ�޸ĵ���ϵ��������" << endl;
    string name;
    cin >> name;
    int ret = checkPerson(p, name);
    if (-1 == ret)
    {
        //�Ҳ��� ��ʾ
        cout << "���޴���" << endl;
    }
    else
    {
        string name;
        cout << "������������" << endl;
        cin >> name;
        p->personArray[ret].name = name;

        //�Ա�
        cout << "�������Ա�" << endl;
        cout << "1 --- ��" << endl;
        cout << "2 --- Ů" << endl;
        int gender = 0;
        while (true)
        {
            cin >> gender;
            if (1 == gender || 2 == gender)
            {
                //������ȷ ¼������ �˳�ѭ��
                p->personArray[ret].gender = gender;
                break;
            }
            else
            {
                //������� ��������
                cout << "�����������������" << endl;
            }
        }
        //����
        cout << "���������䣺" << endl;
        cin >> p->personArray[ret].age;

        //�绰
        cout << "������绰��" << endl;
        cin >> p->personArray[ret].phone;

        //��ַ
        cout << "�������ַ" << endl;
        cin >> p->personArray[ret].address;

    }

    system("pause");
    system("cls");
}


//�����ϵ��
void cleanPerson(Addressbooks* p)
{
    p->size = 0;//����ϵ��������Ϊ0�������߼��ϵ���ղ�������
}


int main()
{
    Addressbooks abs;
        //��ʼ��ͨѶ¼�е�ǰ����Ա����
    abs.size = 0;


    while(true)
    {
    showMenu();//�˵��ĵ���

    int select = 0;//�����û�ѡ������ı���
    cin >> select;

    switch (select)
    {
    case 1:
        //�����ϵ��
        addPerson(&abs);
        break;
    case 2:
        //��ʾ��ϵ��
        showPerson(&abs);
        break;
    case 3:
        //ɾ����ϵ��
    /*{    
        cout << "������ɾ����ϵ�˵�������" << endl;
        string name;
        cin >> name;
        if (-1 == checkPerson(&abs, name))
        {
            cout << "���޴���" << endl;
        }
    }*///ע�⣡��switch case�еĴ���ܴ�һ��ʱ ��{}������ �γ�һ������� ����Ա��ⱨ��
        delPerson(&abs);
        break;
    case 4:
        //������ϵ��
        FindPerson(&abs);
        break;
    case 5:
        //�޸���ϵ��
        ModifyPerson(&abs);
        break;
    case 6:
        //�����ϵ��
        cleanPerson(&abs);
        break;
    case 0:
        //�˳�ͨѶ¼
        cout << "�˳�ͨѶ¼����ӭ�´�ʹ��" << endl;
        system("pause");
        return 0;//�˳�main����
        break;
    default:
        //�Ƿ�����
        break;


    }
    }




    return 0;
}
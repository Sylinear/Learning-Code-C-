#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//�������̽ṹ
    //�������˳��ṹ  ѡ��ṹ  ѭ���ṹ




int main()
{
//ѡ��ṹ
  //if���
    //int a = 1;
    //int b = 0;
    //cout << "������b����ֵ��" << endl;
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

    ////**��ϰ������** ��ֻС�������:����ֻС��ABC����ֱ�������ֻС������أ������ж���ֻС�����أ�

    //a = 0;
    //b = 0;
    //int c = 0;
    //cout << "������AС������أ�" << endl;
    //cin >> a;
    //cout << "������BС������أ�" << endl;
    //cin >> b;
    //cout << "������CС������أ�" << endl;
    //cin >> c;

    //if (a > b)
    //{
    //    if (a > c)
    //    {
    //        cout << "AС������" << endl;
    //    }
    //    else
    //    {
    //        cout << "CС������" << endl;
    //    }
    //}
    //else
    //{
    //    if (b > c)
    //    {
    //        cout << "BС������" << endl;
    //    }
    //    else
    //    {
    //        cout << "CС������" << endl;
    //    }
    //}




  //��Ŀ����� (a>b? a : b)
        //���������ʽ��� �������ʽ1Ϊ�� ִ�б��ʽ2 ������2�Ľ��  ����ִ�б��ʽ3 ���������Ľ��

    // int a = 1;
    // int b = 2;
    // int c = 3;

    //cout << (a > b ? a : b) << endl;
    //cout << (a > b ? b = a + b : c = a + c) << endl;//������a+c��ֵ ����û��ʵ��a+b

    ////��Ŀ������ķ���ֵ���Խ��и�ֵ
    //(a > b ? a : b) = 100;
    //�����صĴ��� �Ŀ��Խ��и�ֵ �˴�������b b����ֵΪ100��






  //switch���
        //ע�⣺switch���ʽ����ֻ�������ͻ����ַ�
            //ע�⣺���case��û��break ����������ִ�� break���������˳���֧�ṹ
                //switch��ȱ���ǲ����ж�����
    //int score = 0;
    //cout << "�����Ӱ���:" << endl;
    //cin >> score;

    //switch (score)
    //{
    //case 10:
    //case 9:
    //    //ʹ��ð��
    //    cout << "�ǳ���" << endl;
    //    break;
    //case 8:
    //case 7:
    //    cout << "������" << endl;
    //    break;
    //case 6:
    //    cout << "�ϸ�" << endl;
    //    break;
    //default:
    //    cout << "��Ƭ" << endl;
    //    break;
    //}







//ѭ���ṹ
  //while
    //����Ļ��ӡ0~9
    //int num = 0;
    //while (num < 10)  //��0Ϊ�� 0Ϊ��
    //{
    //    cout << num << endl;
    //    num++;
    //}

    //������
    //ϵͳ�������һ��1��100֮������֣���ҽ��в²⣬����´���ʾ������ֹ�����С������¶Թ�ϲ���ʤ���������˳���Ϸ

    //1.ϵͳ���������
    //��������� ʹ��rand()����
    //srand((unsigned int)time(NULL)); //srand()���������������� ����ϵͳ��ǰ���Ծ������������ ��ֹÿ���������һ��
    //                    //time��Ҫͷ�ļ� #include<ctime>
    //int num = rand() % 100 + 1;      //rand()%100 ����0~99����� rand���������һ���� ȡģ100��õ�0-99�ķ�Χ �ټ�һ �õ�1~100�ķ�Χ
    //cout << num << endl;
    //
    ////2.��Ҳ²�
    //int val = 0;
    //while(1)
    //{
    //cin >> val;//�������val����ֵ


    ////3.�жϲ²� 
    //    //�¶�-->�˳� 
    //    //�´�-->���·��صڶ���
    //if (val > num)
    //{
    //    cout << "�²����" << endl;
    //}
    //else if(val < num)
    //{
    //    cout << "�²��С" << endl;
    //}
    //else if (val == num)
    //{
    //    cout << "��ϲ�����¶��ˣ�" << endl;
    //    break;//break�˳���ǰѭ��
    //}
    //}

  //do while
    //����Ļ�����0��9        
    //int num = 0;
    //do 
    //{
    //    //cout << num << endl;
    //    //num++;
    //    
    //    cout << num++ << endl;//����++ ��cout��++ 

    //} while (num < 10);

    //ˮ�ɻ���
    //int num = 100;

    //do {
    //        int a, b, c = 0;
    //        a = num / 100; //��λ
    //        b = num / 10 % 10;//ʮλ
    //        c = num % 10;//��λ
    //    if (a*a*a + b*b*b + c*c*c == num)
    //    {
    //        cout << num << endl;
    //    }
    //    num++;
    //} while (num < 1000);


  //forѭ��
    //for(��ʼ���ʽ;�������ʽ;ĩβѭ����) { ѭ�����; }
    //for (int i = 0; i < 10; i++) //ִ��˳��1 2 3 4
    //    //1         3       4
    //{
    //    cout << i << endl;  //2
    //}

    //int i = 0;
    //for (; i < 10;) //�����еı��ʽ���Բ�д
    //{
    //    cout << i << endl;
    //}
    //������
    //��1��ʼ��������100�� ������ָ�λ����7����������ʮλ����7�����߸�������7�ı��������Ǵ�ӡ�����ӣ���������ֱ�Ӵ�ӡ�����
    //for (int i = 1; i <= 100; i++)
    //{
    //    if (i % 10 == 7 || i / 10 == 7 || i % 7 == 0)
    //    {
    //        cout << "������" << endl;
    //    }
    //    else
    //    {
    //        cout << i << endl;
    //    }
    //}


  //Ƕ��ѭ��
    //for (int i = 0; i < 10; i++)
    //{
    //    for (int j = 0; j < 10 ; j++)
    //    {
    //        cout << "*   ";
    //    }
    //    cout << "\n" << endl;
    //}
    ////�˷��ھ���
    ////����Ƕ��ѭ����ʵ�־žų˷���
    //for (int i = 1; i < 10; i++)
    //{
    //    for (int j = 1; j < i+1; j++)
    //    {
    //        cout << j << "*" << i << "=" << i * j << "\t";
    //    }
    //    cout << "\n" << endl;
    //}



//��ת���
  //break    
    //����switch��ʹ��  ����ѭ����ʹ��  ����Ƕ��ѭ����ʹ�ÿ�����������ڲ�ѭ��
    
    
  //continue
    //һ��ִ�е�continue ����������ѭ��ʣ������ ִ����һ��ѭ��
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
    

#include <iostream>
#include "fish.h"
#include <string>
#include <vector>
#include <array>

using namespace std;

//getline��ȡ���з������ڴ洢ʱ�ÿ��ַ����滻�з������ڽ�20���ַ�����name
//int main()
//{
//    char name[20];
//    cin.getline(name,20);
//    for(int i = 0;i<20;i++)
//    {
//        cout << name[i];
//    }
//    return 0;
//}


//////
////int main()
////{
////
////    char address[20],address2[20];
////    cin.getline(address,10).get(address2,10);
////    cout << address << address2;
////}


////�ṹ���ʹ��
//struct fisher
//{
//        string type;
//        int weight;
//        float length;
//};
//
//int main()
//{
//    fisher eye =
//    {
//        "����",
//        56,
//        3.69
//    };
//    fisher ear =
//    {
//        "��Ŀ��",
//        36,
//        8.699
//    };
//    cout << ear.type << endl;
//    cout <<eye.weight <<endl;
//};


////ö�ٵļ�ʹ��
//
//int main()
//{
//    enum bits{first = 1,two = 2,three = 3};
//    bits myflag;
//    myflag = bits(9);
////    cout << myflag;
//    enum Response  {Yes = 1 , No = 0 , Maybe = 3};
//    Response t;
//    t = Response(No);
//    cout << t;
//}

//ָ��
//int main()
//{
//    double ted = 2.6633;
//    double* p = &ted;
//    cout << p << endl;//��ַ
//    cout << *p << endl;//��ֵ
//}
//int main()
//{
//    float treacle[10]  {1.1, 2.2, 3.3, 1, 0.55, 45, 6.3, 432.1 ,53, 5};
//    float* p = &treacle[0];
//    cout << *p << "\t" <<*(p+9) << endl;
//}

////��̬�����ڴ�
//int main()
//{
//    cout << "�����������С��";
//    int size1;
//    cin >> size1;
//    int *ptr = new int[size1];
//    vector<int> dv(size1);
//    for (int i = 0 ;i<size1;i++)
//    {
//        *(ptr + i) = i;
//        dv[i] = i;
//        cout << *(ptr + i)<<endl;
//        cout <<dv[i] << endl;
//    }
//    delete [] ptr;
//    cout << *ptr <<endl;
//}

////��ӡ��һ��
//int main()
//{
//    //�����ַ�������ʼ��ַת��Ϊintָ����д�ӡ
//    cout << (int*)"hello baby!" << endl;
//}

////���ṹ��̬�����ڴ棬����ȡ��Աֵ
//int main()
//{
//    struct fish{
//        char ch[20];
//        int weight;
//        float len;
//    };
//    fish * pole = new fish;
//    cout << "enter the fish kind:";
//    cin >> pole -> ch;
//    cout << pole -> ch << endl;
//    delete [] pole;
//    cout << pole -> ch;
//}


////1.
//int main()
//{
//    cout << "what's your first name: ";
//    char name[20];
//    cin.getline(name,20);
//    cout << "what's your last name: ";
//    char name1[10];
//    cin.get();
//    cin.getline(name1,10);
//    cout <<"what's letter grade do you deserve: ";
//    char degree;
//    cin >> degree;
//    cout <<"what's your age: ";
//    int age;
//    cin >> age;
//    cout << "Name: "
//     << name<< name1 << endl;
//    cout << "Grade: " << char(degree+1) <<
//    "\n" << "Age: " << age;
//}


////4.
//int main()
//{
//    cout << "enter your first name: ";
//    string name1;
//    getline(cin,name1);
//    cout << "enter your last name: ";
//    string name2;
//    getline(cin,name2);
//    cout << "name: " << name1 + "," +name2 << endl;
//}


////5.
//int main()
//{
//    typedef struct CandyBar
//    {
//        string brand;
//        float weight;
//        int energy;
//    }T_CandyBar;
//    T_CandyBar snack
//    {
//        "Mocha Munch",
//        2.3,
//        350
//    };
//    cout << snack.brand;
//}

////7.
//int main()
//{
//    typedef struct Pizza
//    {
//        string name;
//        float diameter;
//        double weight;
//    }T_pizza;
//    cout << "enter the name of pizza: ";
//    T_pizza pizza1;
//    getline(cin,pizza1.name);
//    cout << "enter the diameter: ";
//    cin >> pizza1.diameter;
//    cout << "enter the weight:";
//    cin >> pizza1.weight;
//    cout << pizza1.name << ": " << pizza1.diameter << " " << pizza1.weight;
//}

////8.
//int main()
//{
//    typedef struct Pizza
//    {
//        string name;
//        float diameter;
//        double weight;
//    }T_pizza;
//    T_pizza *ptr_pizza = new T_pizza;
//    cout << "enter the diameter: ";
//    cin >> ptr_pizza -> diameter;
//    cin.get();//Ϊ���⻻�з������ж�ȡΪ����
//    cout << "enter the name: ";
//    getline(cin,ptr_pizza -> name);
//    cout << "enter the weight: ";
//    cin >> ptr_pizza -> weight;
//    cout<< ptr_pizza->name << ": " << ptr_pizza -> diameter << "," << ptr_pizza-> weight;
//}


////9.
//int main()
//{
//    typedef struct Candy
//    {
//        string name;
//        float snack;
//        int calorie;
//    }T_candy;
//    T_candy *candy = new T_candy[3]
//    {
//        {"MoMo",3.6,5},{"TingTing",3.2,9},{"QingQing",5.2,6}
//    };
//    for(int i = 0;i<3;i++)
//    {
//        cout <<candy[i].name << "\t" ;
//    }
//    delete [] candy;
//}


//10.
int main()
{
    array<float,3> score;
    for(int i=0;i<3;i++)
    {
        cout << "enter the score: ";
        cin >> score[i];
    }

    float aver = 0;
    for (int i=0;i<3;i++)
    {
        aver += score[i];
        aver = aver / (i+1);
        cout << "time: " << i+1 << "\taverage: " << aver <<endl;
        aver = aver * (i+1);
    }
}

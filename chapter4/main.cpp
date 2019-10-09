#include <iostream>
#include "fish.h"
#include <string>
#include <vector>
#include <array>

using namespace std;

//getline读取换行符，但在存储时用空字符代替换行符，用于将20个字符读入name
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


////结构体的使用
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
//        "金鱼",
//        56,
//        3.69
//    };
//    fisher ear =
//    {
//        "比目鱼",
//        36,
//        8.699
//    };
//    cout << ear.type << endl;
//    cout <<eye.weight <<endl;
//};


////枚举的简单使用
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

//指针
//int main()
//{
//    double ted = 2.6633;
//    double* p = &ted;
//    cout << p << endl;//地址
//    cout << *p << endl;//数值
//}
//int main()
//{
//    float treacle[10]  {1.1, 2.2, 3.3, 1, 0.55, 45, 6.3, 432.1 ,53, 5};
//    float* p = &treacle[0];
//    cout << *p << "\t" <<*(p+9) << endl;
//}

////动态分配内存
//int main()
//{
//    cout << "请输入数组大小：";
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

////打印试一试
//int main()
//{
//    //将该字符串的起始地址转换为int指针进行打印
//    cout << (int*)"hello baby!" << endl;
//}

////给结构动态分配内存，并读取成员值
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
//    cin.get();//为避免换行符被下行读取为输入
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

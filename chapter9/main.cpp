#include <iostream>

//using namespace std;

//int main()
//{
//    cout << "Hello world!" << endl;
//    return 0;
//}

/*��ϰ*/
//3.
//int main()
//{
//    double x;
//    std::cout << "enter value: ";
//    while (!(std::cin >> x))
//    {
//        std::cout << "bad input!please enter anumber: ";
//        std::cin.clear();
//        while(std::cin.get() != '\n')
//        {
//            continue;
//        }
//    }
//    std::cout << "value  = " <<x <<std::endl;
//}


////4.
//int main()
//{
//    using std::cin;
//    using std::cout;
//    using std::endl;
//    double x;
//    cout << "enter value: ";
//    while(!(cin >> x))
//    {
//        cout << "bad input!please enter a number: ";
//        cin.clear();
//        while(cin.get() != '\n')
//            continue;
//    }
//    cout << "value = " << x << endl;
//}


//5.����һ��������������Ϊ�ڲ�

//static int average(int,int);
//int main()
//{
//    int a=1,b=2;
//    std::cout << average(a,b);
//    std::cout << sizeof(average(a,b));
//}
//int average(int x,int y)
//{
//    return (x+y)/2;
//}


////��������ʹ�������ռ䣻
//namespace A
//{
//int average(int x,int y)
//{
//    return (x+y)/2;
//}
//}
//namespace B
//{
//static double average(int x,int y)
//{
//    return (double)((x+y)/2);
//}
//}
//using namespace B;
//int main()
//{
//    int a=1,b=2;
//    std::cout << average(a,b);
//    std::cout << sizeof(average(a,b));
//}



////6.�����ռ�������ͬһ�ļ�����Ч����������A��ʧЧ
//namespace //A
//{
//    int x = 3;
//}
//int main()
//{
//    {
//        x=1;
//    }
//    std::cout << x;
//}

using namespace std;
void other();
void another();
double x = 10;
int y;

int main()
{
    cout << x << endl;
    {
        int x=4;
        cout << x<<endl;
        cout << y<< endl;
    }
    other();
    another();
}
void other() // ���õ�double
{
    int y =1;
    cout << "other: " << x << "\t" <<y <<"\t" << sizeof(x) <<endl;
}

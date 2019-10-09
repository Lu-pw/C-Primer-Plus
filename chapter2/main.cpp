#include <iostream>

//using std::cout;
//using std::endl;
//
//int main()
//{
//    cout << "Hello world!" << endl;
//    return 0;
//}


//using namespace std;
//2.

//int main()
//{
//    long distance ;
//    cout << "请输入距离：";
//    distance = cin.get();
//    cout << "你输入的距离为："<<
//    distance * 220 << "码"<<endl;
//}

//3.
//void print();
//void how_run();
//int main()
//{
//    print();
//    print();
//    how_run();
//    how_run();
//}
//void print()
//{
//    cout << "Three blind mice" << endl;
//}
//void how_run()
//{
//    cout << "See how they run" << endl;
//}

////4.
//using namespace std;
//int main()
//{
//    cout << "please enter your age:" << endl;
//    int age;
//    cin >> age;
//    cout << age <<endl;
//    cout << "您的年龄包含：" << age * 12 << "个月"<< endl;
//}

////5.
//using namespace std;
//
//long temp(int);
//int main()
//{
//    int degree;
//    cout << "please enter a celsius value ";
//    cin >> degree;
//    long Fahren;
//    Fahren = temp(degree);
//    cout << degree << " degree celesius is " << Fahren << " degrees Fahrenheit"<<endl;
//}
//long temp(int degree)
//{
//    return 1.8 * degree + 32;
//}


////6.
//using namespace std;
//double astro(double light);
//int main()
//{
//    double unit;
//    double year;
//    cout << "Please enter the number of light years: ";
//    cin >> year;
//    unit = astro(year);
//    cout << year << " light years = "<<unit << " astronomical units"<<endl;
//}
//double astro(double light)
//{
//    return light * 63240;
//}


//7.
using namespace std;
void time(int hour,int minute);
int main()
{
    int hour,minute;
    cout << "enter the number of hours: ";
    cin >> hour;
    cout << "enter the number of minutes: ";
    cin >> minute;
    time(hour,minute);
}
void time(int hour,int minute)
{
    cout << "Time: " <<hour << ":" << minute<<endl;
}

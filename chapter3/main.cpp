#include <iostream>
#include <cmath>
using namespace std;

////1.在算除法时需用float型
//int main()
//{
//    int high;
//    float inch;
//    const float change = 1.2;
//    cout << "请输入身高：";
//    float foot = high / change;
//    cout << foot;
//    inch = high - ((int)foot) * change;
//    cout << "您的身高为" << (int)foot << "英尺" << inch << "英寸";
//    return 0;
//}

////2.
//int main()
//{
//    const int foot2inch = 12;
//    const float inch2meter = 0.0254;
//    const float kg2pound = 2.2;
//    int foot,inch;
//    cout << "enter your height:";
//    (cin >> foot);
////    char touch;
////    touch = cin.get();
////    if (touch == '\n')
//    cout << "inch:" ;
//    (cin >> inch);
//    cout <<"enter your weight:";
//    float weight;
//    cin >> weight;
//    double BMI = (weight / kg2pound) / (pow(((foot * foot2inch) + inch) * inch2meter,2));
//    cout << "BMI:" << BMI << endl;
//}


////3.
int main()
{
    long long seconds;
    cout << "please enter the seconds:" ;
    cin >> seconds;
    const double day2hour = 24;
    const double hour2minute = 60;
    const double minute2second = 60;
    double day,hour,minute,second;
    day = seconds / minute2second / hour2minute / day2hour;
    hour = (day - (int)day) * day2hour;
    minute = (hour - int(hour)) * hour2minute;
    second = (minute - (int)minute) * minute2second;
    cout << seconds << "seconds = " << int(day) << " day " << (int)hour
     << " hour "<<(int)minute << " minute " << second
     << " second " <<endl;
     cin.get();
}



#include <iostream>
#include "Stonewt.h"
#include "mytime1.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vect.h"
#include <fstream>
#include "vect2.h"
#include "mytime3.h"
#include "mytime4.h"
#include "Stonewt5.h"
#include "stonewt6.h"
#include "complex0.h"

using namespace std;

//int main()
//{
//    unit u1 = {10,8};
//    Stonewt stone;
//    stone.show();
//    stone.multi(u1,2);
//    stone.show();
//    unit u2 = stone.multi(u1,3);
//    cout << u2.pound << "\t" << u2.stone<<endl;
//    stone.show();
//}


////11.5
//int main()
//{
//    Time planning;
//    Time coding(2,40);
//    Time fixing(5,55);
//    Time total;
//
//    cout <<"planning time = ";
//    planning.show();
//    cout <<endl;
//
//    cout << "coding time = ";
//    coding.show();
//    cout << endl;
//
//    cout <<"fixing time = ";
//    fixing.show();
//    cout << endl;
//
//    total = coding + fixing;
//    cout << "coding + fixing = ";
//    total.show();
//    cout << endl;
//
//    Time morefixing(3,28);
//    cout << "more fixing time: ";
//    morefixing.show();
//    cout << endl;
//
//    total = morefixing.operator+(total);
//    cout << "morefixing.operator+(total) = ";
//    total.show();
//    cout << endl;
//
//}





//////11.15
//int main()
//{
//    using namespace std;
//    using namespace VECTOR;
//    srand(time(0)); //随机种子
//    double direction;
//    Vector step;
//    Vector result(0.0,0.0);
//    unsigned long steps = 0;
//    double target;
//    double dstep;
//    ofstream fout;
//    fout.open("walk.txt");
//    cout << "enter target distance (q to quit): ";
//    while(cin >> target)
//    {
//        cout << "enter step length: ";
//        if(!(cin >> dstep))
//            break;
//            fout << "target distance: "<< target << ",";
//            fout <<"step size: "<<dstep <<endl;
//        cout << steps << ": "<< result<<endl;
//        while (result.magval() < target)
//        {
//            direction = rand( ) % 360;
//            step.reset(dstep,direction,Vector::POL);
//            result = result + step;
//            steps ++;
//            cout << steps << ": "<< result<<endl;
//            fout << steps << ": "<<result << endl;
//        }
//        cout << "after " <<steps << " steps, the subject has the following location:\n";
//        cout << result << endl;
//        fout << "after " <<steps << " steps, the subject has the following location:\n";
//        fout << result << endl;
//        result.polar_mode();
//        cout << "or\n" << result <<endl;
//        cout << "average outward distance per step = "
//        << result.magval() / steps <<endl;
//        fout << "or\n" << result <<endl;
//        fout << "average outward distance per step = "
//        << result.magval() / steps <<endl;
//        steps = 0;
//        result.reset(0.0,0.0);
//        cout << "enter the target distance (q to quit): ";
//        fout << "enter the target distance (q to quit): ";
//    }
//    fout.close();
//    cin.clear();
//    while (cin.get() != '\n')
//        continue;
//}


///////2.
//int main()
//{
//    using namespace std;
//    using namespace VECTOR2;
//    srand(time(0)); //随机种子
//    double direction;
//    Vector2 step;
//    Vector2 result(0.0,0.0);
//    unsigned long steps = 0;
//    double target;
//    double dstep;
//    ofstream fout;
//    fout.open("walk.txt");
//    cout << "enter target distance (q to quit): ";
//    while(cin >> target)
//    {
//        cout << "enter step length: ";
//        if(!(cin >> dstep))
//            break;
//            fout << "target distance: "<< target << ",";
//            fout <<"step size: "<<dstep <<endl;
//        cout << steps << ": "<< result<<endl;
//        while (result.magval() < target)
//        {
//            direction = rand( ) % 360;
//            step.reset(dstep,direction,Vector2::POL);
//            result = result + step;
//            steps ++;
//            cout << steps << ": "<< result<<endl;
//            fout << steps << ": "<<result << endl;
//        }
//        cout << "after " <<steps << " steps, the subject has the following location:\n";
//        cout << result << endl;
//        fout << "after " <<steps << " steps, the subject has the following location:\n";
//        fout << result << endl;
//        result.polar_mode();
//        cout << "or\n" << result <<endl;
//        cout << "average outward distance per step = "
//        << result.magval() / steps <<endl;
//        fout << "or\n" << result <<endl;
//        fout << "average outward distance per step = "
//        << result.magval() / steps <<endl;
//        steps = 0;
//        result.reset(0.0,0.0);
//        cout << "enter the target distance (q to quit): ";
//        fout << "enter the target distance (q to quit): ";
//    }
//    fout.close();
//    cin.clear();
//    while (cin.get() != '\n')
//        continue;
//}






////////3.
//int main()
//{
//    using namespace std;
//    using namespace VECTOR2;
//    srand(time(0)); //随机种子
//    double direction;
//    Vector2 step;
//    Vector2 result(0.0,0.0);
//    int min_step;
//    int max_step;
//    unsigned long steps = 0;
//    int N;
//    ofstream fout;
//    fout.open("walk.txt");
//    double target;
//    double dstep;
//    cout << "enter target distance (q to quit): ";
//    while(cin >> target)
//    {
//        cout << "enter step length: ";
//        if(!(cin >> dstep))
//            break;
//        fout << "target distance: "<< target << ",";
//        fout <<"step size: "<<dstep <<endl;
//        min_step = 100000;
//        max_step = 0.0;
//        cout << "enter run times: ";
//        cin >> N;
//        for (int i=0; i<N; i++)
//        {
//            while (result.magval() < target)
//            {
//                direction = rand( ) % 360;
//                step.reset(dstep,direction,Vector2::POL);
//                result = result + step;
//                steps ++;
//                cout << steps << ": "<<result << endl;
//                fout << steps << ": "<<result << endl;
//            }
//            if(steps < min_step)
//            {
//                min_step = steps;
//            }
//            if(steps > max_step)
//            {
//                max_step = steps;
//            }
//            cout << "after " <<steps << " steps, the subject has the following location:\n";
//            cout << result << endl;
//            fout << "after " <<steps << " steps, the subject has the following location:\n";
//            fout << result << endl;
//            result.polar_mode();
//            cout << "or\n" << result <<endl;
//            cout << "average outward distance per step = "
//                 << result.magval() / steps <<endl;
//            fout << "or\n" << result <<endl;
//            fout << "average outward distance per step = "
//                 << result.magval() / steps <<endl;
//            cout << "min outward distance per step = ";
//            cout << min_step <<endl;
//            cout << "max outward distance per step = ";
//            cout << max_step <<endl;
//            steps = 0;
//            result.reset(0.0,0.0);
//            cout << "enter the target distance (q to quit): " <<endl;
//        }
//        cout << "min_step: " << min_step <<endl;
//        cout << "max_step: "<< max_step <<endl;
//    }
//    fout.close();
//    cin.clear();
//    while (cin.get() != '\n')
//        continue;
//}





///////4.
//using namespace std;
//int main()
//{
//    Time3 aida(3,35);
//    Time3 tosca(2,48);
//    Time3 temp;
//
//    cout << "Aida and tosca:\n";
//    cout << aida << ", " << tosca <<endl;
//    temp = aida + tosca;
//    cout <<"Aida + tosca: ";
//    cout << temp << endl;
//    temp = tosca * 1.17;
//    cout << "tosca * 1.17: " << temp <<endl;
//    temp = 10 * aida;
//    cout << "10 * aida: " << temp << endl;
//}


//using namespace std;
//int main()
//{
//    Time3 aida(3,35);
//    Time3 tosca(2,48);
//    Time3 temp;
//
//    cout << "Aida and tosca:\n";
//    cout << aida << ", " << tosca <<endl;
//    temp = aida + tosca;
//    cout <<"Aida + tosca: ";
//    cout << temp << endl;
//    temp = tosca * 1.17;
//    cout << "tosca * 1.17: " << temp <<endl;
//    temp = 10 * aida;
//    cout << "10 * aida: " << temp << endl;
//}



////////5.
//int main()
//{
//    Stonewt5 s1;
//    cout << s1;
//    Stonewt5 s2(2,3);
//    s2.set_pds();
//    cout << s2 <<endl;
//    s2.set_stn();
//    cout << s2 <<endl;
//    Stonewt5 s3 {2,6};
//    cout<< s3 <<endl;
//    s1 = s2+s3;
//    cout << s1 <<endl;
//    s1.set_pds();
//    cout << s1 <<endl;
//    cout << 3 * s1 <<endl;
//    cout << s1 * 3 <<endl;
//}





///////6.
//int main()
//{
//    stonewt6 st1[6] {{2,3},{2.3},{1,6.3}};
//    stonewt6 cmp {11};
//    for(int i=3;i<6;i++)
//    {
//        cout <<"enter the number of stonewt : ";
//        double pds;
//        cin >> pds;
//        st1[i] = stonewt6(pds);
//    }
//    stonewt6 max = st1[0];
//    int max_count = (st1[0] >=cmp);//TRUE返回1
//    stonewt6 min = st1[0];
//    for(int i = 1;i<6;i++)
//    {
//        if(max< st1[i])
//        {
//            max = st1[i];
//
//        }
//        if(st1[i]>= cmp)
//        {
//            max_count++;
//        }
//        if(min>st1[i])
//        {
//            min = st1[i];
//        }
//    }
//    cout << max.set_pounds()<<endl;
//    cout << max_count <<endl;
//    cout <<min.set_pounds() <<endl;
//}






/////////7.operator << (ostream & os,const complex 0 )
//要求后者必须为const类型
int main()
{
    complex0 a(3.0,4.0);
    complex0 c;
    cout << "enter a complex number (q to quit):\n";
    while(cin >> c)
    {
        cout << "c is " << c << '\n';
        cout <<"complex conjugate is " << ~c << '\n' ;
        cout <<"a is " << a << '\n';
        cout << "a + c is " << a + c << '\n';
        cout << "a - c is " << a - c << '\n';
        cout << "a * c is " << a * c << '\n';
        cout << "2 * c is " << 2 * c << '\n';
        cout << "enter a complex number (q to quit): \n";
    }
    cout <<"done!\n";
}

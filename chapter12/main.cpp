#include <iostream>
#include "Cow.h"
#include "String2.h"
//#include "Stock.h"
//#include "Stack.h"
#include "queue.h"
#include <ctime>

using namespace std;

//int main()
//{
//    Cow c1;
//    cout << c1.get_name()<< endl;
////    cout << c1.gethobby() <<endl;
////此处空指针会导致后文无法显示
//    Cow c2 = Cow("shao", "coding", 120);
//    c2.showcow();
//
//    char name[10] = "sdjahf";
//    Cow c3(&name[0],name,1.2);
//    c3.showcow();
//
////
////    Cow c1;
////
////    Cow c2 = Cow("shao", "coding", 120);
////    c2.showcow();
////
////    Cow c3 = c2;  // 复制构造函数
////    c3.showcow();
////
////    c1 = c3;  // 重载赋值运算符
////    c1.showcow();
//






//////////////2
//int main()
//{
//    String2 st1;
//    String2 st2 ("ce shi");
//    String2 st3;
//    st3 = "hello where are you?";
//    String2 st = String2 (st3);
//    cout << st << endl;
//    cout << st1 << endl;
//    cout << st2 << endl;
//    cout << st3 << endl;
//    cin >> st2;
//    st3 = st2 +st3;
//    cout << st3 << endl;
//    st2 = st3 + "my name";
//    cout <<"#1: " << st2 << endl;
//    st2 = "msdyfois" + st3;
//    cout << "#2: " << st2 << endl;
//    st2.Stringup();
//    cout << "#3: " << st2 << endl;
//    cout << "#4: " << st2.has('F') <<endl;
//    st1 = "A00";
//    st2 = "a";
//    cout << "#5: " << (st1 < st2) << endl;
//    cout << "#6: " << (st1 > st2) << endl;
//
//    String2 s1;
//    s1 = "red";
//    String2 rgb[3] = { String2(s1), String2("green"), String2("blue")};
//    cout << "Enter the name of a primary color for mixing light: ";
//    String2 ans;
//    bool success = false;
//    while(cin >> ans)
//    {
//        ans.Stringlow();
//        for(int i = 0; i < 3; ++i)
//        {
//            if(ans == rgb[i])
//            {
//                cout << "That's right!\n";
//                success = true;
//                break;
//            }
//        }
//        if(success)
//            break;
//        else
//            cout << "Try again!" << endl;
//    }
//    cout << "Bye!" << endl;
//}





///////////3.
//const int STKS =  4;
//int main()
//{
//    Stock stocks[STKS] = {
//        Stock("NanoSmart",12,20.0),
//        Stock("Boffo objects",200,2.0),
//        Stock("Monolithic Obelisks",130,3.25),
//        Stock("Fleep Enterprices",60,6.5)
//    };
//    cout <<"stock holdings:\n";
//    int st;
//    for(st = 0; st <STKS;st++)
//    {
//        cout << stocks[st];
//    }
//    const Stock * top = & stocks[0];
//    for(st = 1;st < STKS;st++)
//        top = &top->topval(stocks[st]);
//    cout <<"\nMost valuable holding: \n";
//    cout <<*top;
//
//    Stock st1;
//    cout << st1  << endl;
//    cout << st1.howMany() << endl;
//    cout << stocks[1].howMany() << endl;
//}






//////////4.
//int main()
//{
//    Stack s1;
//    cout << s1.get_top() << endl;
//    Stack s2(20); // 设置大小
//
//    s2.push(10);
//    s2.push(30);
//    s2.push(200);
//    s2.show();
//
//    Stack s3 = s2;
//
//    Item i = 3;
//    cout << "#1: " << i <<endl;
//    cout << "#2: " << s3.get_top() <<endl;
//    cout << true << endl; //1
//    cout << s3.pop(i) << endl;//1
//    cout << i << " is deleted from s3 " << endl;
//    cout << s3.pop(i) << endl;//1
//    cout << "#6: " << i << " is deleted from s3 " << endl;
////    cout << s3.pop(i) << endl;//1
////    cout << "#7: " << i << " is deleted from s3 " << endl;
//
//    s1 = s3;
//    s1.show();
//    s1.pop(i);
//    cout << i << " is deleted from s1 " << endl;
//
//}






////////5.
//const int MIN_PTR_HR = 60;
//bool newcustomer(double x);
//int main()
//{
//    srand(time(nullptr));
//    cout << "sace study: bank of heather automatic teller\n";
//
//    int qs;
//
//    cout << "enter maximum size of queue: ";
//    while(cin >>qs)
//    {
//        Queue line(qs);
//        cout << "enter the number of simulation hours: ";
//        int hours;
//        cin >> hours;
//        long cyclelimmit = MIN_PTR_HR * hours;
//
//        cout << "enter the average number of customer per hour: ";
//        double perhour;
//        cin >> perhour;
//        double min_per_cust;
//        min_per_cust = MIN_PTR_HR / perhour;
//
//        Item temp;
//        long turnaways = 0;
//        long customers = 0;
//        long served = 0;
//        long sum_line = 0;
//        int wait_time = 0;
//        long line_wait = 0;
//
//        for(int cycle = 0;cycle <cyclelimmit;++cycle)
//        {
//            if(newcustomer(min_per_cust)) //新客户
//            {
//                if(line.isfull())
//                    ++turnaways;
//                else
//                {
//                    ++customers;
//                    temp.set(cycle);
//                    line.enqueue(temp);
//                }
//            }
//            if(wait_time <=0 && !line.isempty()) //无客户交易，选第一个交易
//            {
//                line.dequeue(temp);
//                wait_time = temp.ptime();
//                line_wait += cycle - temp.when();
//                ++served;
//            }
//            if(wait_time > 0)
//            {
//                --wait_time;
//            }
//            sum_line += line.queuecount();
//        }
//
//        if(customers > 0 && ((double)line_wait / served == 1))
//        {
//            cout << "customers accepted: "<< customers << endl;
//            cout << "customers served：" << served <<endl;
//            cout << " turn aways:   " << turnaways << endl;
//            cout << " average queue size: ";
//            cout.precision(2);
//            cout.setf(ios_base::fixed,ios_base::floatfield);
//            cout << "average wait time: " << (double)line_wait / served << "minutes" <<endl;
//            break;
//        }else if(customers <= 0)
//        {
//            cout << "no customer!\n";
//        }
//        else
//        {
//            cout << "wait time do not pare to 1.\n";
//            if((double)line_wait / served >1 )
//            {
//                cout << "average wait time is " << (double)line_wait / served << ">1.\n";
//            }
//            else
//            {
//                cout << "Average wait time  is "<< (double)line_wait / served << " < 1 .\n" ;
//            }
//        }
//        cout << "enter maximum size of queue: ";
//    }
//}
//
//bool newcustomer(double x)
//{
//	return (std::rand() * x / RAND_MAX < 1);
//}
//





///////////6
const int MIN_PTR_HR = 60;
bool newcustomer(double x);
int main()
{
    srand(time(nullptr));
    cout << "sace study: bank of heather automatic teller\n";

    int qs;

    cout << "enter maximum size of queue: ";
    while(cin >>qs)
    {
        Queue line1(qs),line2(qs);
        cout << "enter the number of simulation hours: ";
        int hours;
        cin >> hours;
        long cyclelimmit = MIN_PTR_HR * hours;

        cout << "enter the average number of customer per hour: ";
        double perhour;
        cin >> perhour;
        double min_per_cust;
        min_per_cust = MIN_PTR_HR / perhour;

        Item temp[2];
        long turnaways = 0;
        long customers = 0;
        long served = 0;//被服务人数
        long sum_line = 0;
        int wait_time[2] = {0,0};//各队等待时长
        long line_wait = 0;//所有人总时长

        for(int cycle = 0;cycle <cyclelimmit;++cycle)
        {
            if(newcustomer(min_per_cust)) //新客户
            {
                if(line1.isfull()&&line2.isfull())
                    ++turnaways;
                else if(line1.queuecount()<line2.queuecount())
                {
                    ++customers;
                    temp[0].set(cycle);
                    line1.enqueue(temp[0]);
                }
                else
                {
                    ++customers;
                    temp[1].set(cycle);
                    line2.enqueue(temp[1]);
                }
            }
            if(wait_time[0] <=0 && !line1.isempty()) //无客户交易，选第一个交易
            {
                line1.dequeue(temp[0]);
                wait_time[0] = temp[0].ptime();
                line_wait += cycle - temp[0].when();
                ++served;
            }
            if(wait_time[1] <=0 && !line2.isempty()) //无客户交易，选第一个交易
            {
                line2.dequeue(temp[1]);
                wait_time[1] = temp[1].ptime();
                line_wait += cycle - temp[1].when();
                ++served;
            }
            if(wait_time[0] > 0)
            {
                --wait_time[0];
            }
            if(wait_time[1] > 0)
            {
                --wait_time[1];
            }
            sum_line += line1.queuecount() + line2.queuecount();
        }

        if(customers > 0)
        {
            cout << "customers accepted: "<< customers << endl;
            cout << "customers served：" << served <<endl;
            cout << " turn aways:   " << turnaways << endl;
            cout << " average queue size: ";
            cout.precision(2);
            cout.setf(ios_base::fixed,ios_base::floatfield);
            cout << (double)sum_line / cyclelimmit / 2 << endl;
            cout << "average wait time: " << (double)line_wait / served << "minutes" <<endl;
            break;
        }else if(customers <= 0)
        {
            cout << "no customer!\n";
        }
//        else
//        {
//            cout << "wait time do not pare to 1.\n";
//            if((double)line_wait / served >1 )
//            {
//                cout << "average wait time is " << (double)line_wait / served << ">1.\n";
//            }
//            else
//            {
//                cout << "Average wait time  is "<< (double)line_wait / served << " < 1 .\n" ;
//            }
//        }

            if(double(line_wait / served ==1))
            {
                break;
            }
        cout << "enter maximum size of queue: ";
    }
}

bool newcustomer(double x)
{
	return (std::rand() * x / RAND_MAX < 1);
}


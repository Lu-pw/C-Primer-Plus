#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <cstring>

using namespace std;

//int main()
//{
//    cout << "Hello world!" << endl;
//    return 0;
//}


//void set(int arr[];int size;int value)
//{
//    for(int i = 0;i <size; i++)
//    {
//        arr[i] = value;
//    }
//}

//void set(int *begin,int *end,int value)
//{
//    for(int *p = begin; p != end;p++)
//    {
//        *p = value;
//    }
//}
//int main()
//{
//    int arr[5] = {0,0,0,0,0};
//    set(&arr[0],&arr[5],1);
//    for(int i = 0; i< 5;i++)
//        cout << arr[i] <<"\t";
//}


////
//double num(const int* p_arr,int len)
//{
//    int number = *p_arr;
//    for(int i=1;i<len;i++)
//    {
//        if(number < *(p_arr + i))
//        {
//            number = *(p_arr + i);
//        }
//    }
//    return number;
//}
//int main()
//{
//    double zero;
//    int arr[5] = {1,5,4,2,3};
//    zero = num(&arr[0],5);
//    cout << zero << endl;
//}


////
//int replace1(char *str,char c1,char c2)
//{
//    int count1 = 0;
//    for(;*str != EOF;str++ )
//    {
//        if(*str == c1)
//        {
//            *str = c2;
//            count1++;
//        }
//    }
//    return count1;
//}
//int main()
//{
//    int count1;
//    char ch[7] = "asksc1";
//    char c1 = 's';
//    char c2 = 'b';
//    count1 = replace1(&ch[0],c1,c2);
//    cout << ch << "\t" << count1 <<endl;
//}



////
//struct app1icant
//{
//    char name[30];
//    int credit_ratings[3];
//};
//void app(app1icant app1);
//int main()
//{
//    app1icant applicante={"lisa", {0,1,2}};
//    app(applicante);
//}
//void app(app1icant app1)
//{
//    cout << app1.name;
//    cout << app1.credit_ratings[1];
//}
//

////数据结构一维调用
//struct app1icant
//{
//    char name[30];
//    int credit_ratings[3];
//};
//void app(const app1icant *app1);
//int main()
//{
//    app1icant applicante={"lisa", {0,1,2}};
//    app(&applicante);
//}
//void app(const app1icant *app1)
//{
//    cout << app1->name;
//    cout << app1->credit_ratings[1];
//}


////
//void f1(applicant *a);
//void char * f2(cosnt applicant *a1,const applicant * a2);
//typedef void (*p_f1)(applicant *);
//p_f1 p1 = f1;
//typedef const char *(* p_f2)(const applicant *,const applicant *);
//p_f2 p2 = f2;
//p_F1 ap[5];
//p_f2 (*pa)[10];


////1.
//double aver(double ,double );
//int main()
//{
//    cout << "please enter two number: ";
//    double x,y;
//    cin >> x >> y;
//    double result;
//    result = aver(x,y);
//    cout << result;
//}
//double aver(double a,double b)
//{
//    double mean;
//    mean = 2 * a * b / (a+b);
//    return mean;
//}



////2.
//int input(double *p_score);
//void display(double *p,int len);
//void aver(double *p,int len);
//int main()
//{
//    double score[10];
//    int len;
//    len = input(&score[0]);
//    display(&score[0],len);
//    aver(&score[0],len);
//}
//int input(double *p_score)
//{
//    double num;
//    int i=0;
//    cout << "enter \"end\" to end;";
//    cout << "enter your score: ";
//    while(cin >> num)
//    {
//        if(isdigit(num))
//        {
//            break;
//        }
//        *(p_score+i) = num;
//        i++;
//        cout << "enter your score: ";
//    }
//    return i;
//}
//void display(const double *p,int len)
//{
//    for(int i = 0; i<len;i++)
//    {
//        cout << *(p+i) << "\t";
//    }
//    cout<<endl;
//}
//void aver(const double *p,int len)
//{
//    double aver1 = 0;
//    for(int i=0;i<len;i++)
//    {
//        aver1 += *(p+i)/len;
//    }
//    cout << aver1;
//};


////3.
//struct box
//{
//    char maker[40];
//    float height;
//    float width;
//    float length;
//    float volume;
//};
//void input(box &);
//void calc(box * );
//void display(box * p_box);
//int main()
//{
//    box T_box {"lara",1,1,1};
//    input(T_box);
//    calc(&T_box);
//    display(&T_box);
//}
////此处用引用解决赋值问题
//void input(box &T_box)
//{
//    cout << "enter the maker: ";
////    getline(cin,*T_box.maker);
//    cout << "... height: ";
//    cin >> T_box.height >> T_box.width >>
//        T_box.length >> T_box.volume ;
//}
//void display(box * p_box)
//{
//    cout << p_box -> maker;
//    cout << p_box -> height << p_box->width <<
//     p_box->length << p_box->volume;
//}
//void calc(box * c_box)
//{
//    c_box->volume = c_box->height * c_box->length * c_box->width;
//}



////4.
//long double probability(unsigned numbers,unsigned picks);
//int main()
//{
//    using namespace std;
//    double total,choices;
//    double result=0;
////    for (int i=0;i<2;i++){
//        cout << "enter the total numbers of card \n"
//        "the number of picks allowed:\n";
//        while((cin >> total >> choices) && choices <= total)
//        {
//
//            result += probability(total,choices);
//
//            cout << "next two numbers(q to quit): ";
//        }
////    }
//    cout<< "you have one chance in ";
//    cout << result;
//    cout << " of winning.\n";
//    cout << "bye!\n";
//    return 0;
//}
//long double probability(unsigned numbers,unsigned picks)
//{
//    long double result = 1.0;
//    long double n;
//    unsigned p;
//
//    for(n = numbers,p = picks;p>0;n--,p--)
//    {
//        result = result * n / p;
//    }
//    return result;
//}



////5.
//void factorial( int p);
//int main()
//{
//    cout << "enter the number: ";
//    int num;
//    while(cin >> num)
//    {
//        factorial(num);
//    }
//
//}
//void factorial( int p)
//{
//    double result = 1.0;
//    for(p;p>0;p--)
//    {
//        result *= p;
//    }
//    cout << result << endl;
//}


////6.
//int Fill_array(double *p,int len );
//void show_array(const double *p,int len);
//void rever_array(double *p,int len);
//int main()
//{
//    int Asize = 5;
//    double arr[Asize];
//    int count1;
//    count1 = Fill_array(&arr[0],Asize);
////    cout << count1;
//    show_array(&arr[0],count1);
//    rever_array(&arr[0],count1);
//    show_array(&arr[0],count1);
//}
//int Fill_array(double* p_arr,int len)
//{
//    int i=0;
//    double num;
//    cout << "enter the num: ";
//    while(i<len && cin >> num){
//        *(p_arr+i) = num;
//        i++;
//    }
//    return i;
//}
//void show_array(const double *p,int len)
//{
//    for(int i=0;i<len;i++)
//    {
//        cout << *( p+ i ) << "\t";
//    }
//    cout << endl;
//}
//void rever_array(double *p,int len)
//{
//   double temp;
//   for(int i = 1;i<len/2;i++)
//   {
//       temp = *(p+i);
//       *(p+i) = *(p+len-1-i);
//       *(p+len-1-i) = temp;
//   }
//}



////7.
//int fill_array(double *ar_begin, double *ar_end)
//{
//    double temp = 0.0;
//    int i = 0;
//    double *ar_tmp = nullptr;
//    for (ar_tmp = ar_begin; ar_tmp < ar_end; ar_tmp++)
//    {
//        cout << "Enter value #" << (i + 1) << ": ";
//        cin >> temp;
//        if (!cin)
//        {
//            cin.clear();
//            while (cin.get() != '\n')
//                continue;
//            cout << "Bad input; input preocess terminated.\n";
//            break;
//        }
//        else if (temp < 0)
//        {
//            break;
//        }
//
//        *ar_tmp = temp;
//        i++;
//    }
//
//    return i;
//}
//void show_array(const double *ar_begin, const double *ar_end)
//{
//    const double *ar_tmp = nullptr;
//    unsigned int i = 0;
//    for (ar_tmp = ar_begin; ar_tmp < ar_end; ar_tmp++)
//    {
//        cout << "Property #" << (i + 1) << ": $";
//        cout << *ar_tmp << endl;
//        i++;
//    }
//}
//void revalue(double *ar_begin, double *ar_end, double r)
//{
//    for (double * ar = ar_begin; ar < ar_end; ar++)
//    {
//        *ar *= r;
//    }
//}
//int main()
//{
//    double properties[10];
//
//    int size = fill_array(properties, properties + 10);
//    show_array(properties, properties + size);
//    if (size > 0)
//    {
//        cout << "Enter revaluation factor: ";
//        double factor;
//        while (!(cin >> factor))
//        {
//            cin.clear();
//            while (cin.get() != '\n')
//                continue;
//            cout << "Bad input; Please enter a number: ";
//        }
//        revalue(properties, properties + size, factor);
//        show_array(properties, properties + size);
//    }
//
//    cout << "Done.\n";
//
//}


//8.
////a.
//void input(double *exp,int len);
//void show(double *exp,int len);
//int main()
//{
//    const char *season[20] = {"spring","summer","autumn","winter"};
//    double expense[4];
//    input(expense,4);
//    show(expense,4);
//
//}
//void input(double *exp,int len)
//{
//    for(int i=0;i<len;i++)
//    {
//        cout << "enter your expence #";
//        cout << (i+1);
//        cout << ": ";
//        int num;
//        cin >> *(exp+i);
//    }
//}
//void show(double *exp,int len)
//{
//    for(int i=0;i<len;i++)
//    {
//        cout << *(exp+i) << "\t";
//    }
//}
////b.
//struct cost
//{
//    double expenses[4];
//};
//void input(cost *exp,int len);
//void show(cost *exp,int len);
//int main()
//{
//    const char *season[20] = {"spring","summer","autumn","winter"};
//    cost *t_cost = new cost;
//    input(t_cost,4);
//    show(t_cost,4);
//
//}
//void input(cost *exp,int len)
//{
//    for(int i=0;i<len;i++)
//    {
//        cout << "enter your expence #";
//        cout << (i+1);
//        cout << ": ";
//        int num;
//        cin >> exp->expenses[i];
//    }
//}
//void show(cost *exp,int len)
//{
//    for(int i=0;i<len;i++)
//    {
//        cout << exp -> expenses[i] << "\t";
//    }
//}



////9.数据结构数组应用
//const int SLEN = 30;
//struct student
//{
//    char fullname[SLEN];
//    char hobby[SLEN];
//    int ooplevel;
//};
//int getinfo(student *p,int);
//void display1(student st);
//void display2(const student *);
//void display3(const student pa[],int n);
//int main()
//{
//    student *ptr_st = new student[3];
//    getinfo(ptr_st,3);
//    for(int i=0;i< 3;i++)
//    {
////        display1(ptr_st[i]);
//
//    }
//    display2(&ptr_st[0]);
//    display3(ptr_st,3);
//}
//int getinfo(student *p,int len)
//{
//    for(int i=0;i<len;i++)
//    {
//        cout << "enter the name #";
//        cout << (i+1);
//        cout << " : ";
//        cin.getline(p[i].fullname,SLEN);
//        cout << "enter the hobby: ";
//        cin.getline(p[i].hobby,SLEN);
//        cout <<"enter the ooplevel: ";
//        cin >> p[i].ooplevel;
//        cin.get();
//    }
//}
//void display1(student st)
//{
//    cout << "name: "<< st.fullname << endl;;
//    cout << "hobby: " << st.hobby << endl;
//    cout << "oop: " << st.ooplevel << endl;
//}
//void display2(const student* ps)
//{
//    for(int i=0;i<3;i++)
//    {
//        cout << (ps+i)->fullname;
//        cout << "\t";
//        cout <<(ps+i) -> hobby << "\t";
//        cout <<(ps+i) -> ooplevel << "\n";
//    }
//}
//void display3(const student pa[],int n)
//{
//    for(int i=0;i<n;i++)
//    {
//        cout << pa[i].fullname << "\t";
//        cout << pa[i].hobby << "\t";
//        cout <<pa[i].ooplevel << "\n";
//    }
//}



//10.函数指针
double ass(double x,double y)
{
    return x*y;
}
double calculate(double,double,double(*fun)(double ,double));
int main()
{
    double a,b ;
    cout << "enter a: ";
//    cin >> a;
    cout <<"\t enter b: ";
//    cin >> b;
    while(cin >> a && cin >> b )
    {
        cout << "\n sum = ";
        cout << calculate(a,b,ass)<< endl;
    }
}
double calculate(double x,double y,double(*fun)(double ,double))
{
    return fun(x,y);
}

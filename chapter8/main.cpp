#include <iostream>
#include <string>
#include <cstring>
using namespace std;

//int main()
//{
//    cout << "Hello world!" << endl;
//    return 0;
//}


/////
//struct box
//{
//    char maker[40];
//    float height;
//    float width;
//    float length;
//    float volume;
//};
//void p_box(box& t_box);
//void change(box& t_box);
//int main()
//{
//    box m_box
//    {
//        "ajfklas",
//        10,
//        10,
//        20,
//        50,
//    };
//    p_box(m_box);
//    change(m_box);
//    p_box(m_box);
//
//}
//void p_box(box& t_box)
//{
//    cout << t_box.maker<<"\t";
//    cout << t_box.height<<"\t";
//    cout <<t_box.width<<"\t";
//    cout << t_box.length<<"\t";
//    cout << t_box.volume<<endl;
//}
//void change(box & t_box)
//{
//    t_box.volume = t_box.height * t_box.width * t_box.length;
//}

/////////7.
//template<class T>
//T big(T a,T b)
//{
//    if(a > b)
//    {
//        return a;
//    }else{return b;};
//}
//
//int main()
//{
//    double X=1,Y=2;
//    cout << big(X,Y);
//}



////////8.
//回顾结构与函数调用
//struct box
//{
//    char maker[40];
//    float height;
//    float width;
//    float length;
//    float volume;
//};
//void max(box p_box[])
//{
//    cout << p_box[1].height;
//}
//int main()
//{
//    box box1[2] = {{"asdf",10,20,30,40,},{"fgf",21,32,65,32,}};
//    max(box1);
//}

////定义模板类298页第9题？？？
//struct box
//{
//    char maker[40];
//    float height;
//    float width;
//    float length;
//    float volume;
//};
//template<>box max(box box1,box box2)
//{
//    return box1.volume ;
//};
////> box1[0].volume ?box1[1].volume : box1[0].volume
//int main()
//{
//    box  box1 {"asdf",10,20,30,40,};
//    box  box2 {"fgf",21,32,65,32,};
//
//}


//////1.
////void output(string p,int i=0)
////{
////    cout << p << endl;
////    if(i>1)
////    {
////        i--;
////        output(p,i); //此处p为words副本
////    };
////
////}
////int main()
////{
////    string words = "hello world!";
////
////    output(words,2);
////}
//
////分析两者弄清函数调用
//void output(string *p,int i=0)
//{
//    cout << *p << endl;
//    if(i>1)
//    {
//        i--;
//        output(p,i);//此处p用于代替&words
//    };
//
//}
//int main()
//{
//    string words = "hello world!";
//
//    output(&words,2);
//}




////2.
//struct CandyBar
//{
//    char name[20];
//    double weight;
//    int heat;
//};
//void input(CandyBar &);
//int main()
//{
//    CandyBar t_candy;
//    input(t_candy);
//    cout << t_candy.name;
//}
//void input(CandyBar & cop_candy)
//{
//    cout << "name: ";
//    cin.getline(cop_candy.name,20);
//    cin >> cop_candy.weight;
//    cin >> cop_candy.heat;
//}



////3.
//void big(string &,int);
//int main()
//{
//    cout << " enter your words: ";
//    string word;
//    int len;
//    while(getline(cin,word))
//    {
//        cout << "print your words: \n";
//        len = word.length();
//        big(word,len);
//    }
//}
//void big(string & words,int len)
//{
//
//    for(int i=0;i<len;i++ )
//    {
//        cout << (char)toupper(words[i]);
//    }
////    cout << (char)toupper('h');
//
//}




////4.
//struct stringy
//{
//    char * str;
//    int ct;
//};
//void set1(stringy& beany,char * testing)
//{
//    int string_len = strlen(testing);
//    beany.str = new char(string_len+1);
//    strcpy(beany.str,testing);
//    beany.ct= string_len;
//}
//void show(const stringy & beany,int print_times = 1)
//{
//    for(int i=0;i<print_times;i++)
//    {
//        cout << beany.str <<endl;
//    }
//
//}
//void show(const char *str ,int print_times = 1)
//{
//    for(int i=0;i<print_times;i++)
//    {
//        cout << str << endl;
//    }
//}
//int main()
//{
//    stringy beany;
//    char testing[] = "reality isn't what it used to be.";
//
//    set1(beany,testing);
//
//
//    show(beany);
//    show(beany,2);
//    testing[0] = 'F';
//    testing[1] = 'u';
//    show(testing);
//    show(testing,3);
//    show("Done!");
//}


//struct stringy {
//    char *str;
//    int ct;
//};
//void set(struct stringy &in_stringy, char * in_string)
//{
//    int string_length = strlen(in_string);
//    in_stringy.str = new char(string_length + 1);
//    strcpy(in_stringy.str, in_string);
//    in_stringy.ct = string_length;
//}
//void show(const struct stringy &in_stringy, int print_times = 1)
//{
//    for (int i = 0; i < print_times; i++)
//    {
//        cout << "member string of struct stringy: " << in_stringy.str << endl;
//    }
//}
//void show(const char * str, int print_times = 1)
//{
//    for (int i = 0; i < print_times; i++)
//    {
//        cout << "Print char string: " << str << endl;
//    }
//}
//int main(void)
//{
//    stringy beany;
//    char testing[] = "Reality isn't what it used to be.";
//
//    set(beany, testing);
//    show(beany);
//    show(beany, 2);
//    testing[0] = 'D';
//    testing[1] = 'u';
//    show(testing);
//    show(testing, 3);
//    show("Done!");
//
//    return 0;
//}




//////5.
////template<class T>
////T max5(T inarry[])
////{
////    T T_max = inarry[0];
////    for(int i = 1;i < 5;i++)
////    {
////        if(T_max < inarry[i])
////        {
////            T_max = inarry[i];
////        }
////    }
////    return T_max;
////}
////int main()
////{
////    int arr[5] = {1,5,2,4,3};
////    double ar[5] = {1.2,6.5,3.5,2.4,1.3};
////    cout << max5(arr) << "\t" << max5(ar);
////
////}
//
//
//
////6.
//template<class T>
//T maxn(T arr[],int len)
//{
//    T T_max = arr[0];
//    for(int i=1;i<len;i++)
//    {
//        if(T_max < arr[i])
//        {
//            T_max = arr[i];
//        }
//    }
//    return T_max;
//}
////template <> const char *maxn(const char *arr[],int len)
////{
////    const char *str = arr[0];
//////    cout << arr[0];
////    for(int i=1;i<len ;i++)
////    {
////        if(strlen(arr[i])>strlen(str))
////        {
////            str = arr[i];
////        };
////    }
////    return str;
////}
//
//// 显示具体化
//template <> const char * maxn(const char *in_str[], int n)
//{
//    const char * str = in_str[0];
//
//    for (int i = 1; i < n; i++)
//    {
//        if (strlen(str) < strlen(in_str[i]))
//        {
//            str = in_str[i];
//        }
//    }
//    return str;
//}
//int main()
//{
//    int arr_int[6] = {1,6,5,8,2,3};
//    double arr_dou[4] = {1.2,6.3,5.2,3};
//    cout << maxn(arr_int,6) <<"\t";
//    const char *p[] = {"ads","fdsf dfa dsaf","few"};
////    cout << p;//p为地址
//    const char *length =  maxn(p,3);
//    cout << length<<endl;
//}


////b.
//template <typename T>
//T maxn(T in_array[], int array_size)
//{
//    T max = in_array[0];
//    for (int i = 0; i < array_size; i++)
//    {
//        if (max < in_array[i])
//        {
//            max = in_array[i];
//        }
//    }
//
//    return max;
//}
//// 显示具体化
//template <> const char * maxn(const char *in_str[], int n)
//{
//    const char * str = in_str[0];
//
//    for (int i = 0; i < n; i++)
//    {
//        if (strlen(str) < strlen(in_str[i]))
//        {
//            str = in_str[i];
//        }
//    }
//
//    return str;
//}
//int main(void)
//{
//    int int_array[6] = { 43, 235, 54, 232, 123, 65 };
//    double double_array[4] = { 32.1, 453.2, 53.3, 67.4 };
//    const char * str_array[5] = { "Hello Jimmy!", "Hello World!", "ABCDEFG,HIJKLMN", "Today is a goood day!", "C++ Primer Plus!" };
//
//    int int_max = maxn(int_array, 6);
//    double double_max = maxn(double_array, 4);
//    const char * length_max_str = maxn(str_array, 5);
//
//    cout << "max of int array: " << int_max << endl;
//    cout << "max of double array: " << double_max << endl;
//    cout << "max length string of string array: " << length_max_str << endl;
//}



////7.
template <typename T>
void show_array(T arr[],int n);

template <typename T>
void show_array(T * arr[],int n);

struct debts
{
    char name[50];
    double amount;
};

int main()
{
    int things[6] = {13,31,103,301,310,130};
    struct debts mr_E[3] =
    {
        {"Ima Wolfe",2400.0},{"Ura Foxe",1300.0},{"Iby Stout",1800.0}
    };
    double * pd[3];

    for (int i=0;i<3;i++)
    {
        pd[i] = &mr_E[i].amount;
    }
//    cout << pd[0];//是地址
    cout << "listing mr.E's couts of things:\n";

    show_array(things,6);
    cout << "of debt:\n";
    show_array(pd,3);

}

template <typename T>
void show_array(T arr[],int n)
{
    cout << "template A\n";
    int result = 0;
    for(int i=0;i<n;i++)
    {
        result += arr[i] ;
    }
    cout <<result <<endl;
}

template <typename T>
void show_array(T * arr[],int n)
{
    cout << "template B\n";
    T result=0;
    for(int i=0;i<n;i++)
    {
        result += *arr[i] ;
    }
    cout <<result << endl;
}

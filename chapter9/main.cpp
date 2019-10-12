#include "golf.h"
//using namespace std;
#include "sales.h"
//int main()
//{
//    cout << "Hello world!" << endl;
//    return 0;
//}

/*练习*/
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


//5.方法一：设置属性链接为内部

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


////方法二：使用命名空间；
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



////6.命名空间内容在同一文件中生效，增加名称A后失效
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

//using namespace std;
//void other();
//void another();
//double x = 10;
//int y;
//
//int main()
//{
//    cout << x << endl;
//    {
//        int x=4;
//        cout << x<<endl;
//        cout << y<< endl;
//    }
//    other();
//    another();
//}
//void other() // 调用的double
//{
//    int y =1;
//    cout << "other: " << x << "\t" <<y <<"\t" << sizeof(x) <<endl;
//}




/*以下为编程部分*/

////1.
//using namespace std;
//int main()
//{
////    golf ann;
////    setgolf(ann,"Ann Birdfree",24);
////
////    golf andy;
////    setgolf(andy);
////    showgolf(ann);
//    golf anna[3];
//    int i;
//    for( i = 0;i<3;i++)
//    {
//        if(setgolf(anna[i])==0)
//        {
//            break;
//        }
//         cin.get();
//    }
//    for(int j=0;j<i;j++)
//    {
//        showgolf(anna[j]);
//    }
//}



////2.
//const int ArSize = 10;
//void strcount (const string str);
//int main()
//{
//    using namespace std;
//    string input;
//    char next;
//
//    cout << "enter a line: \n";
//    getline(cin,input);
//    while(cin)
//    {
//        strcount(input);
//        cout << "enter next line (empty line to quit):\n";
//        getline(cin,input);
//        if(input == "")
//        {
//            break;
//        }
//    }
//    cout << "bye!\n";
//}
//void strcount(const string str)
//{
//    using namespace std;
//    static int total = 0;
//    int count = 0;
//
//    cout << "\"" << str << "\" conrains";
//    while(str[count])
//    {
//        count ++;
//    }
//    total += count;
//    cout << count << " characters\n";
//    cout <<total <<" characters total\n";
//}



////3.
//struct chaff
//{
//    char dross[20];
//    int slag;
//};
//void input(chaff * t_buf);
//void show(chaff * p_buf);
//int main()
//{
//    chaff * buffer = new chaff[2];
//    input(buffer);
//    show(buffer);
//    delete [] buffer;
//}
//void input(chaff * t_buf)
//{
//    for(int i=0;i<2;i++)
//    {
//        cout << "enter dross: ";
//        cin.getline(t_buf[i].dross,20);
//        cout << "enter slag: ";
//        cin >> t_buf[i].slag;
//        cin.get();
//    }
//
//}
//void show(chaff * p_buf)
//{
//    for(int i = 0;i<2;i++)
//    {
//        cout<< p_buf[i].dross <<"\t";
//        cout << p_buf[i].slag<<endl;
//    }
//}


//struct chaff {
//    char dross[20];
//    int slag;
//};
//char buffer[1024];
//int main(void)
//{
//    chaff *pcha = new (buffer) chaff[2];
//    char *pc = new char[1024];
//    chaff *pcha2 = new (pc) chaff[2];
//    char dross[20] = { 0 };
//    int slag = 0;
//
//    for (int i = 0; i < 2; i++)
//    {
//        cout << "Enter dross of #" << i << " chaff: " << endl;
//        cin.getline(dross, 20);
//        cout << "Enter slag of #" << i << " chaff: " << endl;
//        cin >> slag;
//        cin.get();
//
//        strcpy(pcha[i].dross, dross);
//        strcpy(pcha2[i].dross, dross);
//        pcha[i].slag = pcha2[i].slag = slag;
//    }
//
//    for (int i = 0; i < 2; i++)
//    {
//        cout << "staff #" << (i + 1) << ":" << endl;
//        cout << "pcha.dross: " << pcha[i].dross << ". pcha.slag: " << pcha[i].slag << endl;
//        cout << "pcha2.dross: " << pcha2[i].dross << ". pcha2.slag: " << pcha2[i].slag << endl;
//    }
//
//    cout << "address of buffer: " << (void *)buffer << endl;
//    cout << "address of pcha: " << pcha << ". address of pcha[0]: " << &pcha[0] << ". address of pcha[1]: " << &pcha[1] << endl;
//    cout << "address of pc: " << (void *)pc << endl;
//    cout << "address of pcha2:" << pcha2 << ". address of pcha2[0]: " << &pcha2[0] << ". address of pcha2[1]: " << &pcha2[1] << endl;;
//
//    delete[] pc;
//}



//4.
//int main()
//{
//    SALES::Sales sales1;
//    SALES::Sales sales2;
//
//    double ar[3] = {2.1,3.2,6.3};
//    SALES::setSales(sales1,ar,3);
//    SALES::showSales(sales1);
//    SALES::setSales(sales2);
//    SALES::showSales(sales2);
//}
using namespace SALES;
int main()
{
    Sales sales1;
    Sales sales2;

    double ar[3] = {2.1,3.2,6.3};
    setSales(sales1,ar,3);
    showSales(sales1);
    setSales(sales2);
    showSales(sales2);
}

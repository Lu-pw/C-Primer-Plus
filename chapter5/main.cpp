#include <iostream>
#include <array>
#include <string>
#include <cstring>
using namespace std;

////1.
//int main()
//{
//    int i,j;
//   cout << "enter two number: ";
//   cin >> i;
//   cin >> j;
//   int temp;
//   if (i > j)
//   {
//       temp = i;
//       i = j;
//       j = temp;
//   }
//   int sum = 0;
//   for (int k = i;k <= j;k++)
//   {
//       sum += k;
//   }
//   cout << "sum = " << sum;
//}

////2.
//const int ArSize = 16;
//int main()
//{
//    array<long double,ArSize+1> factorials;
//    factorials[1] = factorials[0] = 1;
//    for(int i = 2; i < ArSize;i++)
//        factorials[i] = factorials[i-1] * i;
//    for (int i = 0; i < ArSize;i++)
//        cout << i << " != " << factorials[i] << endl;
//}


////3.
//int main()
//{
//    double sum=0,i;
//    do{
//        cout << "enter your number: " ;
//        cin >> i;
//        sum += i;
//        cout << "sum = " << sum << endl;
//    }while(i != 0);
//}
//
//void p5_3(void)
//{
//    int sum = 0;
//    int num = 0;
//
//    while (1)
//    {
//        cout << "Enter a number( 0 to exit): ";
//        cin >> num;
//        if (num == 0)
//        {
//            break;
//        }
//        sum += num;
//        cout << "Until now, the sum of the number you inputed is " << sum << endl;
//    }
//
//    cout << "Done." << endl;
//
//    return;
//}


////4.
//int main()
//{
//    double Daphne,Cleo;
//    Daphne = 100;
//    Cleo = 100;
//    int i = 0;//第i年
//    while(Cleo <= Daphne)
//    {
//        i++;
//        Daphne += 100*0.1;
//        Cleo += Cleo*0.005;
//    }
//    cout << "第" <<i<<"年: Cleo: " <<Cleo<< " Daphne: " << Daphne;
//}


////5.
//int main()
//{
////    string month[] = { "January", "February", "March", "April", "May", "June", "July", "August", "Septempber", "October", "November", "December" };
//    char month[][20] = { "January", "February", "March", "April", "May", "June", "July", "August", "Septempber", "October", "November", "December" };
//    int num;
//    for(int i = 1;i<= 12;i++)
//    {
//        cout << "第" <<month[i-1]<<"月销售量为： ";
//        cin >> num;
//    }
//}



////6.
//int main()
//{
////    string month[] = { "January", "February", "March", "April", "May", "June", "July", "August", "Septempber", "October", "November", "December" };
//    char month[][20] = { "January", "February", "March", "April", "May", "June", "July", "August", "Septempber", "October", "November", "December" };
//    int num[10][12];
//    for (int year = 1;year < 4;year ++)
//    {
//        cout << "第" << year << "年" <<endl;
//        for(int i = 1;i<= 12;i++)
//        {
//            cout << "第" <<month[i-1]<<"月销售量为： ";
//            cin >> num[year-1][i-1];
//        }
//    }
//    for (int year = 1;year < 4;year ++)
//    {
//        cout << "第" << year << "年" <<endl;
//        for(int i = 1;i<= 12;i++)
//        {
//            cout << "第" <<month[i-1]<<"月销售量为： ";
//            cout << num[year-1][i-1] << endl;
//        }
//        cout << endl;
//    }
//}



////7.
//int main()
//{
//    int nums;
//    cout << "enter the nums: ";
//    cin >> nums;
//    cin.get();//此处记得清除换行键带来的干扰
//    typedef struct Car
//    {
//        string name;
//        int year;
//    }T_Car;
//    T_Car *car = new T_Car[nums];
//    for(int i = 0;i<nums;i++)
//    {
//        cout << "enter the name: ";
//        getline(cin,car[i].name);
//        cout << "enter the year: ";
//        cin >> car[i].year;
//        cin.get();
//    };
//    for(int i=0;i<nums;i++)
//    {
//        cout << car[i].year << "\t" << car[i].name <<endl;
//    }
//}



////8.
//int main()
//{
//    unsigned int n_word = 0;
//    char input[128];
//    cout << "Enter words (to stop, type the word done):" << endl;
//    while (cin >> input)
//    {
//        if (strcmp(input, "done"))
//        {
//            n_word++;
//        }
//        else
//            break;
//    }
//
//    cout << "You entered a total of " << n_word << " words." << endl;
//    for(int i=0;i < n_word; i++)
//    {
//        cout<<input[i];
//    }
//}



////9.
//int main()
//{
//    string word;
//    int num = 0;
//    while(getline(cin,word))
//    {
//        if(word != "done")
//        {
//            num ++;
//        }else{
//            break;
//        }
//    }
//    cout << num << endl;
//}



//10.
int main()
{
    cout << "enter the num: ";
    int num;
    cin >> num;
    for(int i=0;i<num;i++)
    {
        for(int j = num - i - 1; j > 0;j--)
        {
            cout << ".";
        }
        for(int j = 0;j<=i;j++)
        {
            cout<< "*";
        }
        cout << endl;
    }
}

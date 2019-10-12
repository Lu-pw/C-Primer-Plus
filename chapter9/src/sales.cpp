/*作者：lu
  日期：
  版权：

*/ #include "sales.h"

using namespace std;
namespace SALES
{
    void setSales(Sales &s,const double ar[],int n)
        {

        cout << "enter the sales: ";
        for(int i = 0;i<n;i++)
        {
            s.sales[i] = ar[i];
        }
        s.max = ar[0];
        s.min = ar[0];
        for(int i =0;i < n;i++)
        {
            s.average += ar[i] / n;
            if(s.max < ar[i])
            {
                s.max = ar[i];
            }
            if(s.min > ar[i])
            {
                s.min = ar[i];
            }
        }
    }
    void setSales(Sales & s)
    {
        cout <<"sales: ";
        double input,max1,min1,total;
        cout << "Enter 4 double number; " << endl;
        for (size_t i = 0; i < QUARTERS; i++)
        {
            cin >> input;
            if (i == 0)
            {
                max1 = input;
                min1 = input;
            }
            if (min1 > input)
            {
                min1 = input;
            }
            if (max1 < input)
            {
                max1 = input;
            }
            total += input;
            s.sales[i] = input;
        }
        s.average = total / QUARTERS;
        s.max = max1;
        s.min = min1;
    }
    void showSales(const Sales & s)
    {
        cout << "sales: ";
        for (size_t i = 0; i < QUARTERS; i++)
        {
            cout << s.sales[i] << " ";
        }

        cout << endl;
        cout << "average: " << s.average << endl;
        cout << "max: " << s.max << endl;
        cout << "min: " << s.min << endl;
    }

}

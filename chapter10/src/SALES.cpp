/*作者：lu
  日期：
  版权：
*/ #include "SALES.h"

SALES::SALES()
{
    //ctor


}
void SALES::setSales(const double ar[],int n)
{
    for (int i=0;i<n;i++)
    {
        sales[i] = ar[i];
    }
}
void SALES::setSales()
{
    int len = sizeof(sales)/sizeof(sales[0]);
    average = sales[0] / len;
    max1 = sales[0];
    min1 = sales[0];
    for (int i = 1;i<len;i++)
    {
        average += sales[i] / len ;
        if(max1 < sales[i])
        {
            max1 = sales[i];
        }
        if(min1 > sales[i])
        {
            min1 = sales[i];
        }
    }
}
void SALES::showSales()
{
    for(int i=0;i<QUARTERS;i++)
    {
        cout << sales[i] << "\t";
    }
    cout << "\n" <<average << "\t" <<max1 << "\t" <<min1 <<endl;

}

SALES::~SALES()
{
    //dtor
}

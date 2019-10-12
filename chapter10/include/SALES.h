#ifndef SALES_H
#define SALES_H
#include <iostream>
#include <string>

using namespace std;
class SALES
{
    public:
        SALES();
        virtual ~SALES();
        void setSales(const double ar[],int n);//复制信息进入sales
        void setSales();//设置平均值等
        void showSales();

    protected:

    private:
        static const int QUARTERS = 4;
        double sales[QUARTERS];
        double average;
        double max1;
        double min1;
};

#endif // SALES_H

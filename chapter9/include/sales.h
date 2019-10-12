#ifndef SALES_H
#define SALES_H
#include <iostream>
#include <array>

using namespace std;
namespace SALES
{
    const int QUARTERS = 4;
    struct Sales
    {
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    };
    void setSales(Sales & s,const double ar[],int n);
    void setSales(Sales & s);
    void showSales(const Sales & s);
};


#endif // SALES_H

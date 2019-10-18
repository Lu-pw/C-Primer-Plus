#ifndef STOCK_H
#define STOCK_H
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Stock
{
    public:
        Stock();
        Stock(const char * co,long n = 0,double pr = 0.0);
        virtual ~Stock();
        int howMany();
        void buy(long num,double price);
        void sell(long num,double price);
        void update(double price);
        const Stock & topval(const Stock & s) const;
        friend ostream & operator <<(ostream & os,const Stock &);

    protected:

    private:
        static int num_st;
        char * st;
        int len;
        int shares;
        double share_val;
        double total_val;
        void set_tot(){total_val = shares * share_val;}

};

#endif // STOCK_H

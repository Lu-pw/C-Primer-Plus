/*作者：lu
  日期：
  版权：
*/ #include "Stock.h"
int Stock::num_st = 0;
int Stock::howMany()
{
    return num_st;
}
Stock::Stock()
{
    st = new char[1];
    len = 4;
    st[0] = '\0';
    shares = 0;
    share_val = 0;
    set_tot();
    num_st++;
}
Stock::Stock(const char * co,long n,double pr)
{
    len = strlen(co);
    st = new char [len+1];
    strcpy(st,co);
    num_st++;
    if (n<0)
    {
        cout << "number of shares can't be negative；"
         << st << "shares set to 0.\n";
         shares = 0;
    }
    else
    {
        shares = n;
    }
    share_val = pr;
    set_tot();
}

void Stock::buy(long num,double price)
{
    if(num<0)
    {
        cout << "number of shares purchased can't be negative. "
        << "transaction is aborted.\n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}
void Stock::sell(long num,double price)
{
    if(num <0)
    {
        cout << "number of shares sold can't be negative. "
        << "transaction is aborted. \n";
    }
    else if(num >shares)
    {
        cout << "you can't sell more than you have! "
        << "transction is aborted.\n";
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}
void Stock::update(double price)
{
    share_val = price;
    set_tot();
}
const Stock & Stock::topval(const Stock & s) const
{
    if(s.total_val > total_val)
    {
        return s;
    }
    else
        return *this;
}
Stock::~Stock()
{

}
ostream & operator <<(ostream & os,const Stock &stk)
{
    os << "company: " << stk.st << "\tshares: " << stk.shares
    << "\nshare price: "<< stk.share_val <<"\ttotal: " << stk.total_val <<endl;
    return os;
}

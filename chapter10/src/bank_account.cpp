/*作者：lu
  日期：
  版权：
*/ #include "bank_account.h"

bank_account::bank_account()
{
    //ctor
}
bank_account::bank_account(string client, string p_account,int c_money)
{
    name = client;
    account = p_account;
    money = c_money;
}
void bank_account::input(double s_money)
{
    money += s_money;
}
void bank_account::ouput(double g_money)
{
    money -= g_money;
}
void bank_account::show()
{
    cout << name << "\t" << account << "\t" << money <<endl;
}
bank_account::~bank_account()
{
    //dtor
}





//#include "bank_account.h"
////
////bank_account::bank_account()
////{
////    //ctor
////}
//
//bank_account::bank_account(string fullname, string banknumber, long balance)
//{
//    this->fullname = fullname;
//    this->banknumber = banknumber;
//    this->balance = balance;
//}
//void bank_account::Showbank_account()
//{
//    cout << "bank_account full name: " << fullname << endl;
//    cout << "bank_account number: " << banknumber << endl;
//    cout << "bank_account balance: " << balance << endl;
//}
//int bank_account::Deposit(long deposit)
//{
//    this->balance += deposit;
//    return 1;
//}
//int bank_account::WithDrawals(long withdrawals)
//{
//    this->balance -= withdrawals;
//    return 1;
//}
////bank_account::~bank_account()
////{
////    //dtor
////}

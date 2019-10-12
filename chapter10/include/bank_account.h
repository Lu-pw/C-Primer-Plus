#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H
#include <string>
#include <cstring>
#include <iostream>
#include <cstring>
using namespace std;


class bank_account
{
    public:
        bank_account();
         ~bank_account();
        void show();
        bank_account(string client, string p_account,int c_money);
        void input(double s_money);
        void ouput(double g_moey);



    protected:

    private:
        string name;
        string account;
        int money;
};

#endif // BANK_ACCOUNT_H



//class bank_account {
//
//private:
//    string fullname;
//    string banknumber;
//    long balance;
//
//public:
//    bank_account() {}
//    bank_account(string fullname, string banknumber, long balance);
//    void Showbank_account();
//    int Deposit(long deposit);
//    int WithDrawals(long withdrawals);
//};
//#endif // BANK_ACCOUNT_H

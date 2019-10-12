#ifndef PLOG_H
#define PLOG_H
#include <iostream>

using namespace std;

class Plog
{
    public:
        Plog(char lname[19] = "Plorga");
        virtual ~Plog();

        Plog(char p_name[],int p_ci);
        void show() const;
        void SetPlog(char s_name[],int s_n);
        void SetCi(int s_ci);

    protected:

    private:
        char name[19];
        int ci;
};

#endif // PLOG_H

#ifndef CD_H_INCLUDED
#define CD_H_INCLUDED
#include <cstring>
#include <iostream>

using namespace std;
class Cd
{
    public:
        Cd(const char * s1,const char * s2,int n,double x);
        Cd(const Cd &d);
        Cd();
        virtual ~Cd(){ cout << "Cd 类内容被释放" << endl;};
        virtual void Report() const;
        Cd & operator=(const Cd & d);

    protected:

    private:
        char performers[50];
        char label[20];
        int selections;
        double playtime;
};

#endif // CD_H_INCLUDED

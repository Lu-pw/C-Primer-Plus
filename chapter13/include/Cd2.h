#ifndef CD2_H
#define CD2_H
#include <iostream>
#include <cstring>

using namespace std;
class Cd2
{
    public:
        Cd2(const char * s1,const char  * s2,int n, double x);
        Cd2(const Cd2 & d);
        Cd2();
        virtual ~Cd2();
        void Report() const ;
        Cd2 & operator = (const Cd2 & d);

    protected:

    private:
        char *performers;
        char *label;
        int selections;
        double playtime;
};

#endif // CD2_H

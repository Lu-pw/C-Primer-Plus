#ifndef CLASSIC2_H
#define CLASSIC2_H


#include <iostream>
#include <cstring>
#include "Cd2.h"
using namespace std;


class classic2:public Cd2
{
public:
    classic2();
    classic2(const classic2 & c);
    classic2(const char * w,const char *c1,const char * c2,int n1,double n2);
    virtual ~ classic2();
    virtual void Report() const;
    classic2 & operator=(const classic2 & c);
private:
    char * works;

};


#endif // CLASSIC2_H

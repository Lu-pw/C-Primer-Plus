#ifndef WINEC_H
#define WINEC_H
#include <iostream>
#include <valarray>
#include "pair.h"
#include <cstring>
#include <string>
using namespace std;



class Wine
{
public:
    Wine();
    Wine(const Wine & w);
    Wine(const char *nm,int yr);
    Wine(const char * lnm,int y,const int yr[],const int bot[]);
    virtual ~Wine();
    void GetBottles();
    int sum() const;
    void Show() const;
    const string & Label() const
    {
        return name;
    }

protected:

private:
    typedef valarray<int> ArrayInt;
    typedef Pair<ArrayInt,ArrayInt> PairArray;
    string name;
    int year;
    PairArray pa;

};

#endif // WINEC_H

#ifndef WINE2_H
#define WINE2_H
#include <iostream>
#include <string>
#include <valarray>
#include "pair.h"

using namespace std;

class wine2:private Pair<valarray<int>,valarray<int>>
{
    public:
        typedef valarray<int> ArrayInt;
        wine2();
        wine2(const char * lb,const int yr);
        wine2(const char * lb,const int yr,const int  yrs[],const int bot[]);
        virtual ~wine2();
        void Show() const;
        void GetBottle();
        const string & Label() const {return (const string &)(*this);}
        const int sum() const {return PairArray::second().sum();}


    protected:

    private:
        string label;
        int years;

        typedef Pair<ArrayInt,ArrayInt> PairArray;
};

#endif // WINE2_H

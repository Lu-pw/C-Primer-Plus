#ifndef WINE2_H
#define WINE2_H
#include <iostream>
#include <string>
#include <valarray>
#include "pair.h"

using namespace std;

class wine2:private Pair
{
    public:
        wine2();
        wine2(const char * lb,const int yr);
        wine2(const char * lb,const int yr,ArrayInt yrs[],ArrayInt bot[]);
        virtual ~wine2();
        void Show() const;
        void GetBottle(){};


    protected:

    private:
        string label;
        int years;
        typedef valarray<int> ArrayInt;
        typedef Pair<ArrayInt,ArrayInt> PairArray;
        PairArray pa;
};

#endif // WINE2_H

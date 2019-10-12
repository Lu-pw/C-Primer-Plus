#ifndef STONEWT_H
#define STONEWT_H
#include <iostream>

struct Unit
{
    int pound;
    int stone;
};
typedef struct Unit unit;
using namespace std;
class Stonewt
{
    public:
        Stonewt();
        virtual ~Stonewt();
        unit multi(unit &t_unit,double);
        void show();

    protected:

    private:
        unit units;
};

#endif // STONEWT_H

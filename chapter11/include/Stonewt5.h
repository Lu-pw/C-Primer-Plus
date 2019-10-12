#ifndef STONEWT5_H
#define STONEWT5_H
#include <iostream>

using namespace std;

class Stonewt5
{
    public:
        enum MODE {tp_stn,tp_pds};
        Stonewt5(double lbs);
        Stonewt5(int stn,double lbs);
        Stonewt5(double tp,MODE form);
        Stonewt5(int stn,double lbs,MODE form);
        Stonewt5();
        virtual ~Stonewt5();
        void show_lbs() const ;
        void show_stn() const;
        Stonewt5 operator+(Stonewt5 & t) const;
        Stonewt5 operator-(Stonewt5 & t) const;
        Stonewt5 operator*(double p) const;
        void set_stn() {mode = tp_stn;};
        void set_pds() {mode = tp_pds;};
        friend Stonewt5 operator*(double p,const Stonewt5 & st)
        {
            return st * p;
        }

        friend std::ostream & operator<<(std::ostream & os,const Stonewt5 & st);



    protected:

    private:
        MODE mode;
        enum {Lbs_per_stn = 14}; //pounds per stone
        int stone;  //whole  stones
        double pds_left; // fractional punds;
        double pounds;//entire weight in pounds
};

#endif // STOWNEWT5_H

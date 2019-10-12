#ifndef STONEWT6_H
#define STONEWT6_H


class stonewt6
{
    public:
        stonewt6();
        stonewt6(double lbs);
        stonewt6(int stn, double lbs);
        virtual ~stonewt6();
        bool operator > (const stonewt6 & t) const
        {
            return pounds > t.pounds;
        };
        bool operator <(const stonewt6 & t) const
        {
            return pounds < t.pounds;
        };
        bool operator >= (const stonewt6 & t) const
        {
            return pounds >= t.pounds;
        };
        bool operator <= (const stonewt6 & t) const
        {
            return pounds <= t.pounds;
        };
        bool operator == (const stonewt6 & t) const
        {
            return pounds == t.pounds;
        };
        bool operator != (const stonewt6 & t) const
        {
            return pounds != t.pounds;
        };
        double set_pounds()
        {
            return pounds;
        }




    protected:

    private:
        enum {Lbs_per_stn = 14};
        int stone;
        double pds_left;
        double pounds;

};

#endif // STONEWT6_H

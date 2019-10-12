#ifndef STONEWT4_H
#define STONEWT4_H

struct Stonewt
{
    int pounds;
};
class Stonewt4
{
    public:
        Stonewt4();
        virtual ~Stonewt4();
        friend Stonewt operator*(double mult,const Stonewt &s);

    protected:

    private:
};

#endif // STONEWT4_H

#ifndef STACK_H
#define STACK_H


struct customer
{
    char fullname[35];
    double payment;
};
typedef customer Item;
class STACK
{
    public:
        STACK();
        virtual ~STACK();
        bool isempty() const;
        bool isfull() const;
        bool push(const Item & item);
        bool pop(const Item & item);
        int set_top( )
        {
            return top;
        };


    protected:

    private:
        static const int MAX=10;
        Item items[MAX];
        int top;
};

#endif // STACK_H

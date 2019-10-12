#ifndef LIST_H
#define LIST_H
#include <iostream>

using namespace std;
struct people
{
    string name;
    int age;
};
typedef  people Item;
class list
{
    public:
        list();
        virtual ~list();
        bool isempty() const;
        bool isfull() const;
        bool additem( const Item &item);
        int itemcount() const;
        void visit(void (*pf)(Item &));
        void show();

    protected:

    private:
        int count;
        static const int size1 = 10;
        Item items[size1];

};

#endif // LIST_H

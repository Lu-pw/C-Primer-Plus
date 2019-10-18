#ifndef STACK_H
#define STACK_H
#include <iostream>
using namespace std;
typedef unsigned long Item;
class Stack
{
    public:
        Stack(int n = MAX);
        Stack(const Stack & st);
        virtual ~Stack();
        bool isempty() const;
        bool isfull() const;
        bool push(const Item & item);
        bool pop(Item & item);
        Stack & operator=(const Stack & st);
        int  get_top()
        {
            return top;
        }
        void show() const;

    protected:

    private:
        enum {MAX = 10};
        Item * items;
        int size;
        int top;
};

#endif // STACK_H

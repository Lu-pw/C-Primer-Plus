/*作者：lu
  日期：
  版权：
*/ #include "STACK.h"

STACK::STACK()
{
    //ctor
    top = 0;
}
bool STACK::isempty() const
{
    return top == 0;
}
bool STACK::isfull() const
{
    return top == MAX;
};
bool STACK::push(const Item & item)
{
    if(top < MAX)
    {
        items[top++] = item;
        return true;
    }
    else
        return false;
}
bool STACK::pop(const Item & item)
{
    if(top > 0)
    {
        items[top--] = item;
        return true;
    }
    else
        return false;
}
STACK::~STACK()
{
    //dtor
}

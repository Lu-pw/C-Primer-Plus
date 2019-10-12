/*作者：lu
  日期：
  版权：
*/ #include "list.h"

list::list()
{
    //ctor
    count = 0;
}
bool list::isempty() const
{
    if(count == 0)
    {
        return true;
    }else
    {
        return false;
        };
}
bool list::isfull() const
{
    if(count == 9)
    {
        return true;
    }
    else{return false;};
}
bool list::additem( const Item &item)
{
    if(count <10)
    {
        items[count] = item;
        count++;
    }
    else
    {
        cout << "full;" <<endl;
    }

}
int list::itemcount() const
{
    return count;
}
void list::visit(void (*pf)(Item & item))
{
    for(int i= 0;i<count;i++)
    {
        (*pf)(items[i]);
    }
}
void list::show()
{
    for(int i =0;i<count;i++)
    {
        cout << items[i].name <<": " <<items[i].age <<endl;
    }
}
list::~list()
{
    //dtor
}

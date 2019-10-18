/*作者：lu
  日期：
  版权：
*/ #include "Stack.h"


Stack::Stack(int n)
{
    items = new Item[n];
    size = n;
    top = 0;

}
Stack::Stack(const Stack & st)
{
    top = st.top;
    size = st.size;
    items = new Item[size];
    for(int i=0;i<top;++i)
    {
        items[i] = st.items[i];
    }
}
bool Stack::isempty() const
{
    return top==0;
}
bool Stack::isfull() const
{
    return top==MAX;
}
bool Stack::push(const Item & item)
{
    if(top<MAX)
    {
        items[top++] = item;
        return true;
    }
    else{return false;};
}
bool Stack::pop(Item & item)
{
    if(top>0)
    {
        item = items[--top];
        return true;
    }
    else{return false;};
}
Stack & Stack::operator=(const Stack & st)
{
    top = st.top;
    size = st.size;
    delete [] items;
    items = new Item [size];
    for(int i =0 ;i<top;++i)
    {
        items[i] = st.items[i];
    }
    return *this;
}
void Stack::show() const
{
    for(int i = 0;i < top; i++)
    {
        cout << items[i] << "\t";
    }
}
Stack::~Stack()
{
    //dtor
    delete [] items;
}

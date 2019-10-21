#ifndef QUEUETP_H
#define QUEUETP_H


using namespace std;

template <typename T>
class queueTp
{
    public:
        queueTp(int qs = Q_SIZE);
        ~queueTp();
        bool isempty() const  {return items == 0;}
        bool isfull() const {return items == qsize;}
        int queuecount() const {return items;}
        bool enqueue(const T & item) ;
        bool dequeue(T & item);

    protected:

    private:
        enum {Q_SIZE = 10};
        struct Node
        {
            T item;
            Node * next;
        };
        Node *front1;
        Node *rear;
        int items;
        const int qsize;
};

template <typename T>
queueTp<T>::queueTp(int qs):qsize(qs)
{
    front1 = rear = NULL;
    items = 0;
}

template <typename T>
queueTp<T>::~queueTp()
{
    //dtor
    Node *temp;
    while(front1 != NULL)
    {
        temp = front1;
        front1 = front1 -> next;
        delete temp;
    }
}

template <typename T>
bool queueTp<T>::enqueue(const T &item)
{
    if(isfull()) //Âú
        return false;
    else
    {
        Node * add = new Node;
        if(front1 == NULL)
        {
            add ->item = item;
            add -> next = NULL;
            front1 = rear = add;
        }
        else
        {
            add -> item = item;
            add -> next = NULL;
            rear -> next = add;
            rear = add;
        }
        items++;
        return true;
    }

}

template <typename T>
bool queueTp<T>::dequeue(T & item)
{
    if(isempty())
        return false;

    item = front1->item;
    Node * temp;
    temp = front1;
    front1 = front1->next;
    delete temp;
    items--;

    return true;

}

#endif // QUEUETP_H

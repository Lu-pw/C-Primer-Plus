#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>

using namespace std;

class Customer
{
private:
    long arrive;//����ʱ��
    int processtime;//����ʱ��
public:
    Customer(){arrive = processtime = 0;};

    void set(long when);
    long when() const //����ʱ���ȡ����
    {
        return arrive;
    };
    int ptime() const//����ʱ���ȡ����
    {
        return processtime;
    }
};

typedef Customer Item;

class Queue
{
private:
    struct Node
    {
        Item item;
        struct Node * next;
    };
    enum {Q_SIZE = 10};
//    private class members
    Node * front;
    Node * rear;
    int items;
    const int qsize;
    Queue (const Queue & q) : qsize(0) {}
    Queue & operator  = (const Queue & q )
    {
        return * this;
    };
public:
    Queue(int qs = Q_SIZE);
    ~Queue();
    bool isempty() const;
    bool isfull() const;
    int queuecount() const;
    bool enqueue(const Item & item);
    bool dequeue(Item & item);
};
#endif // QUEUE_H

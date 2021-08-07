#include <iostream>
using namespace std;

class FullStack
{
};

class EmptyStack
{
};

class QueueUsingLinkedList
{

    struct NodeType
    {
        int data;
        NodeType *link;
    };

private:
    NodeType *front;
    NodeType *rear;

public:
    QueueUsingLinkedList();
    void makeEmpty();
    void eneueue(int);
    void dequeue();
    bool isEmpty();
    bool isFull();
    ~QueueUsingLinkedList();
};

QueueUsingLinkedList::QueueUsingLinkedList()
{
    front = NULL;
    rear = NULL;
}

bool QueueUsingLinkedList::isEmpty()
{
    return front == NULL;
}

bool QueueUsingLinkedList::isFull()
{

    NodeType *location;
    try
    {
        location = new NodeType;
        delete location;
        return false;
    }
    catch (std::bad_alloc &exception)
    {
        return true;
    }
}

void QueueUsingLinkedList::eneueue(int item)
{

    if (isFull())
    {
        throw FullStack();
    }
    else
    {
        NodeType *location;
        location = new NodeType;
        location->data = item;
        location->link = NULL;
        if (rear == NULL)
        {
            front = location;
        }
        else
        {
            rear->link = location;
        }

        rear = location;
    }
}

void QueueUsingLinkedList::dequeue()
{

    if (isEmpty())
    {
        throw EmptyStack();
    }
    else
    {
        NodeType *tempPtr;
        tempPtr = front;
        // item = front->data;
        front = front->link;
        if (front == NULL)
        {
            rear = NULL;
        }

        delete tempPtr;
    }
}

void QueueUsingLinkedList::makeEmpty(){

        NodeType *temp;
        while (front!=NULL)
        {
            temp = front;
            front  = front->link;
            delete temp;
        }
        rear = NULL;
        
}

QueueUsingLinkedList::~QueueUsingLinkedList(){
    makeEmpty();
}
#include <iostream>

using namespace std;

class EmptyStack
{
};

class FullStack
{
};

class StackUsingLinkedList
{

    struct NodeType
    {
        int data;
        NodeType *next;
    };

private:
    NodeType *topPtr;

public:
    StackUsingLinkedList();
    ~StackUsingLinkedList();
    void push(int);
    void pop();
    int top();
    bool isEmpty();
    bool isFull();
};

StackUsingLinkedList::StackUsingLinkedList()
{
    topPtr = NULL;
}

bool StackUsingLinkedList::isEmpty()
{
    return topPtr == NULL;
}

int StackUsingLinkedList::top()
{
    if (isEmpty())
    {
        throw EmptyStack();
    }
    else
       return topPtr->data;
}

bool StackUsingLinkedList::isFull()
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

void StackUsingLinkedList::push(int item)
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
        location->next = topPtr;
        topPtr = location;
    }
}

void StackUsingLinkedList::pop()
{

    if (isEmpty())
    {
        throw EmptyStack();
    }
    else
    {
        NodeType *tempPtr;
        tempPtr = topPtr;
        topPtr = topPtr->next;
        delete tempPtr;
    }
}

StackUsingLinkedList::~StackUsingLinkedList()
{
    NodeType *tempPtr;

    while (topPtr != NULL)
    {
        tempPtr = topPtr;
        topPtr = topPtr->next;
        delete tempPtr;
    }
}




int main()
{
    StackUsingLinkedList st;
    st.push(5);

    
    
}
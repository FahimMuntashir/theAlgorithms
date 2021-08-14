#include <bits/stdc++.h>
using namespace std;

#include "exception.cpp"

class stackType
{
private:
    int top;
    int size;
    int *list;

public:
    stackType();
    stackType(int);
    ~stackType();

    void push(int);
    void pop();
    bool isEmpty();
    bool isFull();
    void makeEmpty();
    int stackTop();
    void displayStack();
};

int stackType::stackTop(){

    if (isEmpty())
    {
        return -1;
    }else return list[top];
    
}
stackType::stackType()
{
    top = -1;
    size = 0;
    list = new int[size];
}

stackType::stackType(int size)
{
    this->size = size;
    this->top = -1;
    list = new int[size];   
}

bool stackType::isEmpty()
{
    if (top == -1)
    {
        return true;
    }
    else
        return false;
}

bool stackType::isFull()
{
    if (top == (size - 1))
    {
        return true;
    }
    else
        return false;
}

void stackType::makeEmpty()
{
    top = -1;
}

void stackType::push(int data)
{

    if (isFull())
    {
        cout << "list is full" << endl;
    }
    else
    {

        top++;
        list[top] = data;
    }
}

void stackType::pop()
{
    if (isEmpty())
    {
        cout << "list is empty" << endl;
    }
    else
    {
        top--;
    }
}

stackType::~stackType()
{
    delete[] list;
}

void stackType::displayStack()
{

    for (int i = 0; i <= top; i++)
    {
        cout << list[i] << " ";
    }

    cout << endl;
}

int main()
{
  
    

    int size= 5;
    stackType st(size);
    st.push(1);
    st.push(2);
    st.push(5);
    st.push(10);
    st.push(15);
    // st.push(120);

    // st.makeEmpty();

    st.displayStack();

    st.pop();

    st.displayStack();

    cout<<st.stackTop()<<endl;


}
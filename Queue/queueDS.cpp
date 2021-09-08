#include <iostream>

using namespace std;

class Queue
{
private:
    int *qu;
    int size;
    int front;
    int rear;

public:
    Queue();
    Queue(int);
    void enqueue(int);
    void dequeue();
    bool isFull();
    bool isEmpty();
    void display();
    int frontItem();
    int backItem();
};

Queue::Queue()
{
    size = 7;
    qu = new int[7];
    front = -1;
    rear = -1;
}

Queue::Queue(int size)
{
    this->size = size;
    qu = new int[size];
    front = -1;
    rear = -1;
}

bool Queue::isEmpty()
{
    if (front == -1 && rear == -1)
    {
        return true;
    }
    else
        return false;
}

bool Queue::isFull()
{
    if ((rear + 1) % size == front)
    {
        return true;
    }
    else
        return false;
}

void Queue::enqueue(int x)
{
    if (isFull())
    {
        cout << "queue is full" << endl;
        return;
    }
    else if (isEmpty())
    {
        front = 0;
        rear = 0;
    }
    else
    {
        rear = (rear + 1) % size;
    }
    qu[rear] = x;
}

void Queue::dequeue()
{
    if (isEmpty())
    {
        cout << "queue is empty" << endl;
        return;
    }
    else if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front = (front + 1) % size;
    }
}

int Queue::frontItem()
{
    return qu[front];
}

int Queue::backItem()
{
    return qu[rear];
}

void Queue::display()
{
    // int count = (rear + size - front) % size + 1;

    // for (int i = 0; i < count; i++)
    // {
    //     int index = (front + i) % size;
    //     cout << qu[index] << " ";
    // }

    // cout << endl;

    // using while loop
    int i = front;
    while (i != rear)
    {
        cout << qu[i] << " ";
        i = (i + 1) % size;
    }
    cout << qu[rear] << " ";
    cout << endl;
}

int main()
{
    Queue q(5);

    q.enqueue(56);
    q.enqueue(5);
    q.enqueue(9);
    q.enqueue(10);
    q.enqueue(20);

    // q.dequeue();
    // q.dequeue();
    // q.dequeue();

    // cout << q.isEmpty() << endl;
    // cout << q.isFull() << endl;
    // cout << q.frontItem() << endl;
    // cout << q.backItem() << endl;
    q.display();

    return 0;
}

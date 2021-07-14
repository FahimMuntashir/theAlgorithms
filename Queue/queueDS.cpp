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
    int dequeue();
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
    if (front == rear)
    {
        return true;
    }
    else
        return false;
}

bool Queue::isFull()
{
    if (rear == size - 1)
    {
        return true;
    }
    else
        return false;
}

void Queue::enqueue(int x)
{
    if (!isFull())
    {

        // rear++;
        qu[rear++] = x;
    }
    else
    {
        cout << "queue is full" << endl;
    }
}

int Queue::dequeue()
{
    if (isEmpty())
    {
        cout << "queue is empty" << endl;
    }
    else
    {
        front++;
        return qu[front];
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

    for (int i = front; i < rear; i++)
    {
        cout << qu[i] << " ";
    }

    cout << endl;
}

int main(int argc, char const *argv[])
{
    Queue q(6);
    q.enqueue(56);
    q.enqueue(5);
    q.enqueue(9);
    q.enqueue(9);
    q.enqueue(10);
    q.enqueue(10);

    // q.dequeue();
    // q.dequeue();

    // cout << q.isEmpty() << endl;
    // cout << q.isFull() << endl;
    q.display();
    cout << q.frontItem() << endl;

    cout << q.backItem() << endl;

    return 0;
}

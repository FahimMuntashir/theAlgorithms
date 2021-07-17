
/*
*
* Author : Fahim Muntashir
* Handle: f12r
*
*/

#include <bits/stdc++.h>

using namespace std;

#define f12r ios_base::sync_with_stdio(false), cin.tie(NULL)
const double EPSILON = 1e-9;
#define MOD 1000000007
#define pi acos(-1)
#define ll long long
#define endl "\n"

/********** Main()  function **********/

class queues
{
private:
    int front;
    int rear;
    int *q;
    int size;

public:
    queues();
    queues(int);
    void enqueue(int);
    void dequeue();
    void display();
    ~queues();
};

queues::queues(int size)
{
    this->size = size;
    rear = -1;
    front = -1;

    q = new int[size];
}

void queues::enqueue(int x)
{

    if (rear == size - 1)
    {
        cout << "list is full" << endl;
        return;
    }

    rear++;
    q[rear] = x;
}

void queues::dequeue()
{

    if (rear == front)
    {
        cout << "empty list" << endl;
        return;
    }

    front++;
}

queues::~queues(){
    delete[] q;
}

void queues::display(){
    for (int i = front; i <= rear ; i++)
    {
        cout<<q[i]<<" ";
    }

    cout<<endl;
    
}


int main()
{
    f12r;

    queues qu(10);
    qu.enqueue(5);
    qu.enqueue(10);
    qu.enqueue(15);

    qu.display();

    return 0;
}
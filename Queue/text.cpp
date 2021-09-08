
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

#define N 5

int que[N];

int front = -1, rear = -1;

void insert(int item)
{
    if(rear==N-1){
        cout<<"overflow"<<endl;
        return;
    }
    else if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;

        que[rear] = item;
    }else{
        rear++;
        que[rear] = item;
    }
    
}


void print(){
    if (front==-1&& rear==-1)
    {
        cout<<"list is empty"<<endl;
        return;
    }
    
    for (int i = front; i < rear+1; i++)
    {
        cout<<que[i]<<" ";
    }
    cout<<endl;
    
}

void dequeue(){

    if (front==-1 && rear==-1)
    {
        cout<<"underflow"<<endl;
    }
    else if (rear==front)
    {
        front= -1;
        rear= -1;
    }else{
        front++;
    }
    
    
}
int main()
{

    insert(5);
    insert(10);
    insert(15);
    insert(20);
    insert(20);

    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();


    print();
}
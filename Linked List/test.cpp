
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

struct Node
{
    int data;
    Node *link;
};

Node *top;
void push(int item)
{
    Node *location = new Node;
    location->data = item;
    location->link = top;
    top = location;
}

void print()
{
    Node *temp;
    temp = top;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->link;
    }
}

int main()
{

    Node *top;
    top = NULL;

    push(5);
    push(10);
    push(15);
    push(20);
    push(30);

    print();

    cout<<endl;
}

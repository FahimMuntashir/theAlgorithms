
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

struct Node
{
    int data;
    struct Node *link;
};

struct Node *head;

void insertData(int value)

{
    Node *location;
    location = new Node;

    location->data = value;
    location->link = head;
    head = location;
}

void display()
{
    struct Node *temp;
    temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->link;
    }

    cout << endl;
}

void reverse()
{
    Node *preNode, *currentNode, *nextNode;
    preNode = NULL;

    currentNode = head;
    nextNode = head;

    while (nextNode != NULL)
    {
        nextNode = nextNode->link;
        currentNode->link = preNode;
        preNode = currentNode;
        currentNode = nextNode;
    }
    head = preNode;
}

int main()
{
    head = NULL;
    insertData(5);
    insertData(10);
    insertData(15);
    insertData(20);

    display();
    reverse();
    display();
}
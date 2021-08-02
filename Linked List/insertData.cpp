
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
    struct Node *link;
};

struct Node* insertData(struct Node *head, int data) 
{

    struct Node  *temp;
    temp = new Node;

    temp->data = data;
    temp->link = nullptr;

    

    head->link = temp;

    return temp;
}

void display(struct Node *head)
{

    if (head == nullptr)
    {
        cout << "empty list" << endl;
    }

    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->link;
    }

    cout << endl;
}

int main()
{
    f12r;

    struct Node *head = nullptr;

    head = new Node;

    head->data = 10;

    struct Node *current = nullptr;
    current =head;

    current = insertData(current, 20);
    current = insertData(current, 30);
    current = insertData(current, 40);

    current = head;

    display(head);

    // insertData(head, 100);

    // display(head);

    return 0;
}
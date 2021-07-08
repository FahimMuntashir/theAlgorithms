
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

void countOfNodes(struct Node *head)
{
    int count = 0;

    if (head == nullptr)
    {
        printf("linked list is empty");
    }

    struct Node *ptr = nullptr;
    ptr = head;

    while (ptr != nullptr)
    {
        count++;
        ptr = ptr->link;
    }

    printf("%d\n", count);
}

int sumNodes(struct Node *head)
{

    int sum = 0;

    // struct Node *ptr = head;

    while (head != nullptr)
    {
        sum += head->data;
        head = head->link;
    }

    return sum;
}

void printData(struct Node *head)
{

    if (head == nullptr)
    {
        cout << "list is empty" << endl;
    }

    struct Node *ptr = head;

    while (ptr != nullptr)
    {
        cout << ptr->data << " ";
        ptr = ptr->link;
    }
    cout << endl;
}
int main()
{

    struct Node *head = NULL;

    head = new Node;
    head->data = 50;

    struct Node *current = new Node;

    current->data = 100;
    head->link = current;

    current = new Node;
    current->data = 30;
    current->link = nullptr;

    head->link->link = current;

    countOfNodes(head);
    printData(head);

    cout << sumNodes(head) << endl;

    // printf("%d\n", head->data);
    // printf("%d\n", head->link->data);

    // printf("%d\n", current->data);
}
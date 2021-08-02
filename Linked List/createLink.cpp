#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *link;
};

struct Node *head;

void display(){
    struct Node *temp ;

    temp = head;

    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->link;
    }
    cout<<endl;
    
}

int main()
{

    head = NULL;
    head = new Node();
    // head= (struct Node*) malloc(sizeof(struct Node));

    head->data = 5;
    head->link = new Node(); 

    head->link->data = 10;
    head->link->link = NULL;

    // cout << head->data << endl;
    // cout << head->link << endl;
    // cout << head->link->data << endl;
    // cout << head->link->link << endl;

    display();
}
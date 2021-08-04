#include<iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *link;
};

struct Node *head;




void insertData(int value){
    struct Node* temp = new Node();
    temp->data = value;
    temp->link=NULL;
    if (head==NULL)
    {
        head = temp;
    }else {
        struct Node* t;
        t =head;
        while (t->link!=NULL)
        {
            t= t->link;

        }
        t->link = temp;
    }
    
}


        
void display(){
    struct Node *temp;
    temp = head;

    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->link;
    }

    cout<<endl;
    
}

int main(){

    head  = NULL;
    head  = new Node();

    head->data = 5;
    head->link = new Node();

    head->link->data= 10;
    head->link->link=NULL;

    display();

    insertData(15);
    insertData(20);
    insertData(25);
    display();

}
#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *lChild;
    Node *rChild;
};

struct Node *root;

void insert(int value)
{
    Node *newNode = NULL;
    newNode = new Node;
    newNode->data = value;
    newNode->lChild = NULL;
    newNode->rChild = NULL;

    if (root == NULL)
    {
        root = newNode;
    }
    else
    {
        Node *temp;
        temp = root;

        while (1)
        {
            if (newNode->data <= temp->data)
            {
                // left side

                if (temp->lChild == NULL)
                {
                    temp->lChild = newNode;
                    break;
                }
                else
                {

                    temp = temp->lChild;
                }
            }
            else
            {
                // right side

                if (temp->rChild == NULL)
                {
                    temp->rChild = newNode;
                    break;
                }else{
                    temp = temp->rChild;
                }
            }
        }
    }
}
int main()
{
    root = NULL;
    insert(5);
    insert(10);
    insert(15);
    insert(20);

    return 0;
}
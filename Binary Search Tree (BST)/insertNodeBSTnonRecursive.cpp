#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *lChild;
    Node *rChild;
};

struct Node *root;

// iterative way
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
                }
                else
                {
                    temp = temp->rChild;
                }
            }
        }
    }
}



// pre-order traversal

void preOrder(Node *r)
{
    if (r == NULL)
    {
        return;
    }

    cout << r->data << " ";

    preOrder(r->lChild); // left visit
    preOrder(r->rChild); // right visit
}

int main()
{
    root = NULL;
    insert(55);
    insert(40);
    insert(80);
    insert(90);
    insert(38);
    insert(28);
    insert(34);
    insert(60);

    preOrder(root);
    cout << endl;
    return 0;
}

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
    Node *left;
    Node *right;
};

struct Node *root;

void insertRecusion(Node *&tree, int item)
{
    if (tree == NULL)
    {
        tree = new Node;
        tree->left = NULL;
        tree->right = NULL;
        tree->data = item;
    }
    else if (item < tree->data)
    {
        insertRecusion(tree->left, item);
    }
    else
    {
        insertRecusion(tree->right, item);
    }
}
void insert(int item)
{
    insertRecusion(root, item);
}

// preorder traversal

void preorder(Node *temp)
{

    if (temp == NULL)
    {
        return;
    }
    cout << temp->data << " ";
    preorder(temp->left);
    preorder(temp->right);
}



/********** Main()  function **********/

int main()
{
    f12r;
    root = NULL;
    //55 40 38 28 34 80 60 90
    insert(55);
    insert(40);
    insert(80);
    insert(90);
    insert(38);
    insert(28);
    insert(34);
    insert(60);
    preorder(root);
    cout << endl;
    return 0;
}
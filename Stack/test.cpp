
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

#define MAX_SIZE 5

int arr[MAX_SIZE];
int top = -1;

/********** Main()  function **********/

void push(int x)
{

    top++;
    arr[top] = x;

}

void pop(){
    if (top==-1)
    {
        cout<<"list is empty"<<endl;
        return;
    }
    top--;
    
}

int main()
{
    f12r;

    push(1);
    push(2);
    push(3);
    pop();
    for (int i = 0; i <= top; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    

    return 0;
}

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


// swap function

void swap(int *n1, int *n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}


// bubble sort

void bubbleSort(int arr[], int n)
{
    int flag;

    // passes -> n-1 pass
    for (int i = 0; i < n - 1; i++)
    {
        flag = 0;
        // comparison and swap
        for (int j = 0; j < n - i - 1; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j+1]);
                flag = 1;
            }
        }
        if (flag==0)
        {
            cout<<"already sorted"<<endl;
            break;
        }
        
    }
}


/********** Main()  function **********/

int main()
{
    
    f12r;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    
    bubbleSort(arr, n);
    // print

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
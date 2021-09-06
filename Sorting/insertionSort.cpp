
/*
*
* Author : Fahim Muntashir
* Handle: f12r
*
*/

#include<bits/stdc++.h>
 
using namespace std;

#define f12r ios_base::sync_with_stdio(false), cin.tie(NULL)
const double EPSILON = 1e-9;
#define MOD     1000000007
#define pi acos(-1)
#define ll long long
#define endl "\n"




//insertion sorting

void insertionSort(int arr[], int n){
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j= i-1;

        while (j>=0 && arr[j]>temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
    
}
/********** Main()  function **********/

int main()
{
    f12r;      
    int n;
    cin>>n;
    int arr[n];       
    
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }


    insertionSort(arr, n);
    

    // print 

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}
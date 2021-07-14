
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

int binarySearch(int *arr, int n, int key, bool searchFirst)
{

    int low = 0, high = n - 1;
    int result = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (key == arr[mid])
        {
            result = mid;

            if (searchFirst)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else if (key < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return result;
}

/********** Main()  function **********/

int main()
{
    f12r;

    int arr[10] = {1,3,3,5,5,5,7,9,9,9};

    int key;
    cout<<"enter key: ";
    cin>>key;
    int first = binarySearch(arr, 10,key, true);
    if (first==-1)
    {
        cout<<"no number found"<<endl;
    }else {
        int last = binarySearch(arr, 10, key, false);
        cout<<"count of "<<key<<" is "<<(last-first)+1;
    }
cout<<endl;

    


    return 0;
}
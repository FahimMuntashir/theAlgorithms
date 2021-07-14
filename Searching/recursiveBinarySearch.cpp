
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
int recursiveBinarySearch(int *arr, int low, int high, int key)
{

    if (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            return recursiveBinarySearch(arr, mid + 1, high, key);
        }
        else
        {
            return recursiveBinarySearch(arr, low, mid - 1, key);
        }
    }
    return -1;
}

int main()
{
    f12r;

    int arr[] = {1, 6, 9, 11, 20, 22, 26, 30, 56};

    cout << recursiveBinarySearch(arr, 0, 8, 11)<<endl;

    return 0;
}
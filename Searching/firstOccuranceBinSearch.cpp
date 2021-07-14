
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

int findFirstOccurance(int *arr, int n, int key)
{

    int low = 0;
    int high = n - 1;
    int result = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (key == arr[mid])
        {
            result = mid;
            high = mid - 1;
            // for last occurance  of the number

            // low = mid +1;
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

    int arr[7] = {2,4,10,10,10,18,20};

    cout<<findFirstOccurance(arr,7,10);
    cout<<endl;

    return 0;
}
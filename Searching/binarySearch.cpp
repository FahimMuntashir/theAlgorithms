#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int binarySearch(int *arr, int size, int search);

int main()
{
    int n;
    cin >> n;
    int arr[n];
    cout << "enter array element: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "enter the key you want to search: ";
    cin >> key;
    sort(arr, arr + n);

    int res = binarySearch(arr, n, key);

    if (res == -1)
    {
        cout << "key not found" << endl;
    }
    else
    {
        cout << "key found at index: " << res << endl;
    }
}

int binarySearch(int *arr, int size, int search)
{
    int low = 0, high = size - 1, mid;

    while (low <= high)
    {
        mid = low + (high - low) / 2;

        if (search == arr[mid])
        {
            return mid;
        }
        else if (search > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}
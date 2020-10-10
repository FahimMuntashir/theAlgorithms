#include <iostream>

using namespace std;
int linearSearch(int arr[], int size, int key);

int main()
{
    int n;
    cin >> n;
    int arr[n];
    cout << "enter elements: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int search;
    cout << "enter search key : ";
    cin >> search;

    int res = linearSearch(arr, n, search);

    if (res == -1)
    {
        cout << "key not found\n";
    }
    else
    {
        cout << "key found at index: " << res << endl;
    }
}

int linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

#include <iostream.h>

using namespace std;
int maxEle(int arr[], int size);

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int res = maxEle(arr, n);
    cout << "maximum value of the array is: " << endl;

    cout << res << endl;
}

int maxEle(int arr[], int size)
{
    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}
#include <bits/stdc++.h>
#include <numeric>
using namespace std;

void prefixSum(int arr[], int n, int preSum[])
{
    preSum[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        preSum[i] = arr[i] + preSum[i - 1];
    }
}

int main()
{
    int arr[7] = {6, 3, -2, 4, -1, 0, -5};

    int preSum[100];
    prefixSum(arr, 7, preSum);

    for (int i = 0; i < 7; i++)
    {
        cout << preSum[i] << " ";
    }

    cout << endl;
}
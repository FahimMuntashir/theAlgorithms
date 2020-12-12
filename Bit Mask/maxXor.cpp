#include <bits/stdc++.h>

using namespace std;

int maximizingXor(int l, int r)
{
    int maxXor = 0;
    for (int i = l; i <= r; i++)
    {
        for (int j = i; j <= r; j++)
        {
            int currentXor = i ^ j;

            if (currentXor > maxXor)
            {
                maxXor = currentXor;
            }
        }
    }
    return maxXor;
}
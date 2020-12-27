#include <bits/stdc++.h>

using namespace std;

int sqrtRootBS(int n)
{
    int l = 0, h = n;
    int ans;
    while (l <= h)
    {
        int mid = l + (h - l) / 2;
        if (mid * mid == n)
        {
            ans = mid;
            break;
        }
        else if (mid * mid < n)
        {
            l = mid + 1;
            ans = mid;
        }
        else
        {
            h = mid - 1;
        }
    }

    return ans;
}

double sqrtRootPrecisionBS(int n, int p)
{
    int l = 0, r = n;
    double ans;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (mid * mid == n)
        {
            ans = mid;
            break;
        }
        else if (mid * mid < n)
        {
            l = mid + 1;
            ans = mid;
        }
        else
            r = mid - l;
    }

    double trial = 0.1;

    for (int i = 0; i < p; i++)
    {
        while (ans * ans <= n)
        {
            ans += trial;
        }
        ans -= trial;
        trial /= 10;
    }

    return ans;
}

int main()
{
    int n, p;
    cin >> n >> p;

    cout << sqrtRootPrecisionBS(n, p) << endl;
}

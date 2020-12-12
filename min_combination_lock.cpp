#include <iostream>

#include <bits/stdc++.h>

using namespace std;

int minRotation(int initial_digit, int lock_digit);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int input, lock;
        cin >> input >> lock;

        int res = minRotation(input, lock);

        cout << res << endl;
    }
}

int minRotation(int initial_digit, int lock_digit)
{
    int rotation = 0;

    while (initial_digit || lock_digit)
    
    {
        int init_rem = initial_digit % 10;
        int lock_rem = lock_digit % 10;

        rotation += min(abs(init_rem - lock_rem), 10 - abs(init_rem - lock_rem));

        initial_digit = initial_digit / 10;
        lock_digit = lock_digit / 10;
    }
    return rotation;
}
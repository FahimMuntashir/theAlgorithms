#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll N = 1000;

bool isPrime[N + 5];

vector<ll> prime;

void sieve()
{
    // ll N = 100;
    for (int i = 0; i < N; i++)
    {
        isPrime[i] = true;
    }
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= N; i++)
    {
        if (isPrime[i] == true)
        {
            for (int j = i * i; j <= N; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        if (isPrime[i] == true)
        {
            prime.push_back(i);
        }
    }
}

vector<int> ans;

void primeFactorization(int n)
{
    for (int i = 0; i < prime.size(); i++)
    {
        if (n % prime[i] == 0)
        {
            while (n % prime[i] == 0)
            {
                n /= prime[i];
                ans.push_back(prime[i]);
            }
        }
    }
}
int main()
{
    sieve();
    int n;
    cin >> n;
    primeFactorization(n);

    for (auto i = ans.begin(); i != ans.end(); ++i)
        cout << *i << " ";
}

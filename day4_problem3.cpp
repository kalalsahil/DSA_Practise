#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    int sr = sqrt(n);
    int cnt = 0;
    for (int i = 1; i <= sr; i++)
    {
        if (n % i == 0)
        {
            cnt++;
            // Must do this or you'll classify 1 as prime
            if (n / i != i)
            {
                cnt++;
            }
        }
    }
    return cnt == 2;
}

int main()
{
    int x;
    cin >> x;
    isPrime(x) ? cout << "True" : cout << "False";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

long long sumOfDivisors(int n)
{
    long long sumj = 0;
    // Brute Force
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         if (i % j == 0)
    //         {
    //             sumj += j;
    //         }
    //     }
    // }
    // return sumj;

    // This property is symmetric about the square root of n by traversing just the first half
    // we can avoid redundant iteration and computations improving the efficiency of the algorithm.
    int s, d;

    for (int i = 1; i <= n; i++)
    {
        s = sqrt(i);
        for (int j = 1; j <= s; j++)
        {
            if (i % j == 0)
            {
                sumj += j;
                if (i / j != j)
                {
                    d = i / j;
                    sumj += d;
                }
            }
        }
    }
    return sumj;
}

int main()
{
    int n;
    cin >> n;
    cout << sumOfDivisors(n);
}
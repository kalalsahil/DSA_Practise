#include <bits/stdc++.h>
using namespace std;

long long LCMab(long long gcd, long long a, long long b)
{
    long long lcm = (a * b) / gcd;

    return lcm;
}
long long GCDab(long long a, long long b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    if (a == 0)
    {
        return b;
    }
    else
    {
        return a;
    }
}
vector<long long> lcmAndGcd(long long a, long long b)
{
    if (a > b)
    {
        long long temp = a;
        a = b;
        b = temp;
    }
    // long long max = a * b;
    long long GCD = GCDab(a, b);
    long long LCM = LCMab(GCD, a, b);
    vector<long long> x{LCM, GCD};
    return x;
}

int main()
{
    vector<long long> ans;
    long long a, b;
    cin >> a;
    cin >> b;
    ans = lcmAndGcd(a, b);
    for (auto it1 = ans.begin(); it1 != ans.end(); it1++)
    {
        cout << *(it1) << " ";
    }
}
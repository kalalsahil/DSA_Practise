#include <bits/stdc++.h>
using namespace std;

int evenlyDivides(int n)
{
    int r;
    long temp = n;
    int cnt = 0;
    while (n > 0)
    {
        r = n % 10;
        if (r != 0)
        {
            if (temp % r == 0)
            {
                cnt++;
            }
        }
        n = floor(n / 10);
    }
    return cnt;
}

int main()
{
    int x;
    cin >> x;
    cout << evenlyDivides(x);
}
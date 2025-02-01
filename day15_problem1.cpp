#include <bits/stdc++.h>
using namespace std;

int bitwiseComplement(int n)
{
    int m = n;
    int mask = 0;

    // Edge case
    if (n == 0)
    {
        return 1;
    }
    //

    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }

    return (~n) & mask;
}

int main()
{
    int n;
    cin >> n;

    cout << isPowerOfTwo(n);
}
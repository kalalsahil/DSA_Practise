#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n)
{
    int i = 1;
    while (i <= n)
    {
        if (i == n)
        {
            return true;
        }
        if (i > INT_MAX / 2)
        {
            break;
        }
        i *= 2;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;

    cout << isPowerOfTwo(n);
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int bit, x = 0, i = 0;
    // n = n - (n * 2);
    while (n != 0)
    {
        bit = n & 1;
        x = bit * pow(10, i) + x;
        i++;
        n = n >> 1;
    }
    cout << x;
}
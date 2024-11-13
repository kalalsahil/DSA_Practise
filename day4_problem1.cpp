#include <bits/stdc++.h>
using namespace std;

bool checkArmstrong(int n)
{
    int x1 = n;
    int x2 = n;
    int cnt = 0, sum = 0;
    // According to one solution I saw,
    // we can convert the number to string and calculate its length
    // instead of while loop.
    // It takes O(1) time.

    // cnt = to_string(n).length();

    while (x1 > 0)
    {
        int r = x1 % 10;
        cnt++;
        x1 /= 10;
    }
    while (x2 > 0)
    {
        int r = x2 % 10;
        sum += pow(r, cnt);
        x2 /= 10;
    }
    return sum == n;
}

int main()
{
    int x;
    cin >> x;
    bool ans = checkArmstrong(x);
    ans ? cout << "true" : cout << "false";
}
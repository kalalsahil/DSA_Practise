#include <bits/stdc++.h>
using namespace std;

int FibonacciR(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    return FibonacciR(n - 1) + FibonacciR(n - 2);
}

void FibonacciL(int n)
{
    if (n == 0)
    {
        cout << 0;
    }
    if (n == 0)
    {
        cout << 0 << " " << 1;
    }
    int x;
    vector<int> ans{0, 1};

    for (int i = 2; i < n; i++)
    {
        x = ans[i - 1] + ans[i - 2];
        ans.push_back(x);
    }

    for (auto i = ans.begin(); i != ans.end(); i++)
    {
        cout << *(i) << " ";
    }
}

int main()
{
    int x, ans;
    cin >> x;
    FibonacciL(x);
    // cout << ans;
}
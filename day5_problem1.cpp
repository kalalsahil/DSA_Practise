#include <bits/stdc++.h>
using namespace std;

void printNtimes(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << "Sahil" << endl;
    printNtimes(n - 1);
}

void print1toN(int n)
{
    if (n == 0)
    {
        return;
    }
    print1toN(n - 1);
    cout << n << endl;
}

void printNto1(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << endl;
    printNto1(n - 1);
}

int nsum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + nsum(n - 1);
}

int nfactorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * nfactorial(n - 1);
}

void reverseArray(vector<int> &arr, int start, int end)
{
    if (start < end)
    {
        swap(arr[start], arr[end]);
        reverseArray(arr, start + 1, end - 1);
    }
}
int main()
{
    int n, ans, xi;
    cin >> n;
    int m = n;
    // print1toN(n);
    // ans = nfactorial(n);
    // cout << ans << endl;
    vector<int> x;
    while (n)
    {
        cin >> xi;
        x.push_back(xi);
        n--;
    }
    reverseArray(x, 0, m - 1);
    for (vector<int>::iterator it = x.begin(); it != x.end(); it++)
    {
        cout << *(it) << " ";
    }
}
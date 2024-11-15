#include <bits/stdc++.h>
using namespace std;

void frequencyCount(vector<int> &arr, int n, int p)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > n)
        {
            arr[i] = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        int index = (arr[i] % (n + 1)) - 1;
        if (index >= 0)
        {
            arr[index] = arr[index] + (n + 1);
        }
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] / (n + 1);
    }
}

int main()
{
    int n, p, xi, m;
    vector<int> x;
    cin >> n;
    m = n;
    while (n)
    {
        cin >> xi;
        n--;
    }
    cin >> p;

    frequencyCount(x, m, p);
}
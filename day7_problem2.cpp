#include <bits/stdc++.h>
using namespace std;

int getSecondLargest(vector<int> &arr)
{
    int max = INT_MIN;
    int sec_max = INT_MIN;
    for (auto i : arr)
    {
        if (i > max)
        {
            sec_max = max;
            max = i;
        }
        if (i < max && i > sec_max)
        {
            sec_max = i;
        }
    }
    return sec_max == INT_MIN ? -1 : sec_max;
}

int main()
{
    int n, x;
    vector<int> v;
    cin >> n;
    while (n)
    {
        cin >> x;
        v.push_back(x);
        n--;
    }

    int lar = getSecondLargest(v);
    cout << "Second largest element in Array: " << lar;
}
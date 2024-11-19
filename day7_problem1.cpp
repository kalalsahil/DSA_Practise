#include <bits/stdc++.h>
using namespace std;

int largest(vector<int> &arr)
{
    int l = INT_MIN;
    for (auto it : arr)
    {
        if (it > l)
        {
            l = it;
        }
    }
    return l;
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

    int lar = largest(v);
    cout << "Largest element in Array: " << lar;
}
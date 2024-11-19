#include <bits/stdc++.h>
using namespace std;

void leftRotate(vector<int> &nums, int k)
{
    k = k % nums.size();
    reverse(nums.begin() + k, nums.end());
    reverse(nums.begin(), nums.end());
}

void rightRotate(vector<int> &nums, int k)
{
    k = k % nums.size();
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}

int main()
{
    int n, x, k;
    vector<int> v;
    cin >> n;
    while (n)
    {
        cin >> x;
        v.push_back(x);
        n--;
    }
    cin >> k;
    rightRotate(v, k);
    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << *(i) << " ";
    }
}
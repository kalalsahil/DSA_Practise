#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    set<int> x;
    for (int i = 0; i < nums.size(); i++)
    {
        x.insert(nums[i]);
    }
    int j = 0;
    for (auto it : x)
    {
        nums[j] = it;
        j++;
    }
    return x.size();
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

    int size = removeDuplicates(v);
    cout << size;
}
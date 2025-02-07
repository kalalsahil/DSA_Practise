#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> vp;
    map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        int more = target - nums[i];
        if (mp.find(more) != mp.end())
        {
            return {mp[more], i};
        }
        mp[nums[i]] = i;
    }
    return {-1, -1};
}

int main()
{
    vector<int> arr;
    int n, x, target;
    cin >> n;

    while (n)
    {
        cin >> x;
        arr.push_back(x);
        n--;
    }

    cin >> target;

    vector<int> ans = twoSum(arr, target);

    for (auto it : ans)
    {
        cout << it << " ";
    }
}
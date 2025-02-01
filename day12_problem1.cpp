#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int> &nums)
{
    int x = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        x = x ^ nums[i];
    }
    return x;
}

int main()
{
    vector<int> nums;
    int x, n;
    cin >> n;
    while (n)
    {
        cin >> x;
        nums.push_back(x);
        n--;
    }

    int ans = singleNumber(nums);
    cout << ans;
}
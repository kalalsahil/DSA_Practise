#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &nums)
{
    int n = nums.size();
    int sum1 = (n * (n + 1)) / 2;
    int sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        sum2 += nums[i];
    }
    return sum1 - sum2;
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

    int ans = missingNumber(nums);
    cout << ans;
}
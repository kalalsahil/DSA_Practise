#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int maxi = INT_MIN, cnt = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 1)
        {
            maxi = max(maxi, cnt);
            cnt = 0;
        }
        else
            cnt++;
    }
    maxi = max(maxi, cnt);
    return maxi;
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

    int ans = findMaxConsecutiveOnes(nums);
    cout << ans;
}
#include <bits/stdc++.h>
using namespace std;

int lenOfLongestSubarr(vector<int> &arr, int k)
{
    int n = arr.size(); // size of the array.

    map<int, int> preSumMap;
    int sum = 0;
    int maxLen = 0;
    for (int i = 0; i < n; i++)
    {
        // calculate the prefix sum till index i:
        sum += arr[i];

        // if the sum = k, update the maxLen:
        if (sum == k)
        {
            maxLen = max(maxLen, i + 1);
        }

        // calculate the sum of remaining part i.e. x-k:
        int rem = sum - k;

        // Calculate the length and update maxLen:
        if (preSumMap.find(rem) != preSumMap.end())
        {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }

        // Finally, update the map checking the conditions:
        if (preSumMap.find(sum) == preSumMap.end())
        {
            preSumMap[sum] = i;
        }
    }

    return maxLen;
}

int main()
{
    vector<int> nums;
    int x, n, k;
    cin >> n;
    while (n)
    {
        cin >> x;
        nums.push_back(x);
        n--;
    }

    cin >> k;
    int ans = lenOfLongestSubarr(nums, k);
    cout << ans;
}
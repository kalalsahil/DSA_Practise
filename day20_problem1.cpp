#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{
    vector<vector<int>> res;
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
        {
            continue;
        }

        int j = i + 1;
        int k = nums.size() - 1;

        while (j < k)
        {
            int total = nums[i] + nums[j] + nums[k];

            if (total > 0)
            {
                k--;
            }
            else if (total < 0)
            {
                j++;
            }
            else
            {
                res.push_back({nums[i], nums[j], nums[k]});
                j++;
                k--;
                while (nums[j] == nums[j - 1] && j < k)
                {
                    j++;
                }

                while (k < nums.size() - 1 && nums[k] == nums[k + 1] && j < k)
                {
                    k--;
                }
            }
        }
    }
    return res;
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

    vector<vector<int>> ans = threeSum(arr);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}
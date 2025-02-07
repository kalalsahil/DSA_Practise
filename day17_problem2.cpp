#include <bits/stdc++.h>
using namespace std;

vector<int> findDuplicates(vector<int> &nums)
{
    vector<int> ans;
    for (int i = 1; i < nums.size(); i++)
    {
        int index = abs(nums[i]) - 1;
        if (nums[index] < 0)
        {
            ans.push_back(abs(nums[i]));
        }
        nums[index] *= -1;
    }

    return ans;
}

int main()
{
    vector<int> arr;
    int n, x;
    cin >> n;

    while (n)
    {
        cin >> x;
        arr.push_back(x);
        n--;
    }

    vector<int> ans = findDuplicates(arr);

    for (auto it : ans)
    {
        cout << it << " ";
    }
}
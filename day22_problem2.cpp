#include <bits/stdc++.h>
using namespace std;

int leftoccurence(vector<int> &nums, int target)
{
    int start = 0, end = nums.size() - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (nums[mid] == target)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (nums[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int rightoccurence(vector<int> &nums, int target)
{
    int start = 0, end = nums.size() - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (nums[mid] == target)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (nums[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
vector<int> searchRange(vector<int> &nums, int target)
{
    int firstocc = leftoccurence(nums, target);
    int lastocc = rightoccurence(nums, target);
    return {firstocc, lastocc};
}

int main()
{
    vector<int> v;
    int n, x, key;

    cin >> n;
    while (n)
    {
        cin >> x;
        v.push_back(x);
        n--;
    }

    cin >> key;

    vector<int> ans = searchRange(v, key);
    for (auto it : ans)
    {
        cout << it << " ";
    }
}
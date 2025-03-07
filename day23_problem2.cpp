#include <bits/stdc++.h>
using namespace std;

int getPivot(vector<int> &nums)
{
    int start = 0, end = nums.size() - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (nums[mid] >= nums[0] && nums[mid + 1] >= nums[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return end;
}

int binarySearch(vector<int> &nums, int target, int st, int end)
{
    int mid = st + (end - st) / 2;
    while (st <= end)
    {
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = st + (end - st) / 2;
    }
    return -1;
}
int search(vector<int> &nums, int target)
{
    int pivot = getPivot(nums);
    cout << nums[pivot] << endl;
    int ans;
    if (nums[pivot] <= target && target <= nums[nums.size() - 1])
    {
        ans = binarySearch(nums, target, pivot, nums.size() - 1);
    }
    else
    {
        ans = binarySearch(nums, target, 0, pivot - 1);
    }
    return ans;
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

    cout << search(v, key);
}
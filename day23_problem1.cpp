#include <bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int> &nums)
{
    int start = 0, end = nums.size() - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (nums[mid] < nums[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }

        mid = start + (end - start) / 2;
    }
    return start;
}

int main()
{
    vector<int> v;
    int n, x;

    cin >> n;
    while (n)
    {
        cin >> x;
        v.push_back(x);
        n--;
    }

    cout << findPeakElement(v);
}
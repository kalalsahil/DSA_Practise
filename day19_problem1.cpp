#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int> &nums)
{
    int low = 0, mid = 0;
    int high = nums.size() - 1;
    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[mid], nums[low]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1)
        {
            swap(nums[mid], nums[high]);
            mid++;
            high--;
        }
        else
        {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
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

    sortColors(arr);

    for (auto it : arr)
    {
        cout << it << " ";
    }
}
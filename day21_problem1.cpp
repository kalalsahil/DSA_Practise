#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums)
{
    int element = nums[0];
    int cnt = 1;
    for (int i = 1; i < nums.size(); i++)
    {
        if (cnt == 0)
        {
            element = nums[i];
        }
        if (nums[i] == element)
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }
    return element;
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

    cout << majorityElement(arr);
}
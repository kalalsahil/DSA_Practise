#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &nums)
{
    int n = nums.size();
    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        if (nums[i - 1] > nums[i])
        {
            cnt++;
        }
    }
    if (nums[n - 1] > nums[0])
    {
        cnt++;
    }
    return cnt <= 1;
}

int main()
{
    int n, x;
    vector<int> v;
    cin >> n;
    while (n)
    {
        cin >> x;
        v.push_back(x);
        n--;
    }

    check(v) ? cout << "True" : cout << "False";
}
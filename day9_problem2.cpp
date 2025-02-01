#include <bits/stdc++.h>
using namespace std;

bool searchInSorted(vector<int> arr, int k)
{
    bool ans = false;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == k)
        {
            ans = true;
            break;
        }
    }
    return ans;
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

    bool ans = searchInSorted(nums, k);
    cout << ans;
}
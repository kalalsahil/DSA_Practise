#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(vector<int> &arr1, vector<int> &arr2)
{
    int i = 0, j = 0;
    int n = arr1.size(), m = arr2.size();
    vector<int> Union;
    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j])
        {
            if (Union.size() == 0 || Union.back() != arr1[i])
                Union.push_back(arr1[i]);
            i++;
        }
        else
        {
            if (Union.size() == 0 || Union.back() != arr2[j])
                Union.push_back(arr2[j]);
            j++;
        }
    }
    while (i < n)
    {
        if (Union.back() != arr1[i])
            Union.push_back(arr1[i]);
        i++;
    }
    while (j < m)
    {
        if (Union.back() != arr2[j])
            Union.push_back(arr2[j]);
        j++;
    }
    return Union;
}

int main()
{
    vector<int> nums1, nums2;
    int x, n1, n2;
    cin >> n1;
    while (n1)
    {
        cin >> x;
        nums1.push_back(x);
        n1--;
    }

    cin >> n2;
    while (n2)
    {
        cin >> x;
        nums2.push_back(x);
        n2--;
    }

    vector<int> ans = findUnion(nums1, nums2);

    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
}
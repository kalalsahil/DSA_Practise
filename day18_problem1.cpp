#include <bits/stdc++.h>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    vector<int> ans;
    int i = 0, j = 0;

    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr1;
    vector<int> arr2;
    int n, x, m;
    cin >> n;

    while (n)
    {
        cin >> x;
        arr1.push_back(x);
        n--;
    }

    cin >> m;

    while (m)
    {
        cin >> x;
        arr2.push_back(x);
        m--;
    }

    vector<int> answer = findArrayIntersection(arr1, arr1.size(), arr2, arr2.size());

    for (auto it : answer)
    {
        cout << it << " ";
    }
}
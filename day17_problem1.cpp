#include <bits/stdc++.h>
using namespace std;

bool uniqueOccurrences(vector<int> &arr)
{
    // method 1
    // unordered_map<int, int> mp;
    // unordered_set<int> st;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     mp[arr[i]]++;
    // }

    // for (auto it : mp)
    // {
    //     st.insert(it.second);
    // }

    // return mp.size() == st.size();

    // method 2
    sort(arr.begin(), arr.end());
    set<int> v;

    for (int i = 0; i < arr.size(); i++)
    {
        int cnt = 1;

        // Count occurrences of the current element
        while (i + 1 < arr.size() && arr[i] == arr[i + 1])
        {
            cnt++;
            i++;
        }

        if (v.find(cnt) != v.end())
        {
            return false;
        }

        v.insert(cnt);
    }

    return true;
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

    cout << uniqueOccurrences(arr);
}
#include <bits/stdc++.h>
using namespace std;

int findFloor(vector<int> &arr, int k)
{

    int start = 0, end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == k)
        {
            return arr[mid];
        }
        if (arr[mid] > k)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans != -1 ? arr[ans] : -1;
}

int findCeil(vector<int> &arr, int k)
{

    int start = 0, end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == k)
        {
            return arr[mid];
        }
        if (arr[mid] > k)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans != -1 ? arr[ans] : -1;
}

vector<int> getFloorAndCeil(int x, vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    int a = findFloor(arr, x);
    int b = findCeil(arr, x);
    return {a, b};
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

    vector<int> ans = getFloorAndCeil(key, v);
    for (auto it : ans)
    {
        cout << it << " ";
    }
}
#include <bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int> arr, int key)
{
    int i = 0, j = arr.size() - 1;
    int mid = i + (j - i) / 2;
    while (i <= j)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            i = mid + 1;
        }
        else
        {
            j = mid - 1;
        }
        mid = i + (j - i) / 2;
    }
    return -1;
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

    cout << BinarySearch(v, key);
}
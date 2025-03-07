#include <bits/stdc++.h>
using namespace std;

int floorSqrt(int n)
{
    int st = 0, end = n;
    int mid = st + (end - st) / 2;
    int ans;
    while (st <= end)
    {
        int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        else if (square < n)
        {
            ans = mid;
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = st + (end - st) / 2;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << floorSqrt(n);
}
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x)
{
    // Approach 1
    // string temp = to_string(x);
    // int i = 0;
    // int j = temp.length() - 1;
    // while (i <= j)
    // {
    //     if (temp[i] != temp[j])
    //     {
    //         return false;
    //     }
    //     i++;
    //     j--;
    // }
    // return true;

    // Approach 2 read Readme for understanding
    if (x < 0 || (x % 10 == 0 && x != 0))
    {
        return false;
    }
    else
    {
        int rev = 0;
        while (x > rev)
        {
            int r = x % 10;
            rev = rev * 10 + r;
            x = x / 10;
        }
        if (x == rev || x == rev / 10)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    int x;
    cin >> x;
    bool output = isPalindrome(x);
    if (output)
    {
        cout << "true";
        return 0;
    }
    cout << "false";
}
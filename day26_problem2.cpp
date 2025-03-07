#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s)
{
    reverse(s.begin(), s.end());
    int n = s.size();
    int i = 0, left = 0, right = 0;

    while (i < n)
    {
        while (i < n && s[i] == ' ')
        {
            i++;
        }
        if (i == n)
            break;
        while (i < n && s[i] != ' ')
        {
            s[right++] = s[i++];
        }
        reverse(s.begin() + left, s.begin() + right);
        s[right++] = ' ';
        left = right;
        i++;
    }
    s.resize(right - 1);
    return s;
}

int main()
{
    // declare a string to store the user input
    string usr_str;
    // Use getline() to take input with spaces
    getline(cin, usr_str);
    // Display the input

    string ans = reverseWords(usr_str);
    cout << ans;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s)
{
    int i = 0;
    int j = s.size() - 1;

    while (i < j)
    {
        while (!isalnum(s[i]))
        {
            i++;
        }
        while (!isalnum(s[j]))
        {
            j--;
        }
        if (tolower(s[i]) != tolower(s[j]))
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main()
{
    // declare a string to store the user input
    string usr_str;
    // Use getline() to take input with spaces
    getline(cin, usr_str);
    // Display the input
    bool ans = checkPalindrome(usr_str);
    cout << ans;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

string removeOccurrences(string s, string part)
{

    while (s.length() != 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }
    return s;
}

int main()
{
    // declare a string to store the user input
    string usr_str;
    // Use getline() to take input with spaces
    getline(cin, usr_str);
    // Display the input
    string ans = removeOccurrences(usr_str);
    cout << ans;
    return 0;
}
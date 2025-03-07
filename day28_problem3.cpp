#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string s)
{
    stack<char> st;
    int i = 0;
    while (i < s.length())
    {
        if (st.size() != 0 && s[i] == st.top())
        {
            st.pop();
        }
        else
        {
            st.push(s[i]);
        }
        i++;
    }

    string x = "";
    while (st.size() != 0)
    {
        x += st.top();
        st.pop();
    }
    x = string(x.rbegin(), x.rend());

    return x;
}

int main()
{
    // declare a string to store the user input
    string usr_str;
    // Use getline() to take input with spaces
    getline(cin, usr_str);
    // Display the input
    string ans = removeDuplicates(usr_str);
    cout << ans;
    return 0;
}
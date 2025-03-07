#include <bits/stdc++.h>
using namespace std;

// string replaceSpaces(string &str)
// {
//     string temp = "";
//     for (int i = 0; i < str.length(); i++)
//     {
//         if (str[i] == ' ')
//         {
//             temp.push_back('@');
//             temp.push_back('4');
//             temp.push_back('0');
//         }
//         else
//         {
//             temp.push_back(str[i]);
//         }
//     }
//     return temp;
// }

// inplace
string replaceSpaces(string &str)
{
    int number_of_spaces = 0;
    int len = str.size();
    for (int i = 0; i < len; i++)
    {
        if (str[i] == ' ')
            number_of_spaces++;
    }
    // cout << number_of_spaces << endl;
    int newLength = len + (number_of_spaces * 2);

    str.resize(newLength);

    int index = newLength - 1;

    for (int j = len - 1; j >= 0; j--)
    {
        if (str[j] == ' ')
        {
            str[index] = '0';
            str[index - 1] = '4';
            str[index - 2] = '@';
            index -= 3;
        }
        else
        {
            str[index] = str[j];
            index--;
        }
    }

    return str;
}

int main()
{
    // declare a string to store the user input
    string usr_str;
    // Use getline() to take input with spaces
    getline(cin, usr_str);
    // Display the input
    string ans = replaceSpaces(usr_str);
    cout << ans;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

bool checkEqual(int arr1[], int arr2[])
{
    for (int i = 0; i < 26; i++)
    {
        if (arr1[i] != arr2[i])
        {
            return false;
        }
    }
    return true;
}

bool checkInclusion(string s1, string s2)
{
    int hashS1[26] = {0};
    int hashS2[26] = {0};

    int index;
    for (int i = 0; i < s1.length(); i++)
    {
        index = s1[i] - 'a';
        hashS1[index]++;
    }
    int i = 0;
    int windowSize = s1.length();
    while (i < windowSize && i < s2.length())
    {
        index = s2[i] - 'a';
        hashS2[index]++;
        i++;
    }

    if (checkEqual(hashS1, hashS2))
    {
        return true;
    }

    while (i < s2.length())
    {
        index = s2[i] - 'a';
        hashS2[index]++;

        index = s2[i - windowSize] - 'a';
        hashS2[index]--;

        i++;

        if (checkEqual(hashS1, hashS2))
        {
            return true;
        }
    }

    return false;
}

int main()
{
    // declare a string to store the user input
    string usr_str;
    // Use getline() to take input with spaces
    getline(cin, usr_str);
    // Display the input
    bool ans = checkInclusion(usr_str);
    cout << ans;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int compress(vector<char> &chars)
{
    int n = chars.size();
    int ansIndex = 0;
    int i = 0, j;

    while (i < n)
    {
        j = i + 1;

        while (j < n && chars[i] == chars[j])
        {
            j++;
        }

        int count = j - i;

        chars[ansIndex++] = chars[i];
        if (count > 1)
        {
            string cnt = to_string(count);
            for (char ch : cnt)
            {
                chars[ansIndex++] = ch;
            }
        }
        i = j;
    }
    return ansIndex;
}

int main()
{
    // declare a string to store the user input
    vector<char> input;
    int n;

    cin >> n;
    while (n)
    {
        char x;
        cin >> x;
        input.push_back(x);
        n--;
    }

    // Display the input
    int ans = compress(input);
    cout << ans;
    return 0;
}
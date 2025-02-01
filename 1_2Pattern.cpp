#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i = 1;
    cin >> n;
    // Pattern 1
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << "* ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern 2
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << i;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern 3
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << j;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern 4
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << n - j + 1;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern 5
    // int count = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << count << " ";
    //         count++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern 6
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << "* ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern 7
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << i << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern 8
    // int count = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << count << " ";
    //         count++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern 9
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << i + j - 1 << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern 10
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << i - j + 1 << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern 11
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         char c = i + 'A' - 1;
    //         cout << c << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern 12
    // int start = 'A';
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         char c = start;
    //         cout << c << " ";
    //         start++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern 13
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         char c = 'A' + i + j - 2;
    //         cout << c << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern 14
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         char c = 'A' + i - 1;
    //         cout << c << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern 15
    // int start = 'A';
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         char c = start;
    //         cout << c << " ";
    //         start++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern 16
    // while (i <= n)
    // {
    //     int j = 1, start = 'A' + i - 1;
    //     while (j <= i)
    //     {
    //         char c = start;
    //         cout << c << " ";
    //         start++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern 17
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         char c = 'A' + n - i + j - 1;
    //         cout << c << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern 17
    // while (i <= n)
    // {
    //     int space = n - i;
    //     while (space)
    //     {
    //         cout << "  ";
    //         space--;
    //     }
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << "* ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern 18 Homework
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n - i + 1)
    //     {
    //         cout << "* ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern 19 Homework
    // while (i <= n)
    // {
    //     int space = i - 1;
    //     while (space)
    //     {
    //         cout << "  ";
    //         space--;
    //     }
    //     int j = 1;
    //     while (j <= n - i + 1)
    //     {
    //         cout << "* ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Pattern 20
    // while (i <= n)
    // {
    //     int space = n - i;
    //     while (space)
    //     {
    //         cout << "  ";
    //         space--;
    //     }
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << j << " ";
    //         j++;
    //     }
    //     int m = 1;
    //     while (m <= i - 1)
    //     {
    //         cout << i - m << " ";
    //         m++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // Ultimate Pattern
    while (i <= n)
    {
        // First Triangle
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << j << " ";
            j++;
        }

        // Second Triangle
        int s = (i - 1) * 2;
        while (s)
        {
            cout << "* ";
            s--;
        }

        // Third Triangle
        int st = n - i + 1;
        while (st)
        {
            cout << st << " ";
            st--;
        }

        cout << endl;
        i++;
    }
}
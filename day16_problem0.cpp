#include <bits/stdc++.h>
using namespace std;

int AP(int n)
{
    return 3 * n + 7;
}

int totalSetBits(int a, int b)
{
    int c1 = 0, c2 = 0;
    while (a != 0)
    {
        if (a & 1)
        {
            c1++;
        }
        a = a >> 1;
    }
    while (b != 0)
    {
        if (b & 1)
        {
            c2++;
        }
        b = b >> 1;
    }

    return c1 + c2;
}

int main()
{
    int n;
    cin >> n;

    cout << "Arithmetic nth term is " << AP(n) << endl;

    int a, b;
    cin >> a;
    cin >> b;

    cout << "Total Set bits is " << totalSetBits(a, b) << endl;

    int array[10];
    fill_n(array, 10, 1);
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << " ";
    }
}
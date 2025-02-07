#include <bits/stdc++.h>
using namespace std;

int main()
{
    int amount;
    cin >> amount;
    int hundred = 0, fifty = 0, twenty = 0, ten = 0;

    switch (1)
    { // Using switch to simulate step-by-step deduction
    case 1:
        hundred = amount / 100;
        amount %= 100;
    case 2:
        fifty = amount / 50;
        amount %= 50;
    case 3:
        twenty = amount / 20;
        amount %= 20;
    case 4:
        ten = amount / 10;
        amount %= 10;
    }

    cout << "100 Rs Notes: " << hundred << endl;
    cout << " 50 Rs Notes: " << fifty << endl;
    cout << " 20 Rs Notes: " << twenty << endl;
    cout << " 10 Rs Notes: " << ten << endl;
}
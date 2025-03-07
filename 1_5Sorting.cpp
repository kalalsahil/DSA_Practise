#include <bits/stdc++.h>
using namespace std;

void SelectionSort(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int mini = i;

        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[mini] > arr[j])
            {
                mini = j;
            }
        }
        swap(arr[i], arr[mini]);
    }
}

void BubbleSort(vector<int> &arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size() - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void InsertionSort(vector<int> &arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    int n, x;
    cin >> n;

    vector<int> v;
    while (n)
    {
        cin >> x;
        v.push_back(x);
        n--;
    }

    InsertionSort(v);

    for (auto it : v)
    {
        cout << it << " ";
    }
    return 0;
}
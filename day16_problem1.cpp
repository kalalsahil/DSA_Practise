#include <bits/stdc++.h>
using namespace std;

void printArrray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void swapAlternate(int arr[], int size)
{
    int i = 0, j = 1;
    while ((i < size) && (j < size))
    {
        swap(arr[i], arr[j]);
        i += 2;
        j += 2;
    }
}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(array) / sizeof(int);
    swapAlternate(array, size);
    printArrray(array, size);
}
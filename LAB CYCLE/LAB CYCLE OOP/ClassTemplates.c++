// Write a C++ program to implement an array using class templates. Implement the following operations: Adding two arrays, finding the max and min in an array.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

template <typename T>
void addArray(T first[], T second[], int len)
{
    int sum[20];
    cout << "The sum of two array is " << endl;
    for (int i = 0; i < len; i++)
    {
        sum[i] = first[i] + second[i];
        cout << sum[i] << "\t";
    }
}

template <typename T>
void minVal(T arr[], int len)
{
    T res = arr[0];
    for (int i = 1; i < len; i++)
    {

        res = min(res, arr[i]);
    }
    cout << "Minimum value of array is " << res << endl;
}

template <typename T>
void maxVal(T arr[], int len)
{
    T res = arr[0];
    for (int i = 1; i < len; i++)
    {
        res = max(res, arr[i]);
    }
    cout << "Maximum value of array is " << res << endl;
}

int main()
{
    int a[20], b[20], n;
    cout << "Enter number elements to be inserted in array " << endl;
    cin >> n;
    cout << "Enter the elements for array 1 " << endl;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    minVal(a, n);
    maxVal(a, n);
    cout << "Enter the elements for array 2 " << endl;
    for (int i = 0; i < n; i++)
        cin >> b[i];
    minVal(b, n);
    maxVal(b, n);
    addArray(a, b, n);
    return 0;
}

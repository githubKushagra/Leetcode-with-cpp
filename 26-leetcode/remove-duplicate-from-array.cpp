#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

int removeDuplicate(int arr[], int n)
{
    int len = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            arr[len] = arr[i];
            len++;
        }
    }
    return len;
}

using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Inputs all the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


    cout << "Array with duplicates: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;


    int length = removeDuplicate(arr, n);           // new size of array after removing duplicates values

    cout << "Array after removing duplicate: ";
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

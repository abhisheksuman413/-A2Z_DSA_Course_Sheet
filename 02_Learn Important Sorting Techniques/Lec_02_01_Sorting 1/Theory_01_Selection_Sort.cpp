#include <bits/stdc++.h>
using namespace std;

void selction_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++) // Yha n-2 hai becouse hamlog 2nd last index tak swap krege
    {                                // Last index already sort hua rhega
        int mini = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[mini]) // Yha compare kr rhe hai
            {
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    // Creating array and taking inpute
    int n;
    cout << " Enter the size of array" << endl;
    cin >> n;
    int arr[n];
    cout << " Enter element in array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Calling function selection sort
    selction_sort(arr, n);

    // Printing sorted array

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
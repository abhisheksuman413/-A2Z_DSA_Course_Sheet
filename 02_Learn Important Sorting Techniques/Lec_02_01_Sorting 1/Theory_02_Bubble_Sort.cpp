#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n)
{
    for (int i = n - 1; i >= 1; i--)
    {
        int did_swap = 0;
        for (int j = 0; j <= i - 1; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                did_swap = 1;
            }
        }
        if (did_swap == 0)
            break;
    }
}



int main()
{
    // Creating array and taking inpute
    int arr[7] = {14, 9, 15, 12, 6, 8, 13};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Calling function Bubble sort
    bubble_sort(arr, n);

    // Printing sorted array

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n)
{
    // Base Case: range == 1.
    int did_swap = 0;
    if (n == 1)
        return;

    for (int j = 0; j <= n - 2; j++)
    {
        if (arr[j] > arr[j + 1])
        {
            int temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
            did_swap = 1;
        }
    }

    /*
       >>> If array is sorted recursion will not call becaouse
           if array is sorted swap not happen so value of did_swap
           is remains 0
       >>> Or did_swap ka value 0 hoga to niche wala if condation execute ho
           jyega or function return ho jyega

    */
    if (did_swap == 0)
    {
        return;
    }

    // Range reduced after recursion:
    bubble_sort(arr, n - 1);
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
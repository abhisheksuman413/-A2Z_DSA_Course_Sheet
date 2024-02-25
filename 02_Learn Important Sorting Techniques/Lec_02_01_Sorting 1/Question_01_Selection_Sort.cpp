#include <bits/stdc++.h>
using namespace std;
void selectionSort(vector<int> &arr)
{
    int n = arr.size();
    // Write your code here.
    for (int i = 0; i <= n - 2; i++)
    {
        int mini = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        swap(arr[mini], arr[i]);
    }
}
int main()
{
    // Creating array and taking inpute
    int arr[7] = {14, 9, 15, 12, 6, 8, 13};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Calling function Insertion sort
    selectionSort(arr);

    // Printing sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;



//  Creating new function for merge 

void merge(int arr[], int low, int mid, int high)
{
    vector<int> temp_array;
    int left = low;
    int right = mid + 1;

    // Compare and add to new tem_array
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp_array.push_back(arr[left]);
            left++;
        }
        else
        {
            temp_array.push_back(arr[right]);
            right++;
        }
    }
    // Agr left hypothetical array bacha hua hai to 
    while (left <= mid)
    {
        temp_array.push_back(arr[left]);
        left++;
    }
    // Agr right hypothetical array bacha hua hai to 
    while (right <= high)
    {
        temp_array.push_back(arr[right]);
        right++;
    }

    // temp_array ko arr[] me dal rhe hai 
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp_array[i - low];
    }
}

// Creating function which is called inside merge_sortt function
void new_ms(int arr[], int low, int high)
{
    if (low == high)
        return;
    int mid = (low + high) / 2;
    new_ms(arr, low, mid);
    new_ms(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

// Creating merge sort function
void merge_sortt(int arr[], int n)
{
    new_ms(arr, 0, n - 1); // Yha n-1 hai because array ka last index n-1 hota hai 
}


int main()
{
    // Creating array and taking inpute
    int arr[5] = {9, 3, 6, 2, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Calling function Insertion sort
    merge_sortt(arr,n);

    // Printing sorted array

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}


// For more information cheack notes and Striver viedo on Youtube 
#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    int p = high - low + 1;
    int temp_array[p];
    int left = low;
    int right = mid + 1;
    int j = 0;

    // Compare and add to new tem_array
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp_array[j] = arr[left];
            j++;
            left++;
        }
        else
        {
            temp_array[j] = arr[right];
            j++;
            right++;
        }
    }
    // Agr left hypothetical array bacha hua hai to
    while (left <= mid)
    {
        temp_array[j] = arr[left];
        j++;
        left++;
    }
    // Agr right hypothetical array bacha hua hai to
    while (right <= high)
    {
        temp_array[j] = arr[right];
        j++;
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
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    new_ms(arr, low, mid);
    new_ms(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

void mergeSort(int arr[], int l, int r)
{
    // Write Your Code Here

    new_ms(arr, l, r);
}

// #include <vector>

// void merge(vector<int> &arr, int low, int mid, int high)
// {
//     vector<int> temp_array;
//     int left = low;
//     int right = mid + 1;

//     // Compare and add to new tem_array
//     while (left <= mid && right <= high)
//     {
//         if (arr[left] <= arr[right])
//         {
//             temp_array.push_back(arr[left]);
//             left++;
//         }
//         else
//         {
//             temp_array.push_back(arr[right]);
//             right++;
//         }
//     }
//     // Agr left hypothetical array bacha hua hai to
//     while (left <= mid)
//     {
//         temp_array.push_back(arr[left]);
//         left++;
//     }
//     // Agr right hypothetical array bacha hua hai to
//     while (right <= high)
//     {
//         temp_array.push_back(arr[right]);
//         right++;
//     }

//     // temp_array ko arr[] me dal rhe hai
//     for (int i = low; i <= high; i++)
//     {
//         arr[i] = temp_array[i - low];
//     }
// }

// // Creating function which is called inside merge_sortt function
// void new_ms(vector<int> &arr, int low, int high)
// {
//     if (low == high)
//         return;
//     int mid = (low + high) / 2;
//     new_ms(arr, low, mid);
//     new_ms(arr, mid + 1, high);
//     merge(arr, low, mid, high);
// }

// // Creating merge sort function
// void mergeSort(vector<int> &arr,int l, int r)
// {
//     new_ms(arr, l, n ); // Yha n-1 hai because array ka last index n-1 hota

// }

int main()
{
    // Creating array and taking inpute
    int arr[7] = {14, 9, 15, 12, 6, 8, 13};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Calling function Bubble sort
    mergeSort(arr, 0, n - 1);

    // Printing sorted array

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

/*

Question_01 :- Merge Sort



Link :- https://www.codingninjas.com/studio/problems/merge-sort_5846?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf


Problem statement
You are given the starting 'l' and the ending 'r' positions of the array 'ARR'.



You must sort the elements between 'l' and 'r'.



Note:
Change in the input array itself. So no need to return or print anything.
Example:
Input: ‘N’ = 7,
'ARR' = [2, 13, 4, 1, 3, 6, 28]

Output: [1 2 3 4 6 13 28]

Explanation: After applying 'merge sort' on the input array, the output is [1 2 3 4 6 13 28].
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
7
2 13 4 1 3 6 28
Sample Output 1:
1 2 3 4 6 13 28
Explanation of Sample Output 1:
After applying 'merge sort' on the input array, the output is [1 2 3 4 6 13 28].
Sample Input 2:
5
9 3 6 2 0
Sample Output 2:
0 2 3 6 9
Explanation of Sample Output 2:
After applying 'merge sort' on the input array, the output is [0 2 3 6 9].
Constraints :
1 <= N <= 10^3
0 <= ARR[i] <= 10^9


*/
#include <bits/stdc++.h>
using namespace std;

/*
        The function is called with the parameters:
        quickSort(input, 0, size - 1);

*/

int partitionArray(int input[], int start, int end)
{
    // Write your code here
    int pivot = input[start];
    int i = start;
    int j = end;
    while (i < j)
    {
        while (input[i] <= pivot && i <= end - 1)
        {
            i++;
        }
        while (input[j] > pivot && j >= start + 1)
        {
            j--;
        }
        if (i < j)
        {
            swap(input[i], input[j]);
        }
    }
    swap(input[start], input[j]);
    return j;
}

void quickSort(int input[], int start, int end)
{
    /*
            Don't write main().
            Don't read input, it is passed as function argument.
            Change in the given array itself.
            Taking input and printing output is handled automatically.
    */

    if (start < end)
    {
        int partition_index = partitionArray(input, start, end);
        quickSort(input, start, partition_index - 1);
        quickSort(input, partition_index + 1, end);
    }
}

int main()
{

    // Creating array and taking inpute
    int arr[7] = {14, 9, 15, 12, 6, 8, 13};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Calling function Bubble sort
    quickSort(arr, 0, n - 1);

    // Printing sorted array

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/*

Question_04 :-	Quick Sort


Link :- https://www.codingninjas.com/studio/problems/quick-sort_5844?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf



Problem statement
Given the 'start' and the 'end'' positions of the array 'input'. Your task is to sort the elements between 'start' and 'end' using quick sort.



Note :
Make changes in the input array itself.
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1 :
6
2 6 8 5 4 3
Sample Output 1 :
2 3 4 5 6 8
Sample Input 2 :
5
1 2 3 5 7
Sample Output 2 :
1 2 3 5 7
Constraints :
1 <= N <= 10^3
0 <= input[i] <= 10^9


*/
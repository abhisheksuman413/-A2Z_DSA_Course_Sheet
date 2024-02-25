#include <bits/stdc++.h>
using namespace std;

/*


// Code for descending order
int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i]>=pivot && i <= high-1){
            i++;
        }

        while(arr[j]>pivot && j <= low+1){
            j--;
        }
        if(i<j)swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;

}

*/

// Code for ascending order

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (arr[i] <= pivot && i <= high - 1)
        {
            i++;
        }
        /*
        >>> Niche wale pivot me kewal '>' hai because agr 2 element same ho jata hai
            to kon se side me rakhna hai ham dono side nhi rakh skte hai yha ham
            element same hone pe right side me rakh rhe hai so uper me '<' ke sath
            '=' v hai
        >>> high-1 & low+1 likhe hai because high ya low pe jane ke bad i++ ya j--
            krte hai to index array ke bhr chla jyega so run time error aayega
        */
        while (arr[j] > pivot && j >= low + 1)
        {
            j--;
        }
        if (i < j)
            swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void new_qs(int arr[], int low, int high)
{
    if (low < high)
    {
        int partition_index = partition(arr, low, high);
        new_qs(arr, low, partition_index - 1);
        new_qs(arr, partition_index + 1, high);
    }
}

void quick_sortt(int arr[], int n)
{
    new_qs(arr, 0, n - 1);

    
}

int main()
{
    // Creating array and taking inpute
    int arr[7] = {14, 9, 15, 12, 6, 8, 13};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Calling function Insertion sort
    quick_sortt(arr, n);

    // Printing sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
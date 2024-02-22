#include <bits/stdc++.h>
using namespace std;




void insertion_sortt(int arr[], int n){
    for(int i = 1; i<=n-1; i++){
        int j =i;
        while(j>0&& arr[j-1]>arr[j]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
   
}


int main()
{
    // Creating array and taking inpute
    int arr[7]= {14,9,15,12,6,8,13};
    int n= sizeof(arr)/sizeof(arr[0]);

    // Calling function Insertion sort
    insertion_sortt(arr, n);

    // Printing sorted array

     for (int i = 0; i <n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}
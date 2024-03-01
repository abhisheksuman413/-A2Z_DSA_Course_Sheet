#include <bits/stdc++.h>
using namespace std;


// coding ninja 





// Brute force solution


// vector<int> rotateArray(vector<int> arr, int k) {
//   // Write your code here.

//   int arr_size = arr.size();
//   k = k % arr_size;
//   int temp_arr[k];
//   for (int i = 0; i < k; i++) {
//     temp_arr[i] = arr[i];
//   }

//   // Shifting

//   for (int i = k; i < arr_size; i++) {
//     arr[i - k] = arr[i];
//   }

//   // Now put temp_arr in orginal array(arr)

//   int j = 0;
//   for (int i = arr_size - k; i < arr_size; i++) {
//     arr[i] = temp_arr[i-(arr_size - k)];
//     // arr[i] = temp_arr[i-(k-1)];   //(confisuion)
//     // arr[i]=temp_arr[j];
//     // j++;
//   }
//   return arr;
// }



// Optimal Solution 

// #include <bits/stdc++.h>

vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.

    int arr_size= arr.size();
    k =k%arr_size;
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
    reverse(arr.begin(),arr.end());

    return arr;
}



// leetcode

class Solution {
public:
    void rotate(vector<int>& arr, int k) {
         int arr_size= arr.size();
    k =k%arr_size;
    reverse(arr.begin(),arr.begin()+arr_size-k);
    reverse(arr.begin()+arr_size-k,arr.end());
    reverse(arr.begin(),arr.end());

    
        
    }
};

int main()
{
    
    return 0;
}
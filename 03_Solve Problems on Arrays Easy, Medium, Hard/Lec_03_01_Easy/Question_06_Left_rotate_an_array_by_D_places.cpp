#include <bits/stdc++.h>
using namespace std;


// coding ninja 
 
// Brute force solution

/*
T.C :- O(k)+O(n-k)+O(k) = O(n+k)
S.C :- O(k)
>>> Here k is the no of rotation 
>>> Here n is the size of array 
*/


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

/*
T.C :- O(k)+O(n-k)+O(n) = O(2n)
S.C :- O(1)
>>> Here k is the no of rotation 
>>> Here n is the size of array 
>>> Yha T.C thora jada ho gya hai but yha S.C constant ho gya hai 
    brute force solution se jo better hai 
*/

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
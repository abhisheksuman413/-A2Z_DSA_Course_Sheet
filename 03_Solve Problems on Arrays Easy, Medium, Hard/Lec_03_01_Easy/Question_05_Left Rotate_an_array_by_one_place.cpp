#include <bits/stdc++.h>
using namespace std;

// Coding nijnja

// T.C :- O(n)
// S.C :- O(1)
#include <bits/stdc++.h>
vector<int> rotateArray(vector<int> &arr, int n) {
  // Write your code here.
  int temp = arr[0];
  for (int i = 1; i < n; i++) {
    arr[i - 1] = arr[i];
  }
  arr[n - 1] = temp;
  return arr;
}




// Leetcode

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
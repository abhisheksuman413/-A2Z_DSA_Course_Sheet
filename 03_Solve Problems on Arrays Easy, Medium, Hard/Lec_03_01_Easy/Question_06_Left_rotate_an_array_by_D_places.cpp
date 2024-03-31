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




/*
Coding Ninja

Question_06 :-  Rotate array

Link :- https://www.naukri.com/code360/problems/rotate-array_1230543?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

Problem statement
Given an array 'arr' with 'n' elements, the task is to rotate the array to the left by 'k' steps, where 'k' is non-negative.



Example:
'arr '= [1,2,3,4,5]
'k' = 1  rotated array = [2,3,4,5,1]
'k' = 2  rotated array = [3,4,5,1,2]
'k' = 3  rotated array = [4,5,1,2,3] and so on.
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
8
7 5 2 11 2 43 1 1
2
Sample Output 1:
2 11 2 43 1 1 7 5
Explanation of Sample Input 1:
Rotate 1 steps to the left: 5 2 11 2 43 1 1 7
Rotate 2 steps to the left: 2 11 2 43 1 1 7 5
Sample Input 2:
4
5 6 7 8
3
Sample Output 2:
8 5 6 7
Explanation of Sample Input 2:
Rotate 1 steps to the left: 6 7 8 5
Rotate 2 steps to the left: 7 8 5 6
Rotate 2 steps to the left: 8 5 6 7
Expected Time Complexity:
O(n), where ‘n’ is the size of the array ‘arr’ and ‘k’ is the number of rotations.
Constraints:
1 <= 'n' <= 10^3
1 <= 'arr'[i] <= 10^9
1 <= 'k' < 'n'


Hints:
1. For an index ‘i’, find where it lands after k swaps.
2. When performing rotation once observe how the positions of all elements change.


*/




/*   
Leetcode 

Question_06 :- 189. Rotate Array

Link :- https://leetcode.com/problems/rotate-array/description/

Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

 

Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
Example 2:

Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation: 
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]
 

Constraints:

1 <= nums.length <= 105
-231 <= nums[i] <= 231 - 1
0 <= k <= 105
 

Follow up:

Try to come up with as many solutions as you can. There are at least three different ways to solve this problem.
Could you do it in-place with O(1) extra space?


*/
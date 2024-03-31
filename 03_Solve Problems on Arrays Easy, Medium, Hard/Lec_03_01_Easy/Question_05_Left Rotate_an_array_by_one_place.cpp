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



/*
Coding Ninja

Question_05 :-  Left Rotate an Array by One

Link :- https://www.naukri.com/code360/problems/left-rotate-an-array-by-one_5026278?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

Problem statement
Given an array 'arr' containing 'n' elements, rotate this array left once and return it.



Rotating the array left by one means shifting all elements by one place to the left and moving the first element to the last position in the array.



Example:
Input: 'a' = 5, 'arr' = [1, 2, 3, 4, 5]

Output: [2, 3, 4, 5, 1]

Explanation: We moved the 2nd element to the 1st position, and 3rd element to the 2nd position, and 4th element to the 3rd position, and the 5th element to the 4th position, and move the 1st element to the 5th position.
Detailed explanation ( Input/output format, Notes, Images )
Sample input 1:
4
5 7 3 2 
Sample output 1:
7 3 2 5
Explanation of sample input 1:
Move the first element to the last and rest all the elements to the left.
Sample input 2:
5
4 0 3 2 5 
Sample output 2:
0 3 2 5 4
Explanation of sample input 2:
Same as sample input 1, Move the first element to the last and rest all the elements to the left
Expected time complexity:
O( n ), Where ‘n’ is the size of an input array ‘arr’.
Constraints :
1 <= 'n' <= 10^5
1 <= 'arr[i] <= 10^9

Time Limit: 1 sec


*/



/*
Leetcode

Question_05 :- 189. Rotate Array

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
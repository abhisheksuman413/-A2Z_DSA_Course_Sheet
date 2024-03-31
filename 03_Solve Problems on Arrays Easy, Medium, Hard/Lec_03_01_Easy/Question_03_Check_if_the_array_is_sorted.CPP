#include <bits/stdc++.h>
using namespace std;

// T.C :- O(n)
// S.C :- O(1)

// int isSorted(int n, vector<int> a)
// {
//     // Write your code here.
//     for (int k = 0; k < n - 1; k++)
//     {
//         if (a[k] > a[k + 1])
//         {
//             return false;
//         }
//     }
//     return true;
// }

// Another solution

// T.C :- O(n)
// S.C :- O(1)

int isSorted(int n, vector<int> a)
{
    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] <= a[i])
        {
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    vector<int> abhi;
    abhi.push_back(1);
    abhi.push_back(2);
    abhi.push_back(3);
    abhi.push_back(3);
    abhi.push_back(5);
    abhi.push_back(6);
    abhi.push_back(7);
    abhi.push_back(8);
    abhi.push_back(9);
    abhi.push_back(10);

    int n = abhi.size();

    cout << isSorted(n, abhi) << endl;

    return 0;
}




/*
Question_03 :- Check Sorted Array

Link :- https://www.naukri.com/code360/problems/ninja-and-the-sorted-check_6581957?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM


Problem statement
You have been given an array ‘a’ of ‘n’ non-negative integers.You have to check whether the given array is sorted in the non-decreasing order or not.



Your task is to return 1 if the given array is sorted. Else, return 0.



Example :
Input: ‘n’ = 5, ‘a’ = [1, 2, 3, 4, 5]
Output: 1

The given array is sorted in non-decreasing order; hence the answer will be 1.
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1 :
4
0 0 0 1
Sample Output 1 :
1
Explanation For Sample Input 1 :
The given array is sorted in non-decreasing order; hence the answer will be 1. 
Sample Input 2 :
5
4 5 4 4 4
Sample Output 2 :
0
Expected Time Complexity:
O(n), Where ‘n’ is the size of an input array ‘a’.
Constraints:
1 ≤ 'n' ≤ 5*10^6
0 ≤ 'a'[i] ≤ 10^9

Time limit: 1 sec


*/






/*
Leetcode


Question_03 :- 1752. Check if Array Is Sorted and Rotated

Link :- https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/

Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.

There may be duplicates in the original array.

Note: An array A rotated by x positions results in an array B of the same length such that A[i] == B[(i+x) % A.length], where % is the modulo operation.

 

Example 1:

Input: nums = [3,4,5,1,2]
Output: true
Explanation: [1,2,3,4,5] is the original sorted array.
You can rotate the array by x = 3 positions to begin on the the element of value 3: [3,4,5,1,2].
Example 2:

Input: nums = [2,1,3,4]
Output: false
Explanation: There is no sorted array once rotated that can make nums.
Example 3:

Input: nums = [1,2,3]
Output: true
Explanation: [1,2,3] is the original sorted array.
You can rotate the array by x = 0 positions (i.e. no rotation) to make nums.
 

Constraints:

1 <= nums.length <= 100
1 <= nums[i] <= 100





*/
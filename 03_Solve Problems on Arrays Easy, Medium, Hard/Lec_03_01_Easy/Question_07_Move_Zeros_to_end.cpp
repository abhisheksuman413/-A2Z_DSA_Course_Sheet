#include <bits/stdc++.h>
using namespace std;

// Brute force solution
/*
T.C :- O(n) + O(x) + O(x-n)  = O(2n)
S.C :- O(x) --> O(n) in worst case if no zero in array
here x is the no of non zero no
and n is size of array
*/

// vector<int> moveZeros(int n, vector<int> a)
// {
//     // Write your code here.

//     vector<int> temp_array;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] == 0)
//         {
//         }
//         else
//         {
//             temp_array.push_back(a[i]);
//         }
//     }

//     //  Niche wala ke place pe ye wala run krte hai to temp_array return krna pdega

//     // for (int i = temp_array.size(); i < n; i++)
//     // {
//     //     temp_array.push_back(0);
//     // }

//     for (int i = 0; i < n; i++)
//     {
//         if (i < temp_array.size())
//         {
//             a[i] = temp_array[i];
//         }
//         else
//         {
//             a[i] = 0;
//         }
//     }

//     return a;
// }

 
// Optimal solution:-

/*
T.C :- O(x) + O(n-x) = O(n)
S.C :- O(1) 
here x is the no of index where 1st zero appers in array
*/

vector<int> moveZeros(int n, vector<int> a)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            break;
        }
    }
    for (int j = i + 1; j < n; j++)
    {
        if (a[j] != 0)
        {
            swap(a[j], a[i]);
            i++;
        }
    }
    return a;
}
 
int main()
{
    vector<int> abhi;
    abhi.push_back(1);
    abhi.push_back(2);
    abhi.push_back(0);
    abhi.push_back(0);
    abhi.push_back(2);
    abhi.push_back(6);
    abhi.push_back(7);
    abhi.push_back(0);
    abhi.push_back(9);
    abhi.push_back(10);

    vector<int> abhi1 = moveZeros(abhi.size(), abhi);

    for (auto i : abhi1)
    {
        cout << i << " ";
    }
    return 0;
}




/*

Coding Ninja 

Question_07 :- Move Zero's to End

Link :- https://www.naukri.com/code360/problems/ninja-and-the-zero-s_6581958?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

Problem statement
Given an array 'arr' of 'n' non-negative integers, your task is to move all the zeros to the end of the array while keeping the non-zero elements at the start of the array in their original order. Return the modified array.



Example :
Input: ‘n’ = 5, ‘arr’ = [1, 2, 0, 0, 2, 3]
Output: [1, 2, 2, 3, 0, 0]

Explanation: Moved all the 0’s to the end of an array, and the rest of the elements retain the order at the start.
Detailed explanation ( Input/output format, Notes, Images )
Sample input 1:
4
0 0 0 1 
Sample output 1:
1 0 0 0 
Explanation of sample input 1:
Output: [1, 0, 0, 0]

We move all the 0’s to the end of an array, and the rest of the elements retained the order at the start.
Sample input 2:
5
4 0 3 2 5 
Sample output 2:
4 3 2 5 0 
Explanation of sample input 2:
Output: [4, 3, 2, 5, 0]

we move all the 0’s to the end of an array, and the rest of the elements retained the order at the start.
Expected time complexity:
 The expected time complexity is O(n).
Constraints:
1 ≤ n ≤ 10^6
0 ≤ arr[i] ≤ 10^9

Time limit: 1 sec

*/



/*
leetcode 


Question_07 :- 283. Move Zeroes

link :- https://leetcode.com/problems/move-zeroes/description/



Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

 

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]
 

Constraints:

1 <= nums.length <= 104
-231 <= nums[i] <= 231 - 1
 

Follow up: Could you minimize the total number of operations done?





*/
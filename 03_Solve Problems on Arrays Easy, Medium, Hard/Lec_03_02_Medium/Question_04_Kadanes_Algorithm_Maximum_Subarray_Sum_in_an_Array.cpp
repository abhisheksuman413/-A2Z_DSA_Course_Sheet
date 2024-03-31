#include <bits/stdc++.h>
using namespace std;

// Brute force solution
/*
T.C :- O(n) * O(n) * O(n) = O(n^3)
S.c :- o(1)

>>> Here n is the size of array

*/

// long long maxSubarraySum(vector<int> a, int n)
// {
//     long long sum = 0;
//     for (int i = 0; i < a.size(); i++)
//     {
//         for (int j = i; j < a.size(); j++)
//         {
//             long long tem_sum = 0;
//             for (int k = i; k <= j; k++)
//             {

//                 tem_sum = tem_sum + a[k];
//             }
//             if(tem_sum>sum)
//             {
//                 sum=tem_sum;
//             }
//         }

//     }
//     return sum;
// }

// Better solution
/*
T.C :- O(n) * O(n)  = O(n^2)
S.c :- o(1)

>>> Here n is the size of array

*/

// long long maxSubarraySum(vector<int> arr, int n)
// {
//     // Write your code here.
//     long long sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             long long tem_sum = 0;
//             for (int k = i; k <= j; k++)
//             {
//                 tem_sum = tem_sum + arr[k];
//             }
//             if (tem_sum > sum)
//             {
//                 sum = tem_sum;
//             }
//         }
//     }
//     return sum;
// }

// Optimal solution

/*
T.C :- O(n)
S.c :- o(1)

>>> Here n is the size of array

*/

// long long maxSubarraySum(vector<int> arr, int n)
// {
//     long long sum = 0;
//     long long maxi = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         sum = sum + arr[i];
//         if (sum > maxi)
//         {
//             maxi = sum;
//         }
//         if (sum < 0) // Ye kr rhe hai because -ve ya 0 ko kisi me add krege to value
//         {           // chota hoga or hame max sum chiye
//             sum = 0;
//         }
//     }
// // Agr question me -ve value ko empty subarray consider krne ka diya ho to ye code run krege
//     // if (maxi > 0)
//     // {
//     //     return maxi;
//     // }
//     // else{
//     //     return 0;
//     // }
//     return maxi;
// }

// This code is for printing the subarray having max sum 
long long maxSubarraySum(vector<int> arr, int n)
{
    long long sum = 0;
    long long maxi = INT_MIN;
    int ans_start=-1;
    int ans_end=-1;
    for (int i = 0; i < n; i++)
    {
        if(sum==0)ans_start =i;
        sum = sum + arr[i];
        if (sum > maxi)
        {
            maxi = sum;
            ans_end =i;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }

    for(int i =ans_start; i<=ans_end; i++){
        cout<<arr[i]<<" ";
    }

    return maxi;
}
int main()
{
    vector<int> a;
    a.push_back(-2);
    a.push_back(-3);
    a.push_back(4);
    a.push_back(-1);
    a.push_back(-2);
    a.push_back(1);
    a.push_back(5);
    a.push_back(-3);

    cout << "max sub aaray sum :- " << maxSubarraySum(a, a.size());
    return 0;
}




/*
Coding Ninja 

Question_04 :-  Maximum Subarray Sum

link :- https://www.naukri.com/code360/problems/maximum-subarray-sum_630526?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

Problem statement
You are given an array 'arr' of length 'n', consisting of integers.



A subarray is a contiguous segment of an array. In other words, a subarray can be formed by removing 0 or more integers from the beginning and 0 or more integers from the end of an array.



Find the sum of the subarray (including empty subarray) having maximum sum among all subarrays.



The sum of an empty subarray is 0.



Example :
Input: 'arr' = [1, 2, 7, -4, 3, 2, -10, 9, 1]

Output: 11

Explanation: The subarray yielding the maximum sum is [1, 2, 7, -4, 3, 2].
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1 :
9
1 2 7 -4 3 2 -10 9 1


Sample Output 1 :
11


Explanation for Sample 1 :
The subarray yielding the maximum sum is [1, 2, 7, -4, 3, 2].


Sample Input 2 :
6
10 20 -30 40 -50 60


Sample Output 2 :
60


Sample Input 3 :
3
-3 -5 -6


Sample Output 3 :
0


Expected time complexity :
The expected time complexity is O(n).


Constraints :
1 <= 'n' <= 10 ^ 6
-10 ^ 6 <= 'arr[i]' <= 10 ^ 6

Time limit: 1sec



*/



/*
Leetcode 

Question_04 :- 53. Maximum Subarray

Link :- https://leetcode.com/problems/maximum-subarray/description/

Given an integer array nums, find the 
subarray
 with the largest sum, and return its sum.

 

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.
Example 2:

Input: nums = [1]
Output: 1
Explanation: The subarray [1] has the largest sum 1.
Example 3:

Input: nums = [5,4,-1,7,8]
Output: 23
Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.
 

Constraints:

1 <= nums.length <= 105
-104 <= nums[i] <= 104
 

Follow up: If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.

*/
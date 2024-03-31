#include <bits/stdc++.h>
using namespace std;

// Brute force solution

/*
T.C :- O(n*n) = O(n^2)
S.C :- O(1)
>>> Here n is the size of array
*/
// int missingNumber(vector<int>& nums) {

//         int nums_size = nums.size();
//         for(int i = 1; i<=nums_size; i++){
//             int flag = 0;
//             for(int j =0; j<nums_size; j++){
//                 if(nums[j]==i){
//                     flag =1;
//                     break;
//                 }
//             }
//             if(flag == 0){
//                 return i;
//             }
//         }

//         return -1;

//     }

// Better Solution

/*
T.C :- O(n) + O(n) =O(2n) 
S.C :- O(n)
>>> Here n is the size of array
*/

// int missingNumber(vector<int>& nums){
//     int nums_size= nums.size();
//     vector<int> hash_arr(nums_size,0);
//     for(int i =0; i<nums_size; i++){
//         hash_arr[nums[i]]=1;
//     }
//     for( int i =0 ; i<nums_size; i++){
//         if(hash_arr[i]== 0){
//             return i;
//             break;
//         }
//     }
//     return -1;
// }

// Optimal Solution (in this case 2 optimal solution   )

// int missingNumber(vector<int> &nums)
// {
//     int nums_size = nums.size()+1;
//     int sum1 = nums_size * (nums_size + 1) / 2;
//     int sum2 = 0;
//     for (int i = 0; i < nums_size; i++)
//     {
//         sum2 = sum2 + nums[i];

//     }
//     return sum1-sum2;
// }

// Another optimal solution

/*
T.C :- O(n*n) = O(n^2)
S.C :- O(n)
>>> Here n is the size of array
>>> But this T.C is better than sum(optimal solution) T.C
    because for big no(10^9) in sum we have to use long instead
    of int and long take slightly more memory than int
*/

int missingNumber(vector<int> &nums)
{
    int xor1 = 0;
    int xor2 = 0;
    // for(int i =0; i<=nums.size(); i++){
    //     xor1 =xor1^i;
    // }
    for (int i = 0; i < nums.size(); i++)
    {
        xor2 = xor2 ^ nums[i];
        xor1 = xor1 ^ i; // Uper fpr loop na use kr ke yhi pe compute kr le rhe hai
    }
    xor1 = xor1 ^ nums.size(); // Uper for loop me last size tak nhi ja rhe hai so usko yha
                               //  kr diye

    return xor1 ^ xor2;
}

int main()
{
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(6);
    a.push_back(7);
    a.push_back(8);
    a.push_back(9);
    a.push_back(10);
    a.push_back(11);

    // missingNumber(a);

    cout << " missing no is " << missingNumber(a) << endl;
    return 0;
}




/*
Coding Ninja 

Question_10 :- Missing Number

Link :- https://www.naukri.com/code360/problems/missing-number_6680467

Problem statement
Given an array ‘a’ of size ‘n’-1 with elements of range 1 to ‘n’. The array does not contain any duplicates. Your task is to find the missing number.



For example:
Input:
'a' = [1, 2, 4, 5], 'n' = 5

Output :
3

Explanation: 3 is the missing value in the range 1 to 5.
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1 :
4 
1 2 3
Sample Output 1:
4
Explanation Of Sample Input 1:
4 is the missing value in the range 1 to 4.
Sample Input 2:
8
1 2 3 5 6 7 8
Sample Output 2:
4
Explanation Of Sample Input 2:
4 is the missing value in the range 1 to 8.
Expected time complexity:
The expected time complexity is O(n).
Constraints:
1 <= 'n' <= 10^6 
1 <= 'a'[i] <= 'n'
Time Limit: 1 sec



*/


/*
Leetcode 



Question_10 :- 268. Missing Number

Link :- https://leetcode.com/problems/missing-number/description/

Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

 

Example 1:

Input: nums = [3,0,1]
Output: 2
Explanation: n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.
Example 2:

Input: nums = [0,1]
Output: 2
Explanation: n = 2 since there are 2 numbers, so all numbers are in the range [0,2]. 2 is the missing number in the range since it does not appear in nums.
Example 3:

Input: nums = [9,6,4,2,3,5,7,0,1]
Output: 8
Explanation: n = 9 since there are 9 numbers, so all numbers are in the range [0,9]. 8 is the missing number in the range since it does not appear in nums.
 

Constraints:

n == nums.length
1 <= n <= 104
0 <= nums[i] <= n
All the numbers of nums are unique.
 

Follow up: Could you implement a solution using only O(1) extra space complexity and O(n) runtime complexity?





*/
#include <bits/stdc++.h>
using namespace std;


// Brute force solution
/*
T.C :- O(n^2) >>> Because we useing nasted loop 
S.C :- O(1)
>>> Here n is the size of array
*/

// int getSingleElement(vector<int> &arr){
//     for(int i =0; i<arr.size(); i++){
//         int num = arr[i];
//         int count = 0;
//         for( int j =0; j <arr.size(); j++){
//             if(arr[j]==num){
//                 count++;
//             }
//         }
//         if(count == 1) return num;

//     }
//     return -1;
// }




//  Better solution (Useing hash Array )

/*
T.C :- O(n)+o(n)+o(maxi)
>>> here maxi is the max elemnet of array 
>>> Or ye T.C hoga jb maxi chota hoga array ke size se to 

T.C :- O(n)+o(n)+O(n) = O(3n)
>>> Or ye T.C hoga jb maxi bda hoga array ke size se to 


S.C :- O(maxi)

>>> Here n is the size of array
*/

// int getSingleElement(vector<int> &arr){
//     int maxi = arr[0];
//     for( int i = 0; i<arr.size(); i++){
//         maxi = max(maxi, arr[i]);
//     }

//     int hash_array[maxi]={0};
//     for( int i =0; i<arr.size(); i++){
//         hash_array[arr[i]]++;
//     }
//     for(int i =0; i<=maxi; i++){
//         if(hash_array[arr[i]]==1) return arr[i];
//     }
//     /*
//     >>> Uper wale for loop me jha pe hash_array me chaeak kr rhe hai 
//         agr array ka max element array ke size se bda hai to iss loop ko 
//         array ke size tak chlayege
//     >>> Agr array ka max element chota hai array ke size se to for loop 
//         ko array ka max element tak chalyege 
//     */

//     return -1;


// }



//  Better solution (Useing hash map )

int getSingleElement(vector<int> &arr){
    map<int, int> hash_map;
    for(int i = 0; i<arr.size(); i++){
        hash_map[arr[i]]++;
    }


    for(auto i : hash_map){
        if(i.second == 1) return i.first;

    }
    return -1;
}



// Optimal Solution (Solved by me 1st attempt)

// int getSingleElement(vector<int> &arr)
// {
//     // Write your code here.

//     int count = 0;
//     int flag = arr[0];
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (arr[i] == flag)
//         {
//             count = count + 1;
//         }
//         else
//         {
//             if (i == arr.size() - 1)
//             {
//                 return arr[i];
//             }
//             else
//             {
//                 if (count == 2)
//                 {
//                     flag = arr[i];
//                     count = 0;
//                 }
//                 else
//                 {
//                     return arr[i - 1];
//                     break;
//                 }
//             }
//         }
//     }
//     return -1;
// }



//  Optimal Solution
 
// int getSingleElement(vector<int> &arr){
//     int xor2 =0;
//      for(int i =0; i<arr.size(); i++){
//         xor2 = xor2^arr[i];
//      }

//      return xor2;

// }

int main()
{
    vector<int> a;
    a.push_back(1);
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(3);
    a.push_back(5);
    a.push_back(5);

    cout << " Single element in array is  : - " << getSingleElement(a) << endl;
    return 0;
}




/*
Coding Ninja 

Question_12 :- Find The Single Element

Link :- https://www.naukri.com/code360/problems/find-the-single-element_6680465?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

Problem statement
You are given a sorted array 'arr' of positive integers of size 'n'.



It contains each number exactly twice except for one number, which occurs exactly once.



Find the number that occurs exactly once.



Example :
Input: ‘arr’ = {1, 1, 2, 3, 3, 4, 4}.

Output: 2

Explanation: 1, 3, and 4 occur exactly twice. 2 occurs exactly once. Hence the answer is 2.
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
5
1 1 2 2 3


Sample Output 1:
3


Explanation of sample output 1:
{1, 2} each occurs twice, whereas 3 occurs only once.
Hence the answer is 3.


Sample Input 2:
5
8 8 9 9 10


Sample Output 2:
10


Expected time complexity :
The expected time complexity is O(n), but try solving it in O(log n).


Constraints:
1 <= 'n' <= 10^4
1 <= 'arr[i]' <= 10^9

‘n’ is always odd.

Time Limit: 1 sec

*/






/*
Leetcode 

Question_12 :- 136. Single Number

Link :- https://leetcode.com/problems/single-number/description/

Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

 

Example 1:

Input: nums = [2,2,1]
Output: 1
Example 2:

Input: nums = [4,1,2,1,2]
Output: 4
Example 3:

Input: nums = [1]
Output: 1
 

Constraints:

1 <= nums.length <= 3 * 104
-3 * 104 <= nums[i] <= 3 * 104
Each element in the array appears twice except for one element which appears only once.

*/
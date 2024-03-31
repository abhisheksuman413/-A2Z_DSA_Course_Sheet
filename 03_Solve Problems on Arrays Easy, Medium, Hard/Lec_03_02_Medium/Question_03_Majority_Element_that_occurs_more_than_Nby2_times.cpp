#include <bits/stdc++.h>
using namespace std;
// Brute Force solution
/*
T.C :- O(n) * O(n) = O(n^2)
S.C :- O(1)

>>> Here n is the size of array 

*/

// int majorityElement(vector<int> v)
// {
//     for(int i =0; i<v.size(); i++)
//     {
//         int count =0;
//         for(int j =0; j<v.size(); j++)
//         {
//             if(v[j]==v[i]) count++;
//         }
//         if(count >v.size()/2) return v[i];
//     }

//     return -1;
// }

// Better Solution 

/*
T.C :- O(n) + O(log n ) = O(n log n ) ---> when using orderd
S.C :- O(n)

>>> Here n is the size of array 

*/

// int majorityElement(vector<int> v)
// {
//     map<int,int>hash_map;
//     for(int i =0; i<v.size(); i++)
//     {
//         hash_map[v[i]]++;
//     }
//     for(auto i :  hash_map)
//     {
//         if(i.second > v.size()/2)
//         {
//             return i.first;
//         }
//     }
//     return -1;
// }


// Optimal solution
/*
T.C :- O(n) + O(n) = O(2n)
---> O(n) hat jyega jb question me diya hoga majority element n/2 se jada hai (Gurantee)

S.C :- O(1)

*/
int majorityElement(vector<int> v)
{
    int count =0;
    int element;
    for(int i =0; i<v.size(); i++)
    {
        if(count ==0)
        {
            count=1;
            element =v[i];
        }
        else if(v[i]==element)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    
    // Verification: 
    /*
    >>> Ye tb kerege jb question diya nhi hai ki Majority element n/2 se jda hai yha nhai
    */
    int temp_count;
    for(int i =0; i<v.size(); i++)
    {
        if(v[i]==element) temp_count++;
    }
    if(temp_count>v.size()/2)return element;
    return -1; 
}

int main()
{
    vector<int> a;
    a.push_back(2);
    a.push_back(2);
    a.push_back(3);
    a.push_back(3);
    a.push_back(1);
    a.push_back(2);
    a.push_back(2);



    cout<<" maj element in array > n/2 is :- "<<majorityElement(a)<<endl;
    return 0;
}




/*
Coding Ninja 

Question_03 :- Majority Element

Link :- https://www.naukri.com/code360/problems/majority-element_6783241?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

Problem statement
You are given an array 'a' of 'n' integers.



A majority element in the array ‘a’ is an element that appears more than 'n' / 2 times.



Find the majority element of the array.



It is guaranteed that the array 'a' always has a majority element.



Example:
Input: ‘n’ = 9, ‘a’ = [2, 2, 1, 3, 1, 1, 3, 1, 1]

Output: 1

Explanation: The frequency of ‘1’ is 5, which is greater than 9 / 2.
Hence ‘1’ is the majority element.
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
9
2 2 1 3 1 1 3 1 1


Sample Output 1:
1


Explanation Of Sample Input 1:
Input: ‘n’ = 9, ‘a’ = [2, 2, 1, 3, 1, 1, 3, 1, 1]

Output: 1

Explanation: The frequency of ‘1’ is 5, which is greater than 9 / 2.
Hence ‘1’ is the majority element.


Sample Input 2:
1
4


Sample Output 2:
4


Sample Input 3:
5
-53 75 56 56 56 


Sample Output 3:
56


Expected time complexity :
The expected time complexity is O(n).


Constraints :
1 <= 'n' <= 10000
0 <= 'arr[i]' <= 10^9

Time limit: 1 second



*/




/*
Leetcode 


Question_03 :- 169. Majority Element

link :- https://leetcode.com/problems/majority-element/description/

Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2
 

Constraints:

n == nums.length
1 <= n <= 5 * 104
-109 <= nums[i] <= 109
 

Follow-up: Could you solve the problem in linear time and in O(1) space?



*/
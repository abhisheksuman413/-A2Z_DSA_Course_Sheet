#include <bits/stdc++.h>
using namespace std;

// Brute force solution :- See notes
// Better solution :- use cpp STL next_Permutation()

// Optimal Solution
/*
T.C :- O(n) + O(n) + O(n) = O(3n) ---> Approx not exact
S.C :- O(1)

>>> Here n is the size of array

*/
vector<int> nextGreaterPermutation(vector<int> &a)
{
    int index = -1;
    int n = a.size();
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] < a[i + 1])
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        reverse(a.begin(), a.end());
        return a;
    }
    else
    {
        for (int i = n - 1; i > index; i--)
        {
            if (a[i] > a[index])
            {
                swap(a[i], a[index]);
                break;
            }
        }
        reverse(a.begin() + index + 1, a.end());
        return a;
    }
}

int main()
{
    vector<int> sit;
    sit.push_back(1);
    sit.push_back(2);
    sit.push_back(3);
    sit.push_back(4);
    sit.push_back(5);
    sit.push_back(6);

    vector<int> abhi = nextGreaterPermutation(sit);
    for (int i = 0; i < abhi.size(); i++)
    {
        cout << abhi[i] << " ";
    }

    return 0;
}



/*
Coding Ninja

Question_08 :-Next Greater Permutation

Link :- https://www.naukri.com/code360/problems/next-greater-permutation_6929564?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM


Problem statement
You are given an array ‘a’ of ‘n’ integers.



You have to return the lexicographically next to greater permutation.



Note:

If such a sequence is impossible, it must be rearranged in the lowest possible order.


Example:

Input: 'a' = [1, 3, 2]

Output: 2 1 3

Explanation: All the permutations of [1, 2, 3] are [[1, 2, 3], [1, 3, 2], [2, 1, 3], [2, 3, 1], [3, 1, 2], [3, 2, 1], ]. Hence the next greater permutation of [1, 3, 2] is [2, 1, 3].


Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
3
3 1 2


Sample Output 1:
3 2 1


Explanation Of Sample Input 1:
Input:
A = [3, 1, 2]
Output:
3 2 1

Explanation: All the permutations of [1, 2, 3] are [[1, 2, 3], [1, 3, 2], [2, 1, 3], [2, 3, 1], [3, 1, 2], [3, 2, 1], ]. Hence the next greater permutation of [3, 1, 2] is [3, 2, 1].


Sample Input 2:
3
3 2 1


Sample Output 2:
1 2 3


Constraints:
1 <= n <= 100
1 <= a[ i ] <= 100
Time Limit: 1 sec


*/




/*
Leetcode 

Question_08 :- 31. Next Permutation

Link :- https://leetcode.com/problems/next-permutation/description/

A permutation of an array of integers is an arrangement of its members into a sequence or linear order.

For example, for arr = [1,2,3], the following are all the permutations of arr: [1,2,3], [1,3,2], [2, 1, 3], [2, 3, 1], [3,1,2], [3,2,1].
The next permutation of an array of integers is the next lexicographically greater permutation of its integer. More formally, if all the permutations of the array are sorted in one container according to their lexicographical order, then the next permutation of that array is the permutation that follows it in the sorted container. If such arrangement is not possible, the array must be rearranged as the lowest possible order (i.e., sorted in ascending order).

For example, the next permutation of arr = [1,2,3] is [1,3,2].
Similarly, the next permutation of arr = [2,3,1] is [3,1,2].
While the next permutation of arr = [3,2,1] is [1,2,3] because [3,2,1] does not have a lexicographical larger rearrangement.
Given an array of integers nums, find the next permutation of nums.

The replacement must be in place and use only constant extra memory.

 

Example 1:

Input: nums = [1,2,3]
Output: [1,3,2]
Example 2:

Input: nums = [3,2,1]
Output: [1,2,3]
Example 3:

Input: nums = [1,1,5]
Output: [1,5,1]
 

Constraints:

1 <= nums.length <= 100
0 <= nums[i] <= 100


*/
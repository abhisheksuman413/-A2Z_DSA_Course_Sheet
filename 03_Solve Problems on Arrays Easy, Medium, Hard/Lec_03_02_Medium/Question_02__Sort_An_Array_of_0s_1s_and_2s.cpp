#include <bits/stdc++.h>
using namespace std;

// Brute force solution

/*
>>> If this is merge sort y Quicksort
T.C :- O(n log n )
S.C :- O(n)
>>> Here n is the size of array
*/

// void sortArray(vector<int> &arr, int n)
// {
//     sort(arr.begin(), arr.end());
// }



// Better solution
/*

T.C :- O(n) + O(n) = O(2n)
S.C :- O(1)

>>> Here n is size of array


*/

// void sortArray(vector<int> &arr, int n)
// {
//     int zero = 0;
//     int one = 0;
//     int two = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 0)
//         {
//             zero++;
//         }
//         if (arr[i] == 1)
//         {
//             one++;
//         }
//         if (arr[i] == 2)
//         {
//             two++;
//         }
//     }
//     cout << zero << one << two << endl;
//     for (int i = 0; i < zero; i++)
//     {
//         arr[i] = 0;
//     }
//     for (int i = zero; i < one + zero; i++)
//     {
//         arr[i] = 1;
//     }

//     for (int i = one + zero; i < two + zero + one; i++)
//     {
//         arr[i] = 2;
//     }
// }



// Optiml solution
/*
T.C :- O(n)
S.C :- O(1)

*/
void sortArray(vector<int> &arr, int n)
{
    int low =0;
    int mid =0;
    int high =n-1;
    while (mid<=high){
        if(arr[mid]==0)
        {
            swap(arr[low],arr[mid]);
            mid++;
            low++;
        }
        else if(arr[mid]==1)mid++;
        else
        {
            swap(arr[mid],arr[high]);
            high--;
        }
    }

}

int main()
{
    vector<int> abhi;
    abhi.push_back(2);
    abhi.push_back(2);
    abhi.push_back(2);
    abhi.push_back(2);
    abhi.push_back(0);
    abhi.push_back(0);
    abhi.push_back(1);
    abhi.push_back(1);
    abhi.push_back(0);

    sortArray(abhi, abhi.size());

    for (int i = 0; i < abhi.size(); i++)
    {
        cout << i << " index value :- " << abhi[i] << endl;
    }

    return 0;
}



/*
Coding Ninja

Question_02 :-  Sort An Array of 0s, 1s and 2s

Link :- https://www.naukri.com/code360/problems/sort-an-array-of-0s-1s-and-2s_892977?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

Problem statement
You have been given an array/list 'arr' consisting of 'n' elements.



Each element in the array is either 0, 1 or 2.



Sort this array/list in increasing order.



Do not make a new array/list. Make changes in the given array/list.



Example :
Input: 'arr' = [2, 2, 2, 2, 0, 0, 1, 0]

Output: Final 'arr' = [0, 0, 0, 1, 2, 2, 2, 2]

Explanation: The array is sorted in increasing order.
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
8
2 2 2 2 0 0 1 0


Sample Output 1:
0 0 0 1 2 2 2 2


Explanation of sample input 1 :
The initial array 'arr' is [2, 2, 2, 2, 0, 0, 1, 0].

After sorting the array in increasing order, 'arr' is equal to:
[0, 0, 0, 1, 2, 2, 2, 2]


Sample Input 2:
5
1 1 1 1 1


Sample Output 2:
1 1 1 1 1


Expected time complexity :
The expected time complexity is O(n).


Constraints:
1 <= 'n' <= 10 ^ 4
0 <= 'arr[i]' <= 2

Time limit: 1 second


*/


/*
Leetcode 

Question_02 :- 75. Sort Colors

Link :- https://leetcode.com/problems/sort-colors/description/

Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.

 

Example 1:

Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
Example 2:

Input: nums = [2,0,1]
Output: [0,1,2]
 

Constraints:

n == nums.length
1 <= n <= 300
nums[i] is either 0, 1, or 2.
 

Follow up: Could you come up with a one-pass algorithm using only constant extra space?




*/
#include <bits/stdc++.h>
using namespace std;

// Brute Force Solution

/*
T.C :- O(n) + O(n/2) 
S.C :- O(n)

*/

// vector<int> alternateNumbers(vector<int>&a) {
//     // Write your code here.
//     vector<int> positive;
//     vector<int> negative;
//     vector<int> aa(a.size(),0);
//     for(int i=0; i<a.size();i++)
//     {
//         if(a[i]<0)
//         {
//             negative.push_back(a[i]);
//         }
//         else
//         {
//             positive.push_back(a[i]);
//         }
//     }
//     // int p=0;
//     // int q=0;
//     // for(int i =0; i<a.size(); i++)
//     // {
//     //     if(i%2==0 || i==0)
//     //     {
//     //         a[i]=positive[p]; 
//     //         p++;
//     //     }
//     //     else
//     //     {
//     //         a[i]=negative[q];
//     //         q++;
//     //     }
//     // }

//     for(int i =0; i<a.size()/2; i++)
//     {
//        aa[i*2] = positive[i];
//        aa[i*2+1]=negative[i];
//     }

//     return  aa;
// }


// Optimal solution (if array hai Equal +ve & -ve element)

/*
T.C :- O(n) 
S.C :- O(n)

*/

// vector<int> alternateNumbers(vector<int>&a)
// {
//     vector<int> temp_arr(a.size(),0);
//     int positive=0;
//     int negative=1;
//     for(int i =0; i<a.size(); i++)
//     {
//         if(a[i]>0)
//         {
//             temp_arr[positive]=a[i];
//             positive= positive+2;
//         }
//         else
//         {
//             temp_arr[negative]=a[i];
//             negative=negative+2;
//         }
//     }
//     return  temp_arr;
// }




/*

>>> If in array -ve & +ve element are not same then
>>> same -ve & +ve wala ka brute force solution hi iska 
    optimal solution hoga
>>> Only jo element jda hoga arrray me usko last me dal dege 
*/

// Optimal solution


/*
T.C :- O(n) + O(n) 
S.C :- O(n)

*/

vector<int> alternateNumbers(vector<int>&a)
{
    vector<int> posative;
    vector<int> negative;

    for(int i=0; i<a.size();i++)
    {
        if(a[i]<0)
        {
            negative.push_back(a[i]);
        }
        else
        {
            posative.push_back(a[i]);
        }
    }
    // for( int i =0; i<posative.size();i++){
    //     cout<<posative[i]<<" ";
    // }
    // cout<<endl;
    //     for( int i =0; i<negative.size();i++){
    //     cout<<negative[i]<<" ";
    // }
    // cout<<endl;

    if(posative.size()>negative.size())
    {
        for(int i=0; i<negative.size(); i++)
        {
            a[2*i]=posative[i];
            a[2*i+1]=negative[i];
        }
        int index = negative.size()*2;
        for(int i = negative.size();i<posative.size();i++)
        {
            a[index]=posative[i];
            index++;
        }
    }
    else
    {
       for(int i=0; i<posative.size(); i++)
        {
            a[2*i]=posative[i];
            a[2*i+1]=negative[i];
        }
        int index = posative.size()*2;
        for(int i = posative.size();i<negative.size();i++)
        {
            a[index]=negative[i];
            index++;
        } 
    }

    
return a;
}

int main()
{
	vector<int> sit;
	sit.push_back(3);
	sit.push_back(3);
	sit.push_back(3);
	sit.push_back(3);
	sit.push_back(1);
	sit.push_back(-2);
	sit.push_back(-5);
	sit.push_back(2);
	sit.push_back(-4);


    vector<int> abhi ;

    abhi= alternateNumbers(sit);

    for(int i=0; i<abhi.size();i++){
        cout<<abhi[i]<<" ";
    }
    
    return 0;
}




/*
Coding Ninja 

Question_07 :- Alternate Numbers

Link :- https://www.naukri.com/code360/problems/alternate-numbers_6783445?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf


Problem statement
There is an array ‘A’ of size ‘N’ with an equal number of positive and negative elements.

Without altering the relative order of positive and negative numbers, you must return an array of alternative positive and negative values.

Note:

Start the array with a positive number. 
For example

Input:
A = [1, 2, -4, -5], N = 4
Output:
1 -4  2 -5
Explanation: 
Positive elements = 1, 2
Negative elements = -4, -5
To maintain relative ordering, 1 must occur before 2, and -4 must occur before -5.
Detailed explanation ( Input/output format, Notes, Images )
Constraints:
2 <= N <= 10^5 
-10^9 <= A[i] <= 10^9, A[i] != 0
N%2==0

Time Limit: 1 sec
Sample Input 1:
6 
1 2 -3 -1 -2 3
Sample Output 1:
1 -3 2 -1 3 -2 
Explanation Of Sample Input 1:
Testcase 1:
Input:
A = [1, 2, -3, -1, -2, 3], N = 6
Output:
1 -3 2 -1 3 -2
Explanation: 
Positive elements = 1, 2, 3
Negative elements = -3, -1, -2
To maintain relative ordering, 1 should come before 2, and 2 must come before 3.
Also, -3 should come before -1, and -1 must come before -2.
Sample Input 2:
4
-2 -3 4 5
Sample Output 2:
4 -2 5 -3


*/





/*
Leetcode 

Question_07 :- 2149. Rearrange Array Elements by Sign

Link :- https://leetcode.com/problems/rearrange-array-elements-by-sign/description/

You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.

You should return the array of nums such that the the array follows the given conditions:

Every consecutive pair of integers have opposite signs.
For all integers with the same sign, the order in which they were present in nums is preserved.
The rearranged array begins with a positive integer.
Return the modified array after rearranging the elements to satisfy the aforementioned conditions.

 

Example 1:

Input: nums = [3,1,-2,-5,2,-4]
Output: [3,-2,1,-5,2,-4]
Explanation:
The positive integers in nums are [3,1,2]. The negative integers are [-2,-5,-4].
The only possible way to rearrange them such that they satisfy all conditions is [3,-2,1,-5,2,-4].
Other ways such as [1,-2,2,-5,3,-4], [3,1,2,-2,-5,-4], [-2,3,-5,1,-4,2] are incorrect because they do not satisfy one or more conditions.  
Example 2:

Input: nums = [-1,1]
Output: [1,-1]
Explanation:
1 is the only positive integer and -1 the only negative integer in nums.
So nums is rearranged to [1,-1].
 

Constraints:

2 <= nums.length <= 2 * 105
nums.length is even
1 <= |nums[i]| <= 105
nums consists of equal number of positive and negative integers.
 

It is not required to do the modifications in-place.




*/
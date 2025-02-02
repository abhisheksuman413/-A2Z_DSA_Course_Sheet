#include <bits/stdc++.h>
using namespace std;

// Optimal Solution

/*
T.C :- O(n)
S.C :- O(1)
>>> Here n is the size of array
*/

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int count = 0;
    int maxi = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1)
        {
            count = count + 1;
            // if (maxi < count)
            // {
            //     maxi = count;
            // }
            // Uper wale if ke bdle niche wala v likh skte hai 
            maxi = max(maxi,count);
        }
        else
        {
            count = 0;
        }
    }
    return maxi;
}

int main()
{
    vector<int> a;
    a.push_back(1);
    a.push_back(1);
    a.push_back(0);
    a.push_back(1);
    a.push_back(1);
    a.push_back(1);
    a.push_back(0);
    a.push_back(1);
    a.push_back(1);
    

    cout<<" max Consecutive no is : - "<<findMaxConsecutiveOnes(a)<<endl;
    return 0;
}



/*
Coding Ninja 

Question_11 :- Traffic


Link :- https://www.naukri.com/code360/problems/traffic_6682625?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM


Problem statement
The Road Department is planning to make some new traffic regulations. But to make the regulations they need to analyze the current situation of the traffic.



The traffic can be analyzed from an array 'VEHICLE' of length 'N' , which consists of ‘0’ if there is no vehicle at that point and ‘1’ if there is a vehicle at the point.



Unfortunately the array ‘VEHICLE’ got corrupted as at most 'M' '1' got flipped to ‘0’.



Traffic jam is defined as the length of consecutive vehicles on the road.



The Road Department wants to know the worst possible scenario for the traffic jam. Return the maximum possible length of the consecutive vehicles.



Example:
Input: ‘N’ = 3, ‘M’ = 1, VEHICLE’ = [0, 1, 1]

Output: 3

Explanation:
As there is at most one 1 that got flipped to 0, so for the worst-case scenario we can reflip the first(1-based ) index to 1, resulting in a length of 3. 
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
3 1
0 1 1
Sample Output 1:
3
Explanation Of Sample Input 1 :
As there is at most one 1 that got flipped to 0, so for the worst-case scenario we can reflip the first index (1- based) to 1, resulting in a length of 3. 
Sample Input 2 :
6 3
0 1 0 0 1 0
Sample Output 2 :
5
Constraints:
1  <= N <= 10^6
1 <= M <= N
0 <= VEHICLE[i] <= 1
Time Limit: 1 sec


*/



/*
Leetcode 

Question_11 :- 485. Max Consecutive Ones 

Link :- https://leetcode.com/problems/max-consecutive-ones/description/

Given a binary array nums, return the maximum number of consecutive 1's in the array.

 

Example 1:

Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
Example 2:

Input: nums = [1,0,1,1,0,1]
Output: 2
 

Constraints:

1 <= nums.length <= 105
nums[i] is either 0 or 1.


*/
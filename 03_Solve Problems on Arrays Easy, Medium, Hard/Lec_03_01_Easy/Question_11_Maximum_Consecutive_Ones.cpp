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
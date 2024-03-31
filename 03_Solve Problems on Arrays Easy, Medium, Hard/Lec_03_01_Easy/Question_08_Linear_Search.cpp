#include <bits/stdc++.h>
using namespace std;

// Optimal solution 
/*
T.C :- O(n)
S.C :- O(1)
*/


int linearSearch(int n, int num, vector<int> &arr)
{
    // Write your code here.

    for(int i =0; i<n; i++){
        if(num==arr[i]){
            return i+1;
            break;
        }
    }
    return -1;
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



    cout<<linearSearch(abhi.size(),88,abhi);
    return 0;
}




/*
Coding Ninja 

Question_08 :- Linear Search

Link :- https://www.naukri.com/code360/problems/linear-search_6922070?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf


Problem statement
You are given an array ‘arr’ containing ‘n’ integers. You are also given an integer ‘num’, and your task is to find whether ‘num’ is present in the array or not.



If ‘num’ is present in the array, return the 0-based index of the first occurrence of ‘num’. Else, return -1.



Example:
Input: ‘n’ = 5, ‘num’ = 4 
'arr' =  [6,7,8,4,1] 

Output: 3

Explanation:
4 is present at the 3rd index.
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
5 4
6 7 8 4 1
Sample Output 1 :
3
Explanation Of Sample Input 1:
4 is present at the 3rd index.
Sample Input 2:
4 2
2 5 6 2
Sample Output 2 :
0
Explanation Of Sample Input 1:
2 is not present in the given array.
Expected time complexity:
The expected time complexity is O(n).
Constraints:
1  <= 'n' <= 10^6
1 <= 'arr'[i] <= 1000
Time Limit: 1 sec

*/
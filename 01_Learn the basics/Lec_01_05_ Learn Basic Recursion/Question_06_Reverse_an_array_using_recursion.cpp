#include <bits/stdc++.h>
using namespace std;

// void fun(int n, stack<int> &number, vector<int> num)
// {
//     if (n == 0)
//     {
//         return;
//     }
//     else
//     {
//         fun(n - 1, number, num);
//         number.push(num[n - 1]);
//     }
// }

// vector<int> reverseArray(int n, vector<int> &nums)
// {

//     stack<int> number;
//     fun(n, number, nums);
//     vector<int> sit4;
//     int p = number.size();
//     for (int i = 0; i < p; i++)
//     {
//         sit4.push_back(number.top());
//         number.pop();
//     }
//     return sit4;
// }


// Another Sloution


void fun(int n , int i , vector<int>&nums){

    if(i>=n/2){
        return;
    }
    else{
        swap(nums[i],nums[n-i-1]);
        fun(n ,i+1,nums);
    }

}


vector<int> reverseArray(int n, vector<int>&nums){
    int i =0;
    fun(n,i,nums);
    return nums;
}


int main()
{

    vector<int> sit;
    sit.push_back(8);
    sit.push_back(6);
    sit.push_back(5);
    sit.push_back(2);
    sit.push_back(7);
    sit.push_back(9);
    int n = sit.size();

    vector<int> sit1 = reverseArray(n, sit);
    for (auto i : sit1)
    {
        cout << i;
    }

    return 0;
}








































/*

Question_06 :-  N to 1 without loop


Link:- https://www.codingninjas.com/studio/problems/reverse-an-array_8365444?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM


Problem statement
Given an array 'arr' of size 'n'.



Return an array with all the elements placed in reverse order.



Note:
You don’t need to print anything. Just implement the given function.
Example:
Input: n = 6, arr = [5, 7, 8, 1, 6, 3]

Output: [3, 6, 1, 8, 7, 5]

Explanation: After reversing the array, it looks like this [3, 6, 1, 8, 7, 5].
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
8
3 1 1 7 4 2 6 11
Sample Output 1:
11 6 2 4 7 1 1 3    
Explanation Of Sample Input 1 :
After reversing the array, it looks like this [11, 6, 2, 4, 7, 1, 1, 3].
Sample Input 2:
4
8 1 3 2
Sample Output 2:
2 3 1 8
Explanation Of Sample Input 2 :
After reversing the array, it looks like this [2, 3, 1, 8].
Expected time complexity
The expected time complexity is O(n).
Constraints:
1 <= 'n' <= 10^6
-10^9 <= 'arr[i]' <=10^9


*/
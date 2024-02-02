#include <bits/stdc++.h>
using namespace std;

// void recursivefunction(int p, int &sum)
// {
//     if (p == 0)
//     {
//         return;
//     }
//     else
//     {
//         recursivefunction(p - 1, sum);
//         sum = sum + p;
//     }
// }

// long long sumFirstN(long long n)
// {
//     int sum = 0;
//     recursivefunction(n, sum);
//     return sum;
// }



// Another Solution with Time Limit: 1 sec


long long sumFirstN(long long n) {
    // Declare a variable 'ans'.
    long long ans;
    
    // Assign 'ans' to sum of first 'n' natural numbers.
    ans = n * (n + 1) / 2;
    
    return ans;
}



// Another Solution with Functional Recursion 

// long long sumFirstN(long long n){
//     if(n==0){
//         return 0;
//     }
//     else{
//         return n + sumFirstN(n-1);
//     }
// }




int main()
{
    cout << sumFirstN(5);
    return 0;
}


/*

Question_04 :-  Sum Of First N Numbers

Link :- https://www.codingninjas.com/studio/problems/sum-of-first-n-numbers_8876068?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM


Problem statement
You are given an integer ‘n’.



Your task is determining the sum of the first ‘n’ natural numbers and returning it.



Example:
Input: ‘n’ = 3

Output: 6

Explanation: The sum of the first 3 natural numbers is 1 + 2 + 3, equal to 6.
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
3
Sample Output 1 :
6
Explanation Of Sample Input 1:
Input: ‘n’ = 3

Output: 6

Explanation: The sum of the first 3 natural numbers is 1 + 2 + 3, equal to 6.
Sample Input 2:
5
Sample Output 2:
15
Explanation of sample output 2:
Input: ‘n’ = 5

Output: 15

Explanation: The sum of the first 5 natural numbers is 1 + 2 + 3 + 4 + 5, equal to 15.
Expected Time Complexity:
The expected time complexity is O(1).
Expected Space Complexity:
The expected space complexity is O(1).
Constraints:
1 <= n <= 10^9
Time Limit: 1 sec



*/
#include <bits/stdc++.h>
using namespace std;

// solution for Leetcode

// int fib(int n) {
//         if(n<=1){
//             return n;
//         }
//         else{
//             int last = fib(n-1);
//             int seclast =fib(n-2);
//             return last+seclast;
//         }
        
//     }




// Solution for codingninjas

int fib(int n, vector<int> &series)
{
    if (n == 2)
        return series[n - 1] = 1;
    if (n == 1)
        return series[n - 1] = 0;
    if (series[n - 1] != -1)
        return series[n - 1];

    int last = fib(n - 1, series);
    int secondLast = fib(n - 2, series);

    return series[n - 1] = last + secondLast;
}

vector<int> generateFibonacciNumbers(int n)
{

    vector<int> abhi(n, -1);
    fib(n, abhi);
    abhi[0] = 0;
    return abhi;
}

int main()
{
    vector<int> abhi = generateFibonacciNumbers(8);
    for (auto i : abhi)
    {
        cout << i;
    }
    return 0;
}





/*

Leetcode Question 
Question_08 :-  509. Fibonacci Number




The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,

F(0) = 0, F(1) = 1
F(n) = F(n - 1) + F(n - 2), for n > 1.
Given n, calculate F(n).

 

Example 1:

Input: n = 2
Output: 1
Explanation: F(2) = F(1) + F(0) = 1 + 0 = 1.
Example 2:

Input: n = 3
Output: 2
Explanation: F(3) = F(2) + F(1) = 1 + 1 = 2.
Example 3:

Input: n = 4
Output: 3
Explanation: F(4) = F(3) + F(2) = 2 + 1 = 3.
 

Constraints:

0 <= n <= 30

*/





/*

Codingninjas Question

Question_08 :- Print Fibonacci Series


Problem statement
Given an integer ‘n’, return first n Fibonacci numbers using a generator function.



Example:
Input: ‘n’ = 5

Output: 0 1 1 2 3

Explanation: First 5 Fibonacci numbers are: 0, 1, 1, 2, and 3.
Note:
You don't need to print anything. Just implement the given function.
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
5
Sample Output 1:
0 1 1 2 3
Explanation Of Sample Input 1:
The first 5 Fibonacci numbers are 0, 1, 1, 2, and 3.
Sample Input 2:
3
Sample Output 2:
0 1 1
Explanation Of Sample Input 2:
The first 5 Fibonacci numbers are 0, 1, 1.
Expected time complexity
The expected time complexity is O(n).
Constraints:
1 <= n <= 45
Time Limit: 1 s


*/
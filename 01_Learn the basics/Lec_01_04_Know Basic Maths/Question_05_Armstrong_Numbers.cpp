#include <bits/stdc++.h>
using namespace std;

bool checkArmstrong(int x)
{
    // Write your code here

    int count = 0;
    int p = x;
    int q = x;
    while (p != 0)
    {
        p = p / 10;
        ++count;
    }
    long ans = 0;
    int num = 0;
    while (x)
    {
        int rem = x % 10;
        ans = ans * 10 + rem;
        x = x / 10;
        num = num + pow(rem, count);
    }
    if (num == q)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{

    return 0;
}
/*
Question_05 :- Armstrong Numbers

Problem statement
You are given an integer 'n'.



Return 'true' if 'n' is an Armstrong number, and 'false' otherwise.



Note:
An Armstrong number is a number (with 'k' digits) such that the sum of its
 digits raised to 'kth' power is equal to the number itself. For example, 371
  is an Armstrong number because 3^3 + 7^3 + 1^3 = 371.


Example:
Input: 'n' = 1634

Output: true

Explanation:
1634 is an Armstrong number, as 1^4 + 6^4 + 3^4 + 4^4 = 1634


Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1 :
1


Sample Output 1 :
true


Explanation of Sample Input 1 :
1 is an Armstrong number as, 1^1 = 1.


Sample Input 2 :
103


Sample Output 2 :
false


Expected Time Complexity:
Try to solve this in O(log(n)). 


Constraints:
1 <= ‘n’ <= 10^9

Time Limit: 1 sec

*/
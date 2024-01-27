#include <bits/stdc++.h>
using namespace std;

// Time limit exceeded (Niche wala solution ye problem hai)
// bool isPrime(int n)
// {
// 	// Write your code here.
// 	if( n <= 1){
// 		return false;
// 	}

// 	for( int i =2; i<n; i++){
// 		if(n%i==0){
// 			return false;
// 		}
// 	}
// 	return true;
// }

// ***** Another method *****

// bool isPrime(int n)
// {
// 	// Write your code here.

// 	vector<int> ls;
// 	for (int i = 1; i * i <= n; i++)
// 	{
// 		if (n % i == 0)
// 		{
// 			ls.push_back(i);
// 			if ((n / i) != i)
// 			{
// 				ls.push_back(n / i);
// 			}
// 		}
// 	}
// 	if (ls.size() == 2)
// 	{
// 		return 1;
// 	}
// 	else
// 	{
// 		return 0;
// 	}
// }

// ***** Another Method *****

bool isPrime(int n)
{
	int count = 0;
	for (int i = 1; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			count++;
			if ((n / i) != i)
			{
				count++;
			}
		}
	}
	if (count == 2)
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
link:- https://www.codingninjas.com/studio/problems/check-prime_624934?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM


Problem statement
A prime number is a positive integer that is divisible by exactly 2 integers, 1 and the number itself.



You are given a number 'n'.



Find out whether 'n' is prime or not.



Example :
Input: 'n' = 5

Output: YES

Explanation: 5 is only divisible by 1 and 5. 2, 3 and 4 do not divide 5.
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
5


Sample Output 1:
YES


Explanation of sample input 1 :
5 is only divisible by 1 and 5. 2, 3 and 4 do not divide 5.


Sample Input 2:
6


Sample Output 2:
NO


Explanation of sample input 2 :
6 is divisible by 1, 2, 3, and 6. Therefore it is not a prime number.
Numbers having more than two factors are known as composite numbers.


Sample Input 3:
1


Sample Output 3:
NO


Explanation of sample input 3 :
1 is divisible only by 1, having only one factor. Therefore it is not a prime number.
1 is neither a prime nor a composite number.


Expected time complexity :
The expected time complexity is O(sqrt('n')).


Constraints :
1 <= 'n' <= 10 ^ 9

Time limit: 1 second

*/
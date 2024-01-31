#include <bits/stdc++.h>
using namespace std;

// int co = 1;
// vector<int> ls;

// vector<int> printNos(int x)
// {

//     if (co == x+1)
//     {
//         return ls;
//     }
//     else
//     {
//         ls.emplace_back(co);
//         // cout << co << endl;
//         co++;
//         printNos(x);
//     }

//     return ls;
//     // Write Your Code Here
// }

//  Another Solution

// void recursivefunction(int p , vector<int>&abhi){
// 	if(p==0){
// 		return;
// 	}
// 	else{
// 		// cout<<p;
// 		abhi.push_back(p);
// 		recursivefunction(p-1,abhi);
// 	}
// }

// vector<int> printNos(int n){

// 	vector<int>abhi1;
// 	recursivefunction(n,abhi1);
//     sort(abhi1.begin(),abhi1.end());
// 	return abhi1;
// }

// Another sloution using backtracking

void recursivefunction(int p, vector<int> &abhi)
{
	if (p == 0)
	{
		return;
	}
	else
	{
		// cout<<p;
		recursivefunction(p - 1, abhi);
		abhi.push_back(p);
	}
}

vector<int> printNos(int n)
{

	vector<int> abhi1;
	recursivefunction(n, abhi1);
	return abhi1;
}

int main()
{

	vector<int> bs = printNos(5);
	for (auto i : bs)
	{
		cout << i;
	}

	return 0;
}

/*

Question_01&02 :- 1 to N Without Loop

Link :- https://www.codingninjas.com/studio/problems/print-1-to-n_628290?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

Problem statement
You are given an integer ‘n’.



Your task is to return an array containing integers from 1 to ‘n’ (in increasing order) without using loops.



Example:
Input: ‘n’ = 5

Output: 1 2 3 4 5

Explanation: An array containing integers from ‘1’ to ‘n’ is [1, 2, 3, 4, 5].
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
5
Sample Output 1 :
1 2 3 4 5
Explanation Of Sample Input 1:
The array contains all integers from 1 to 5 in ascending order.
Sample Input 2:
2
Sample Output 2:
1 2
Explanation Of Sample Input 2:
The array contains all integers from 1 to 2 in ascending order.
Expected Time Complexity:
The expected time complexity is O(n), where 'n' is the given integer.
Constraints:
1 <= n <= 10^6

Time Limit: 1-sec
*/
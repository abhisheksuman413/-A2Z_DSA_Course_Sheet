#include <bits/stdc++.h>
using namespace std;

void recursivefunction(int p , vector<int>&abhi){
	if(p==0){
		return;
	}
	else{
		abhi.push_back(p);
		recursivefunction(p-1,abhi);
	}
}


vector<int> printNos(int n){

	vector<int>abhi1;
	recursivefunction(n,abhi1);
	// sort(abhi1.begin(),abhi1.end(),greater<int>());
	return abhi1;
}


// Another sloution using backtracking


// void recursivefunction(int p , vector<int>&abhi){
// 	if(p==0){
// 		return;
// 	}
// 	else{
// 		// cout<<p;
// 		recursivefunction(p-1,abhi);
// 		abhi.push_back(p);
// 	}
// }


// vector<int> printNos(int n){

// 	vector<int>abhi1;
// 	recursivefunction(n,abhi1);
// 	sort(abhi1.begin(),abhi1.end(),greater<int>());
// 	return abhi1;
// }


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

Question_03 :-  N to 1 without loop

Link :- https://www.codingninjas.com/studio/problems/n-to-1-without-loop_8357243?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf



Problem statement
You are given an integer ‘n’.



Your task is to return an array containing integers from ‘n’ to ‘1’ (in decreasing order) without using loops.



Note:
In the output, you will see the array returned by you.
Example:
Input: ‘n’ = 5

Output: 5 4 3 2 1

Explanation: An array containing integers from ‘n’ to ‘1’ is [5, 4, 3, 2, 1].
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
5
Sample Output 1 :
5 4 3 2 1
Explanation Of Sample Input 1:
Input: ‘n’ = 5

Output: 5 4 3 2 1

Explanation: An array containing integers from ‘5’ to ‘1’ is [5, 4, 3, 2, 1].
Sample Input 2:
2
Sample Output 2:
2 1
Explanation Of Sample Input 2:
Input: ‘n’ = 2

Output: 2 1

Explanation: An array containing integers from ‘2’ to ‘1’ is [2, 1].
Expected Time Complexity:
The expected time complexity is O(n), where 'n' is the given integer.
Expected Space Complexity:
The expected space complexity is O(n), where 'n' is the given integer.
Constraints:
1 <= n <= 10^4

Time Limit: 1-sec

*/
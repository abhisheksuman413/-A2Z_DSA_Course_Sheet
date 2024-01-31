#include <bits/stdc++.h>
using namespace std;

// int co= 1;
// vector<string>abhi;
// vector<string> printNTimes(int n) {
// 	if(co== n+1){
// 		return abhi;
// 	}
// 	else{
// 		abhi.push_back("Coding Ninjas ");
// 		co++;
// 		printNTimes(n);
//     }
// 	return abhi;
// 	// Write your code here.
// }



// Another Solution 


void recursivefunction(int p , vector<string>&abhi){
	if(p==0){
		return;
	}
	else{
		// cout<<p;
		abhi.push_back("Coding Ninjas");
		recursivefunction(p-1,abhi);
	}
}


vector<string>printNTimes(int n){

	vector<string>abhi1;
	recursivefunction(n,abhi1);
	// cout<<abhi1.size();
	return abhi1;
}

// Another Solution using backtracking

// void recursivefunction(int p , vector<string>&abhi){
// 	if(p==0){
// 		return;
// 	}
// 	else{
// 		// cout<<p;
// 		recursivefunction(p-1,abhi);
// 		abhi.push_back("Coding Ninjas");
// 	}
// }


// vector<string>printNTimes(int n){

// 	vector<string>abhi1;
// 	recursivefunction(n,abhi1);
// 	// cout<<abhi1.size();
// 	return abhi1;
// }

int main()
{
    vector<string> bs = printNTimes(5);
    for(auto i : bs){
        cout<<i;
    }
    // cout << bs.size() << endl;
    return 0;
}



/*


Question_01 :-   Print n times

Link :- https://www.codingninjas.com/studio/problems/-print-n-times_8380707?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

Problem statement
You are given an integer ‘n’.



Print “Coding Ninjas ” ‘n’ times, without using a loop.



Example:
Input: ‘n’  = 4

Output:
Coding Ninjas Coding Ninjas Coding Ninjas Coding Ninjas 

Explanation: “Coding Ninjas” is printed 4 times. 


Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
3


Sample Output 1:
Coding Ninjas Coding Ninjas Coding Ninjas 


Explanation of sample output 1:
“Coding Ninjas” is printed 3 times. 

Sample Input 2:
5


Sample Output 2:
Coding Ninjas Coding Ninjas Coding Ninjas Coding Ninjas Coding Ninjas 


Expected Time Complexity:
Try to solve this in O(n).


Expected Space Complexity:
Try to solve this in O(n).


Constraints:
1 <= 'n' <= 10^4

Time Limit: 1 sec

*/
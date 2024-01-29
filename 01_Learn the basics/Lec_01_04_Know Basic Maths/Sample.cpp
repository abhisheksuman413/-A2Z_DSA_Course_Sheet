
#include <bits/stdc++.h>

using namespace std;

int main() {
	// Write your code here
	int n;
	cin>>
    n;
	int even = 0;
	int oddd =0;
	while(n>0){
		int rem = n%10;
		n=n/10;
		if(rem%2==0){
			even= even+rem;
		}
		else{
			oddd =oddd+rem;
		}
	}
	cout<<even<<" "<<oddd;

	return 0;
	
}
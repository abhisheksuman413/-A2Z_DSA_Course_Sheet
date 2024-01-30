#include <bits/stdc++.h>
using namespace std;

int co= 1;
vector<string>abhi;
vector<string> printNTimes(int n) {
	if(co== n+1){
		return abhi;
	}
	else{
		abhi.push_back("Coding Ninjas ");
		co++;
		printNTimes(n);
    }
	return abhi;
	// Write your code here.
}

int main()
{
    vector<string> bs = printNTimes(5);
    for(auto i : bs){
        cout<<i;
    }
    // cout << bs.size() << endl;
    return 0;
}
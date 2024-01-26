#include <bits/stdc++.h>
using namespace std;
int fun1(int n){	
	int ans =n;
	int count =0;
	while(n){
		int rem = n%10;
		n=n/10;
		if(ans%rem==0){
			count= count+1;
		}
	}
	return count;
}
int main()
{
    cout<<fun1(60);
    return 0;
}
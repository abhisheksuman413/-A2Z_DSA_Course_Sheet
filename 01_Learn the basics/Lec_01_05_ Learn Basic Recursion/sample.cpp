#include <bits/stdc++.h>
using namespace std;


  int fib(int n) {
        if(n<=2){
            if(n==1)return 0;
            else return 1;
        }
        else{
            int last = fib(n-1);
            int seclast =fib(n-2);
            return last+seclast;
        }
        
    }



int main()
{
    
    cout<<fib(7);
    return 0;
}
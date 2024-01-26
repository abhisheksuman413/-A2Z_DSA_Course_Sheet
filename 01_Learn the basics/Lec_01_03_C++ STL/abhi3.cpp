#include <bits/stdc++.h>
using namespace std;
int fun1( int n){
    
        int count =0;
    for(int i =2; i<n; i++){
        // int w = count;
        if(n % i == 0){
            while(i !=0){
                i = i/10;
                ++count;
            }
        }
    }
    return count;
}
int main()
{
    cout<<fun1(35);
    return 0;
}
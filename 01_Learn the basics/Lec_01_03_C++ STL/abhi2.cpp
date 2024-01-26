#include <bits/stdc++.h>
using namespace std;




int fun1( int n , int m){
    if(n>m){
        swap(n,m);
    }
    int v;
    while(m%n!=0){
     v = m%n;
        n=v;
        m=n;
    }
    return v;
}

int main()
{
    cout<<fun1(7,5);
    cout<<5%2;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void fun2(int n , int p ,int q,vector<int>&abhi){
    if(q>n){
        return;
    }
    else{
        q=q*p;
        if(q<=n){
            abhi.push_back(q);
            fun2(n,p+1,q,abhi);
        }
    }
}


vector<int>fun1(int n){
    int q=1;
    int p =1;
    vector<int>abhi;
    fun2(n , p,q, abhi);
    return abhi;
}

int main()
{
    vector<int> abhi = fun1(7);
    for(auto i : abhi){
        cout<<i;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;


void fun(int n , stack<int>&number,vector<int>num){
    if(n==0){
        return ;
    }
    else{
        fun(n-1,number,num);
        number.push(num[n-1]);
        // cout<<num[n-1];
    }
}


vector<int> reverseArray(int n, vector<int> &nums){

    stack<int>number;
    fun(n,number,nums);
    vector<int>sit4;
    // cout<<nums[5];
    // cout<<nums.size();
    int p=number.size();
    for(int i =0; i<p;i++){
        sit4.push_back(number.top());
        number.pop();
    }
    return sit4;

}


int main()
{

    vector<int>sit;
    sit.push_back(8);
    sit.push_back(6);
    sit.push_back(5);
    sit.push_back(2);
    sit.push_back(7);
    sit.push_back(9);
    int n = sit.size();

    vector<int> sit1=reverseArray(n ,sit);
    for(auto i :sit1){
        cout<<i;
    }

    return 0;
}
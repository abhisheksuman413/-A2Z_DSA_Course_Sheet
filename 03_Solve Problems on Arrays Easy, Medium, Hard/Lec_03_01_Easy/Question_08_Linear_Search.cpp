#include <bits/stdc++.h>
using namespace std;


int linearSearch(int n, int num, vector<int> &arr)
{
    // Write your code here.

    for(int i =0; i<n; i++){
        if(num==arr[i]){
            return i+1;
            break;
        }
    }
    return -1;
}


int main()
{
    vector<int> abhi;
    abhi.push_back(1);
    abhi.push_back(2);
    abhi.push_back(0);
    abhi.push_back(0);
    abhi.push_back(2);
    abhi.push_back(6);
    abhi.push_back(7);
    abhi.push_back(0);
    abhi.push_back(9);
    abhi.push_back(10);



    cout<<linearSearch(abhi.size(),88,abhi);
    return 0;
}
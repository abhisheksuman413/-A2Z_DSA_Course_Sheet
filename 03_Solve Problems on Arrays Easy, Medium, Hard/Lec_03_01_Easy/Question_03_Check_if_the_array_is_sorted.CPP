#include <bits/stdc++.h>
using namespace std;


int isSorted(int n, vector<int> a) {
    // Write your code here.
    for(int k =0; k<n-1; k++){
        if(a[k]>a[k+1]){
            return 0;
        }
        
    }
    return 1;
}


int main()
{
        vector<int> abhi;
    abhi.push_back(1);
    abhi.push_back(2);
    abhi.push_back(3);
    abhi.push_back(4);
    abhi.push_back(5);
    abhi.push_back(3);
    abhi.push_back(7);
    abhi.push_back(8);
    abhi.push_back(9);
    abhi.push_back(10);

    int n = abhi.size();

    cout<<isSorted(n,abhi)<<endl;
   

    
    return 0;
}
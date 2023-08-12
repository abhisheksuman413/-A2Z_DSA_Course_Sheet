#include <bits/stdc++.h>
using namespace std;

void print1(int n){
    for(int i=0; i<n; i++){
        for(int j =0; j<i+1; j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin >> n;

    print1(n);
    return 0;
}

// Question_04 link
// https://practice.geeksforgeeks.org/problems/triangle-number-1661428795/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_4

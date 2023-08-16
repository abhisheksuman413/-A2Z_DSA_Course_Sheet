#include <bits/stdc++.h>
using namespace std;
/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6
1 2 3 4 5 6 7
*/
void print1(int n){
    for(int i=0; i<n; i++){
        for(int j =0; j<i+1; j++){
            cout<<j+1<<" ";
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

// Question_03 link
// https://practice.geeksforgeeks.org/problems/triangle-number/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_3
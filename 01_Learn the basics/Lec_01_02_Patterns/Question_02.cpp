#include <bits/stdc++.h>
using namespace std;
/*
*
* *
* * *
* * * *
* * * * *
* * * * * *
* * * * * * *
*/
void print1(int n){
    for(int i =0; i<n; i++){
        for(int j =0; j<i+1; j++){
            cout<<"* ";
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

// Question_02
// https://practice.geeksforgeeks.org/problems/right-triangle/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_2


#include <bits/stdc++.h>
using namespace std;
/*
A
BB
CCC
DDDD
EEEEE
FFFFFF
GGGGGGG
*/
void print1(int n)
{
    
    for (int i = 0; i < n; i++)
    {
        char a = 65+i;
        for (int j = 0; j < i + 1; j++)
        {
            cout << a;
        }
        cout << endl;
    }

    // Striver code 

    // for(int i=0; i<n; i++){
    //     char ch = 'A'+i;
    //     for(int j=0; j<i+1; j++){
    //         cout<<ch;
    //     }
    //     cout<<endl;
    // }
    
}

int main()
{
    int n;
    cin >> n;

    print1(n);
    return 0;
}

// Question_16
// https://practice.geeksforgeeks.org/problems/triangle-pattern-1662285334/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_16
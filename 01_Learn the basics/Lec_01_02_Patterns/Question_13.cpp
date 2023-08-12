
#include <bits/stdc++.h>
using namespace std;

void print1(int n)
{
    int b = 1;
    for (int i = 0; i < n; i++)
    {
       
        for (int j = 0; j < i + 1; j++)
        {

            cout << b<<" ";
            b++;
        }
        cout << endl;
    }
}


int main()
{
    int n;
    cin >> n;

    print1(n);
    return 0;
}


// Question_09
// https://practice.geeksforgeeks.org/problems/triangle-pattern-1661718712/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_13
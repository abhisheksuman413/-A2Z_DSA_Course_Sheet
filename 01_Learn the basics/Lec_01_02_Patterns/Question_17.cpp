

#include <bits/stdc++.h>
using namespace std;

void print1(int n)
{
    int b = n - 1;
    char d=64;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < b; j++)
        {
            cout << " ";
        }
        char a = 65;
        for (int j = 0; j < i + 1; j++)
        {
            cout << a;
            a++;
        }
        b--;

        char e= d;
        for (int k = 0; k < i; k++)
        {
            cout<<e;
            e--;
           
        }
         d++;
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

// Question_17
// https://practice.geeksforgeeks.org/problems/triangle-pattern-1662285911/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_17
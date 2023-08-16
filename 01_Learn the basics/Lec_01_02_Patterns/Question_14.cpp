
#include <bits/stdc++.h>
using namespace std;
/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21
22 23 24 25 26 27 28
*/
void print1(int n)
{
    for (int i = 0; i < n; i++)
    {
        char a = 65;
        for (int j = 0; j < i + 1; j++)
        {
            cout << a;
            a++;
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
// https://practice.geeksforgeeks.org/problems/triangle-pattern-1662284916/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_14
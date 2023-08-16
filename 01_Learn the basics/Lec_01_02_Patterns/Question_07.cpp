
#include <bits/stdc++.h>
using namespace std;
/*
      *
     ***
    *****
   *******
  *********
 ***********
*************
*/
void print1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n - 1; j++)
        {
            cout << " ";
        }
        for (int q = 0; q < i + i + 1; q++)
        {
            cout << "*";
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

// Question_07
// https://practice.geeksforgeeks.org/problems/triangle-pattern-1661492263/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_7


#include <bits/stdc++.h>
using namespace std;
/*
**************
******  ******
*****    *****
****      ****
***        ***
**          **
*            *
*            *
**          **
***        ***
****      ****
*****    *****
******  ******
**************
*/
void print1(int n)
{
    // 1st half 
    for (int i = 0; i < n; i++)
    {
        // Stars
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        // Space
        for (int p = 0; p < 2*i; p++)
        {
            cout << " ";
        }
        // Stars
        for (int q = 0; q < n - i; q++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // 2nd half 
    for (int r = 0; r < n; r++)
    {
        // Stars
        for (int f = 0; f < r + 1; f++)
        {
            cout << "*";
        }
        // Space
        for (int g = 0; g <(2*(n-r))-2; g++)
        {
            cout << " ";
        }
        // Stars
        for (int h = 0; h < r + 1; h++)
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

// Question_19
// https://practice.geeksforgeeks.org/problems/double-triangle-pattern/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_19
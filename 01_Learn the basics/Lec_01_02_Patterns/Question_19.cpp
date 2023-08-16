
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
    int a = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        for (int p = 0; p < a; p++)
        {
            cout << " ";
        }
        a = a + 2;
        for (int q = 0; q < n - i; q++)
        {
            cout << "*";
        }
        cout << endl;
    }
    int b = 2 * n - 2;
    for (int r = 0; r < n; r++)
    {
        for (int f = 0; f < r + 1; f++)
        {
            cout << "*";
        }
        for (int g = 0; g < b; g++)
        {
            cout << " ";
        }
        b = b - 2;
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
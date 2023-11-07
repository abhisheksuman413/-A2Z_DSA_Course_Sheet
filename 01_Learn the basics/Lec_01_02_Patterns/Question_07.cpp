
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
        // Space 
        for (int j = i; j < n - 1; j++)
        {
            cout << " ";
        }

        // Uper wale code ke place pe niche wala code v likh skte hai 

        // for (int j = 0; j<n-i-1; j++){
        //     cout<<" ";
        // }


        // Stars
        for (int q = 0; q < 2*i + 1; q++)
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

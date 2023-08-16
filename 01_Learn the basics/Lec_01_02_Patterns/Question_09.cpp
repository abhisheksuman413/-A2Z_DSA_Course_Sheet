
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
* * * * * * *
 * * * * * *
  * * * * *
   * * * *
    * * *
     * *
      *
*/
void print1(int n){
    int a = n - 1;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < a; j++)
        {
            cout << " ";
        }
        for (int k = 1; k < i + i + 2; k++)
        {
            if (k % 2 == 0)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
       
        a--;

        cout << endl;
    }
    
    int c = n*2-1;
    for (int w = 0; w < n ; w++)
    {
        for (int l = 0; l < w; l++)
        {
            cout << " ";
        }
        for (int m = 1; m < c+1; m++)
        {
            if (m % 2 == 0)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        c=c-2;
        
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


// Question_09
// https://practice.geeksforgeeks.org/problems/pattern/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_9

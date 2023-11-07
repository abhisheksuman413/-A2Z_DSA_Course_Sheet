
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

        // Space
        for (int j = 0; j < a; j++)
        {
            cout << " ";
        }

        // Uper wale code ke place pe niche wala code v likh skte hai 

        // for (int j = 0; j<n-i-1; j++){
        //     cout<<" ";
        // }
        // Stars
        for (int k = 1; k < 2*i + 2; k++)
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
        // Space
        for (int l = 0; l < w; l++)
        {
            cout << " ";
        }

        // Stars
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

        // Uper wale code ke place pe niche wala code v likh skte hai 

        // for (int m = 1; m < 2*n-(2*w-1); m++)
        // {
        //     if (m % 2 == 0)
        //     {
        //         cout << " ";
        //     }
        //     else
        //     {
        //         cout << "*";
        //     }
        // }

        
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

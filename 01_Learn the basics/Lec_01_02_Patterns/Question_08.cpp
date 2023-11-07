
#include <bits/stdc++.h>
using namespace std;
/*
*************
 ***********
  *********
   *******
    *****
     ***
      *
*/
void print1(int n ){
    int a=n;
    for(int i =0; i<n; i++){
        
        // Space
        for(int p =0; p<i; p++){
            cout<<" ";
        }

        // Stars
        for(int j=0; j<a+a-1; j++){
            cout<<"*";
        }

          // Uper wale code ke place pe niche wala code v likh skte hai 
          
        //   for(int j =0 ; j<2*n-(2*i+1); j++){
        //     cout<<"*";
        //   }

        
        a--;
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


// Question_08
// https://practice.geeksforgeeks.org/problems/triangle-pattern-1661493231/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_8

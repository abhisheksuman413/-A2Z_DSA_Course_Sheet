

#include <bits/stdc++.h>
using namespace std;
/*
      A
     ABA
    ABCBA
   ABCDCBA
  ABCDEDCBA
 ABCDEFEDCBA
ABCDEFGFEDCBA
*/
void print1(int n)
{
    char d=64;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n-1-i; j++)
        {
            cout << " ";
        }
        char a = 65;
        for (int j = 0; j < i + 1; j++)
        {
            cout << a;
            a++;
        }
        

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

// Niche wala striver ka solution hai 
// void print1(int n ){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n-i-1; j++){
//             cout<<" ";
//         }
//         char ch = 'A';
//         int breakpoint =(2*i+1)/2;
//         for(int j=1; j<=2*i+1; j++){
//             cout<<ch;
//             if(j<= breakpoint ) ch++;
//             else ch--;
//         }
//         cout<<endl;
//     }
// }


int main()
{
    int n;
    cin >> n;

    print1(n);
    return 0;
}

// Question_17
// https://practice.geeksforgeeks.org/problems/triangle-pattern-1662285911/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_17
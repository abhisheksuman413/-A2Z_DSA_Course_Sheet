
#include <bits/stdc++.h>
using namespace std;
/*

*            *
**          **
***        ***
****      ****
*****    *****
******  ******
**************
******  ******
*****    *****
****      ****
***        ***
**          **
*            *

*/
void print1(int n)
{
    // 1st half
    for (int r = 0; r < n; r++)
    {
        // Stars
        for (int f = 0; f < r + 1; f++)
        {
            cout << "*";
        }
        // Space
        for (int g = 0; g <(2*(n-r))-2;g++)
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
    // 2nd half 
    for (int i = 0; i < n - 1; i++)
    {
        // Stars 
        for (int j = 0; j < n - 1 - i; j++)
        {
            cout << "*";
        }
        // Space
        for (int p = 0; p < 2*i+2; p++)
        {
            cout << " ";
        }
        // Stars
        for (int q = 0; q < n - 1 - i; q++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// Niche wala code striver ka hai 
// void print1(int n){
//     int space = 2*n-2;
//     for(int i=1;i<=2*n-1; i++){
//         int stars = i; 
//         if(i>n) stars = 2*n-i;
//         for(int j=0; j<stars; j++){
//             cout<<"*";
//         }
//         for(int j=0; j<space; j++){
//             cout<<" ";
//         }
//         for(int j=0; j<stars; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//         if(i<n) space -=2;
//         else space +=2;
//     }
// }

int main()
{
    int n;
    cin >> n;

    print1(n);
    return 0;
}


// Question_20
// https://practice.geeksforgeeks.org/problems/double-triangle-pattern-1662287416/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_20
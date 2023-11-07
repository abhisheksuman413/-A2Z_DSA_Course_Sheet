
#include <bits/stdc++.h>
using namespace std;
/*
G
G F
G F E
G F E D
G F E D C
G F E D C B
G F E D C B A
*/
void print1(int n)
{
    
    for (int i = 0; i < n; i++)
    {
        char a = 64 + n;
        for (int j = 0; j < i + 1; j++)
        {
            cout << a<<" ";
            a--;
        }
        cout << endl;
    }
}


// Niche wala code striver ke solution ke liye hai jo different hai solution se 

// void print1(int n)
// {
    
//     for (int i = 0; i < n; i++)
//     {
        
//         for(char ch ='E'-i; ch<= 'E'; ch++){
//             cout<<ch<<" ";
//         }
//         cout << endl;
//     }
// }


int main()
{
    int n;
    cin >> n;

    print1(n);
    return 0;
}


// Question_18
// https://practice.geeksforgeeks.org/problems/triangle-pattern-1662286302/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_18

#include <bits/stdc++.h>
using namespace std;
/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
0 1 0 1 0 1
1 0 1 0 1 0 1
*/
void print1(int n)
{

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j < i + 1 ; j++)
        {
            if (i % 2 == 0)
            {

                if (j % 2 == 0)
                {
                    cout << "1 ";
                }
                else
                {
                    cout << "0 ";
                }
            }
            else
            {

                if (j % 2 == 0)
                {
                    cout << "0 ";
                }
                else
                {
                    cout << "1 ";
                }
            }
        }
        cout << endl;
    }
}

// Niche Striver ka solution hai 
// void print1(int n ){
//     int start =1;
//     for(int i = 1; i<=n; i++){

        
//         if(i%2 ==0 ) start =0;
//         else start = 1;

//         for(int j = 0; j<i; j++){
//             cout<<start<<" ";
//             start = 1- start;
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


// Question_11
// https://practice.geeksforgeeks.org/problems/triangle-pattern-1661718455/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_11

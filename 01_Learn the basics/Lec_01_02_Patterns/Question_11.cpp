
#include <bits/stdc++.h>
using namespace std;

void print1(int n)
{

    for (int i = 1; i < n + 1; i++)
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

int main()
{
    int n;
    cin >> n;

    print1(n);
    return 0;
}


// Question_11
// https://practice.geeksforgeeks.org/problems/triangle-pattern-1661718455/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_11

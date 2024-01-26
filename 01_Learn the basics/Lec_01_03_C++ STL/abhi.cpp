#include <bits/stdc++.h>
using namespace std;
int reverseee(int x)
{

    int count = 0;
    int p = x;
    int q = x;
    while (p != 0)
    {
        p = p / 10;
        ++count;
    }
    long ans = 0;
    int num = 0;
    while (x)
    {
        int rem = x % 10;
        ans = ans * 10 + rem;
        x = x / 10;
        num = num + pow(rem, count);
    }
    if (num == q)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    cout << reverseee(1634);
    return 0;
}
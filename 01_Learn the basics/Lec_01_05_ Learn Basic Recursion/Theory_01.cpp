#include <bits/stdc++.h>
using namespace std;
int co = 0;
void fun1()
{
    // This is the base / Specified condition jha pe recursive function 
    // break ho jyega or function bar bar call nhi hoga 
    // Iss se satack overflow  v nhi hoga 
    // Co = 5 pe function terminate ho jyega 
    // Co = 5 se phle tak function apne aap ko bar bar call krega
    // Base condition single ka muiltiple v ho skta hai 

    if (co== 5)
    {
        return;
    }
    else
    {
        cout <<co;
        co++;
        fun1();
    }
}

int main()
{
    fun1();
    return 0;
}
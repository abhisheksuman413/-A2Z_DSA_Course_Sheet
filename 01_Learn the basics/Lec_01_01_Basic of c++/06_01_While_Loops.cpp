#include <bits/stdc++.h>
using namespace std;

int main()
{
    // While loop ka v use same hai as for loop 
    // Executing some line of code for some no of time  

    int i = 1;
    while(i<=5 ){

        cout<<"SIT"<<i<<endl;
        i = i +1;

    }
    cout<<i<<endl;  /* Yha i print ho jyega becouse iss bar 
                        i ka scope loop ke bhr hai OR andr me 
                        to print hoga hi */
    return 0;
}
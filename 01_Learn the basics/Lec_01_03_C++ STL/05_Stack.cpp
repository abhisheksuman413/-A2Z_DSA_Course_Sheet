#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int>sit;
    sit.push(5);
    sit.push(5);
    sit.push(5);
    sit.push(5);
    sit.push(5);
    sit.push(5);
    sit.push(5);
    sit.emplace(45);

    for(int i = 0; i<sit.size(); i++){
        cout<<sit[i]<<endl;
    }
    

    

    sit.pop();


     
     /* Stack Function
       Function
       >> pop
       >> top
       >> size
       >> empty
       >> push / emplace

    */
    return 0;
}
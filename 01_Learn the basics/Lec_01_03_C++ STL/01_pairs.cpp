#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Pair eak data type hai 
    pair<int,int> sit = {1,3};   //syntax {storing 1 and 3 } 
    // Printing first and second element by this{Pair_name.first , pair_name.second}
    cout<<sit.first<<" "<<sit.second<< " sit is printing"<<endl;

    // For storing more than 2 varible we use nasted pair 

    pair< int, pair<int, int>>sit1 ={1,{2,3}} ;  // nasted pair syntax
    
    // isko print krne ka syntax
    cout<<sit1.first<<" This first value "<<endl
        <<sit1.second.first<<" This is second value "<<endl
        <<sit1.second.second<<" This is thid value"<<endl;


    // We can also declare pair array 

    pair<int , int> sit2[]={{1,2},{3,4},{5,6}};

    // Isko print krne ka syntax

    cout<<sit2[1].second<<" Ye array ke first index ke second element ko print  krega "<<endl; 

    return 0;
}
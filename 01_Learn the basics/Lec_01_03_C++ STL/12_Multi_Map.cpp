#include <bits/stdc++.h>
using namespace std;

int main()
{
    multimap<int,int>sit;
    
    /*
        Multimap v map ki trh hai isme jo key hota hai
        wo unique nhi hota hai (repeat ho skta hai) but 
        sorted order(ascending order) me hota hai
        >>> Or baki sara function same hota hai map
        ki trh
        >>> Isme duplicate key store ho sktan hai
    */
   // sit[7]=53;   >>> Isme ase insert nhi krte hai;
    sit.emplace(1,23); 
    sit.emplace(3,13);
    sit.emplace(7,53);
    sit.emplace(4,11);
    sit.emplace(10,1);
    sit.emplace(1,55);
    sit.emplace(2,1);
    sit.insert({11,3});

    for(auto it:sit){
        cout<<" Key:- "<<it.first<<" Value:- "<<it.second<<" Printing mutlimap sit"<<endl;
    }

    
    return 0;
}
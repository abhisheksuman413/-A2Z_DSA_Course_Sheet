#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<int, int> sit;
    
    /*
    Isme key unique hota hai (not repeat) but
    key sorted nhi hota hai (not in ascending order)
    >>> Key store hone ka koi pattern fix nhi hai 
    >>> jase set or unordered_set hota hai wase hi 
    >>> Or baki function sililor hota hai map ki trh
    >>> In unordered Map avarage time cpmplexity is 0(1) is always consatnt
    >>>> But worst case is linear in nature {Its happen in rare case}


    */
    sit[7] = 53;
    sit.emplace(1, 23);
    sit.emplace(3, 13);
    sit.emplace(4, 11);
    sit.emplace(10, 1);
    sit.emplace(1, 55);
    sit.emplace(2, 1);
    sit.insert({11, 3});

     for(auto it:sit){
        cout<<" Key:- "<<it.first<<" Value:- "<<it.second<<" Printing unordered_map sit"<<endl;
    }

    return 0;
}
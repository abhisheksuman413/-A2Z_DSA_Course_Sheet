#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int>sit;

    sit.insert(7);   
    sit.insert(65);
    sit.insert(99);  
    sit.insert(7);   
    sit.insert(25);
    sit.insert(65);
    sit.insert(100); 
    sit.emplace(7);  

    for(auto it:sit){
        cout<<it<<" Printing the whole unorered_set sit  "<<endl;;
    }

    /* unordered Set same hota hai set se but element accending 
    oredr me nhi hota hai isme v unique element hi store hota hai 
    >>> Isme data store krne ka order fix nhi hota hai random hot hai
        but jo data hota hai wo unique hota hai
    >>> lower_bound and upper_bound function isme kam nhi krta hai
    >>> Rest all function are same as set
    >>> In unordered set avarage time cpmplexity is 0(1) is always consatnt
    >>>> But worst case is linear in nature {Its happen in rare case}

    */

    return 0;
}
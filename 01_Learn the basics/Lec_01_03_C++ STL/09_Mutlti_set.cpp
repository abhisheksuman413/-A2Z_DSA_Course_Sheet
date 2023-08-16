#include <bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> sit;
    sit.insert(7);   // {7}
    sit.insert(65);  // {7,65}
    sit.insert(99);  // {7,65,99}
    sit.insert(7);   // {7,7,65,99}
    sit.insert(25);  // {7,7,25,65,99}
    sit.insert(65);  // {7,7,25,65,65,99}
    sit.insert(100); // {7,7,25,65,65,99,100}
    sit.emplace(7);  // {7,7,7,25,65,65,99,100}

    for (auto it : sit)
    {
        cout << it << " Printing whole multiset  sit " << endl;
    }

    /*
    ye set ke trh hi hote hai isme unique element nhi hote
    hai but shorted ya (assending order) me hote hai

    */

    sit.erase(65); // All the occurrence of 65 in multiset
    int cnt = sit.count(7);
    cout << cnt << " Printing the occurrence of 7 in multiset " << endl; // {Print 3}

    sit.erase(sit.find(7));/*Yha ye 7 ke eak occurrence ko erase kr dega */

    for (auto it : sit)
    {
        cout << it << " Printing whole multiset  sit agin  " << endl;
        
    }

    // sit.erase(sit.find(7), sit.find(7)+1);  // problem 

    //  >>> Rest all function are same as set




    return 0;
}
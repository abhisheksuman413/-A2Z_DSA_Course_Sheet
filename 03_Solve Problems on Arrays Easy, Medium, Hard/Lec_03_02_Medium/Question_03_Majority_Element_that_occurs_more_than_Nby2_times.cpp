#include <bits/stdc++.h>
using namespace std;
// Brute Force solution
/*
T.C :- O(n) * O(n) = O(n^2)
S.C :- O(1)

>>> Here n is the size of array 

*/

// int majorityElement(vector<int> v)
// {
//     for(int i =0; i<v.size(); i++)
//     {
//         int count =0;
//         for(int j =0; j<v.size(); j++)
//         {
//             if(v[j]==v[i]) count++;
//         }
//         if(count >v.size()/2) return v[i];
//     }

//     return -1;
// }

// Better Solution 

/*
T.C :- O(n) + O(log n ) = O(n log n ) ---> when using orderd
S.C :- O(n)

>>> Here n is the size of array 

*/

// int majorityElement(vector<int> v)
// {
//     map<int,int>hash_map;
//     for(int i =0; i<v.size(); i++)
//     {
//         hash_map[v[i]]++;
//     }
//     for(auto i :  hash_map)
//     {
//         if(i.second > v.size()/2)
//         {
//             return i.first;
//         }
//     }
//     return -1;
// }


// Optimal solution
/*
T.C :- O(n) + O(n) = O(2n)
---> O(n) hat jyega jb question me diya hoga majority element n/2 se jada hai (Gurantee)

S.C :- O(1)

*/
int majorityElement(vector<int> v)
{
    int count =0;
    int element;
    for(int i =0; i<v.size(); i++)
    {
        if(count ==0)
        {
            count=1;
            element =v[i];
        }
        else if(v[i]==element)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    
    // Verification: 
    /*
    >>> Ye tb kerege jb question diya nhi hai ki Majority element n/2 se jda hai yha nhai
    */
    int temp_count;
    for(int i =0; i<v.size(); i++)
    {
        if(v[i]==element) temp_count++;
    }
    if(temp_count>v.size()/2)return element;
    return -1; 
}

int main()
{
    vector<int> a;
    a.push_back(2);
    a.push_back(2);
    a.push_back(3);
    a.push_back(3);
    a.push_back(1);
    a.push_back(2);
    a.push_back(2);



    cout<<" maj element in array > n/2 is :- "<<majorityElement(a)<<endl;
    return 0;
}
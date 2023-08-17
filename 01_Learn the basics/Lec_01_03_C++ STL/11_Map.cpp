#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    /*
    >>> Map is a container which storeb everything in respect of
        key and value
    >>> Map me do value store hote hai eak key or eak uss key ka value
    >>> Key jo hota hai unique hota hai and sorted order me hota hai
    >>> Key hmesa sorted hota hai{ ascending order me}
    >>> Value sorted nhi hota hai only key 
    >>> Do alg alg key ka same value ho skta hai 
    >>> But do key same nhi hota hai         
    >>> Key can be any data type 
    >>> Similarly value can be any data type
    >>> Time complexity >>> Every operations happens in log n

    */
    map<int ,int> sit;   // Here key is integer and value is also integer
    map<int,pair<int,int>>sit1;   // Here key is integer and value is two integer
    map<pair<int,int>,int>sit2;   // Here key is two integer and value is integer 

    sit[1]=23; // Yha key 1 pe value jo hai wo 23 store kr rhe hai 
    sit[3]=13;
    sit[7]=53;
    sit[4]=11;
    sit[10]=1;
    sit[1]=55; // Yha ke key 1 ke value ko update kr de rha hai {23 ko 55 me}
    sit.emplace(2,1); // Yeha key 2 pe value jo hai wo 1 store kr rhe hai
    sit.insert({11,3}); // Yeha key 11 pe value jo hai wo 3 store kr rhe hai
    for(auto it:sit){
        cout<<" Key:- "<<it.first<<" Value:- "<<it.second<<" Printing map sit"<<endl;
    }

    cout<<sit[32]<<" Printing invlaid key "<<endl;/*Jo key print kr rhe hai wo agr map me nhi hai
                                                    to 0 value print hoga {Yha 0 print hoga} */

    sit2[{2,3}]=45;
    sit2[{3,3}]=13;
    sit2[{2,1}]=177;
    sit2[{6,3}]=99;
    sit2[{2,5}]=1;

    for(auto it:sit2){
        cout<<" Key:- "<<it.first.first<<","<<it.first.second<<" Value:- "<<it.second<<" Printing map sit2"<<endl;
    }

    auto it1= sit.find(3); // Isme find function ka use kr ke key ko find kr skte hai same as set 
    cout<<" Key:- "<<(*(it1)).first<<" Value:- "<<(*it1).second<<" Printing useing find function"<<endl;
    
    auto it2 =sit.find(1001); /*Jo key find kr rhe hai wo agr nhi hai map me 
                                to iterator sit.end() pe point krega map ke 
                                last key ke bad*/
    /* All other function erase(), swap(), size(), empty(), are same as set or previous*/

    return 0;
}
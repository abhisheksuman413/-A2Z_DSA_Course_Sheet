#include <bits/stdc++.h>
using namespace std;

int main()
{
    // It is also dynamic in nature
    list<int> sit;
    sit.push_back(2);
    sit.emplace_back(4);

    sit.push_front(65);
    sit.emplace_front(55); /*Vector me push_front()/emplace_front() nhi
                             hota hai iske bdle hamlog insert operation krte the
                             insert function in vector is very costly(time complexity)
                             camepare to push_front()/emplace_front()
                             >>> list ka internal Doubly Linked List se
                                 hota hai
                             >>> But in vector ka internal operation singly Linked List se
                                 hota hai */

    // Printing list 
    for(auto i : sit){
        cout<<i<<" ";
    }
    cout<<endl;

    // Printing back element of list
    cout<<sit.back()<<endl;

    // And rest all function similar to vector

    // list Functions

    //>>> push_front();
    //>>> push_back();
    //>>> pop_front();
    //>>> pop_back();
    //>>>  begin,end, rbrgin, rend
    //>>> size;
    //>>> clear;
    //>>> empty
    //>>> at
    //>>> reverse
    //>>> swap
    //>>> sort
    //>>> merge
    //>>> remove >>> remove me jo value dalege wo value pure list se remove kr dega 
                //   jitna bar wo valu ho
    return 0;
}
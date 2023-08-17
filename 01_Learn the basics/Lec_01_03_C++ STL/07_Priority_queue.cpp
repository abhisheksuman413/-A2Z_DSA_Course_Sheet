#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int>sit;
    sit.push(5);  // {5}
    sit.push(65); // {65,5}
    sit.push(99); // {99,65,5}
    sit.push(7);  // {99,65,7,5}
    sit.push(25); // {99,65,25,7,5}
    sit.push(32); // {99,65,32,25,7,5}
    sit.push(100); // {100,99,65,32,25,7,5}
    sit.emplace(45);  // {100,99,65,45,32,25,7,5}

    /*
    Priority_queue is queue haveing larget value in top
     Priority_queue sorted form me hota hai but unique nhi
     hota or sbse phle sbse bda element ko store krta hai  
    >>> Descending order me
    >>> Data is not stored in liner fashion 
    >>> Inside a queue tree data structure is mention
    >>> Time complexity push >>> log n
                        top >>> o(1)
                        pop >>> log n

    >>> Priority_queue is also known as Maximum Heap

    */


     cout<<sit.top()<<" Printing top element of priority_queue"<<endl; //{Print 100}


    sit.pop(); //{Remove 100 from priority_queue }

    cout<<sit.top()<<" Printing top element of priority_queue"<<endl; //{Print 99}

    cout<<sit.size()<<" Printing the size of priority_queue "<<endl; //{print 7}
    cout<<sit.empty()<<" If priority_queue empty print 1 otherwise priority_print 0"<<endl; //{Print 0}


    //     Priority_queue_Minimum_element_at_TOP
    // >>> Priority_queue_Minimum_element_at_TOP is also known as Minimum Heap

    // Syntax
    priority_queue<int, vector<int>,greater<int>>sit1;

    sit1.push(5);  // {5}
    sit1.push(65); // {5,65}
    sit1.push(99); // {5,65,99}
    sit1.push(7);  // {5,7,65,99}
    sit1.push(25); // {5,7,25,65,99}
    sit1.push(32); // {5,7,25,32,65,99}
    sit1.push(100); // {5,7,25,32,65,99,100}
    sit1.emplace(45);  // {5,7,25,32,45,65,99,100}
/*
>>> Time complexity push >>> log n
                        top >>> o(1)
                        pop >>> log n
*/


    cout<<sit1.top()<<" Printing top element of priority_queue_Min "<<endl; //{Print 5}


    sit1.pop(); //{Remove 5 from priority_queue_Min }

    cout<<sit1.top()<<" Printing top element of priority_queue_Min "<<endl; //{Print 7}


    
    return 0;
}
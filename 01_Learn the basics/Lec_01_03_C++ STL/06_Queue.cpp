#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int>sit;
    sit.push(5);  // {5}
    sit.push(65); // {5,65}
    sit.push(88); // {5,65,88}
    sit.push(7);  // {5,65,88,7}
    sit.push(99); // {5,65,88,7,99}
    sit.push(32); // {5,65,88,7,99,32}
    sit.push(29); // {5,65,88,7,99,32,29}
    sit.emplace(45);  // {5,65,88,7,99,32,29,45}

    /*
     Queue data structure is similor to stack
     but in queue FIFO is heppan
     FIFO >>> First in First out
     Example :- In station queue is for buying tickets
     >>> All the operation in queue is o(1){Everythig happens in constant time}
     >>> And all the operation are similar to stack
    */

   cout<<sit.front()<<" Printing top element of queue"<<endl; //{Print 5}


    sit.pop(); //{Remove 5 from queue }

    cout<<sit.front()<<" Printing top element of queue"<<endl; //{Print 65}

    cout<<sit.size()<<" Printing the size of queue "<<endl; //{print 7}
    cout<<sit.empty()<<" If queue empty print 1 otherwise print 0"<<endl; //{Print 0}


    cout<<sit.back()<<" Printing the last element of queue "<<endl; //{Print 45}
    sit.back()+=5; //Adding 5 to last element of queue 
    cout<<sit.back()<<" Printing the last element of queue after adding 5 "<<endl; //{Print 50}

    return 0;
}
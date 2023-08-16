#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int>sit;
    sit.push(5);  // {5}
    sit.push(65); // {65,5}
    sit.push(88); // {88,65,5}
    sit.push(7);  // {7,88,65,5}
    sit.push(99); // {99,7,88,65,5}
    sit.push(32); // {32,99,7,88,65,5}
    sit.push(29); // {29,32,99,7,88,65,5}
    sit.emplace(45);  // {45,29,32,99,7,88,65,5}


/*
  Stack is something 
  LIFO >>> Last in First out
  Example :- Many books in a box
  >>> Indexing access is not allowed 
  >>> All the operation in stack is o(1){Everythig happens in constant time}
*/
    

    cout<<sit.top()<<" Printing top element of Stack"<<endl; //{Print 45}


    sit.pop(); //{Remove 45 from stack }

    cout<<sit.top()<<" Printing top element of Stack"<<endl; //{Print 29}

    cout<<sit.size()<<" Printing the size of stack "<<endl; //{print 7}
    cout<<sit.empty()<<" If stack empty print 1 otherwise print 0"<<endl; //{Print 0}

    stack<int>sit1;
    sit1.push(55);

    sit1.swap(sit); // Yha stack sit ko sit1 stack ke andr dal diye
                   // Or stack sit1 ko stack sit ke andr dal diye 


    cout<<sit1.top()<<" Printing top element of Stack"<<endl;
    cout<<sit.top()<<" Printing top element of Stack"<<endl;



    

     
     /* Stack Function
       Function
       >> pop
       >> top
       >> size
       >> empty
       >> push / emplace

    */
    return 0;
}
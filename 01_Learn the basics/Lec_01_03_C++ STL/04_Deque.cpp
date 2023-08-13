#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> sit;
    sit.push_back(34); // {34}
    sit.emplace_back(4);  // {34,4}
    sit.emplace_back(7);  // {34,4,7}
    sit.emplace_back(45); // {34,4,7,45}
    sit.emplace_back(65); // {34,4,7,45,65}

    // sit.push_front(65);
    // sit.emplace_front(55);

    sit.pop_back();   // Delete from back >>> {34,4,7,45}
    sit.pop_front(); // Delete from front >>> {4,7,45}

    for (auto i : sit)
    {
        cout << i << endl; 
    }

    cout << sit.back() << endl;   // Ye back se value ko print krega
    cout << sit.front() << endl; // Ye front se value ko print krega

    // Rest all function are same as vector or list
   //>>> push_front();
   //>>> push_back();
   //>>> pop_front();
   //>>> pop_back();
   //>>>  begin,end, rbrgin, rend
   //>>> size;
   //>>> clear;
   //>>> empty
   //>>> at

    return 0;
}
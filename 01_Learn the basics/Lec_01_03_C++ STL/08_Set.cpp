#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> sit;
    sit.insert(7);   // {7}
    sit.insert(65);  // {7,65}
    sit.insert(99);  // {7,65,99}
    sit.insert(7);   // {7,65,99}
    sit.insert(25);  // {7,25,65,99}
    sit.insert(65);  // {7,25,65,99}
    sit.insert(100); // {7,25,65,99,100}
    sit.emplace(7);  // {7,25,65,99,100}

    /* Set me kewal unique element hi store hota hai
       ham jita v input de usme wo kewal unique element
       hi store krta hai jse ki koi element ham do bar ya
       do se jda bar de diye to wo eak bar hi store krta hai

       >>> Sbse chota element sbse phle store krta hai
       >>> Store every thing in shorted order and unique
       >>> Set hamesa assending order me rhta hai
       >>> set sit[0]  is trika se access nhi kr skte
       >>> set ko iterator ke through access kr skte hai

       >>> Functionality of insert in vector can be used also 
           that only increases efficiency
       >>> begin(), end(), rbegin(), rend(), size(), empty(),
           and swap() are same as vector 

       >>> Set is not a linear container a tree is maintained

       */

    for (auto it : sit)
    {
        cout << it << " Printing the whole set  sit"<<endl;
    }

    // {7,25,65,99,100}
    auto it = sit.find(65);  // Return an iterator which point to the 65
    // {7,25,65,99,100}
    auto it1 = sit.find(88);/* Agr ham wo eelement find kr rhe hai jo set me
                               nhi hai to wo sit.end() return krega 
                               >>> Yha pe ye iterator(it1) 100 ke bad point krega
                                   
                               */ 



    sit.erase(7); // Ye set me se 7 ko erase kr dega 

    int cnt= sit.count(65);/* Agr 65 value multiple time hai set me  to v ye 1 hi value 
                              return krega or 65 set me nhi hai to 0 return krega  */

    
    auto it2 = sit.find(25);
    sit.erase(it2);/* yha ham erase krene ke liye address de rhe hai */



     set<int> sit1;
    sit1.insert(7);   // {7}
    sit1.insert(65);  // {7,65}
    sit1.insert(99);  // {7,65,99}
    sit1.insert(7);   // {7,65,99}
    sit1.insert(25);  // {7,25,65,99}
    sit1.insert(65);  // {7,25,65,99}
    sit1.insert(100); // {7,25,65,99,100}
    sit1.emplace(7);  // {7,25,65,99,100}

    auto it3 = sit1.find(25);
    auto it4 = sit1.find(100);
    sit1.erase(it3, it4);/* Yha v erase vector ke trh kam krega first address ko 
                            include krega and last address ko include nhi krega 
                            yha {25, 65, 99 } hi only delete hoga*/

    
    for (auto it : sit1)
    {
        cout << it << " Printing the whole set  sit1"<<endl;
    }

    /*
>>> Time complexity >>> Every operations happens in log n
*/


    return 0;
}
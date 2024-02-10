#include <bits/stdc++.h>
using namespace std;

int main()
{
     unordered_map<int, int> sit;
      sit[7] = 53;
    sit.emplace(1, 23);
    sit.emplace(3, 13);
    sit.emplace(4, 11);
    sit.emplace(10, 1);
    sit.emplace(1, 55);
    sit.emplace(2, 1);
    // sit.insert({11, 3});


 pair<int,int> sit11= *max_element(sit.second.begin(),sit.second.end());
 cout<<sit11.first<<":- "<<sit11.second;


    return 0;
}
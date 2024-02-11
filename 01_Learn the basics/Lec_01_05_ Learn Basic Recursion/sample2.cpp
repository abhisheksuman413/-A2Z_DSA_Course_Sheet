#include <bits/stdc++.h>
using namespace std;

vector<int> getFrequencies(vector<int> &v)
{
   unordered_map<int, int> new_map;
   int array_size = v.size();
   for (int i = 0; i < array_size; i++)
   {
      new_map[v[i]]++;
   }

   int max_no = 0;
   int max_no_key = 0;
   int min_no = 1e9;
   int min_no_key = 0;
   for (auto i : new_map)
   {
      if (max_no < i.second)
      {
         max_no_key = i.first;
         max_no = i.second;
      }

      if(max_no==i.second){
            max_no_key=min(max_no_key,i.first);
         }

      if(min_no>i.second){
         min_no_key=i.first;
         min_no=i.second;
      }
      if(min_no==i.second){
         min_no_key=min(min_no_key,i.first);
      }
   }
   cout << max_no << endl;
   cout << max_no_key << endl;
   cout << min_no << endl;
   cout << min_no_key << endl;

   for (auto i : new_map)
   {
      cout << i.first << " :- " << i.second << endl;
   }
   return v;
}

int main()
{
   vector<int> abhi;
   abhi.push_back(11);
   abhi.push_back(14);
   abhi.push_back(8);
   abhi.push_back(3);
   abhi.push_back(12);
   abhi.push_back(14);
   // abhi.push_back(1);
   abhi.push_back(7);
   abhi.push_back(4);
   abhi.push_back(3);

   vector<int> new_sit = getFrequencies(abhi);

   return 0;
}
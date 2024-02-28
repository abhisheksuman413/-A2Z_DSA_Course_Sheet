#include <bits/stdc++.h>
using namespace std;

/*
//  Brute force solution
// T.C :- O(n log n + n) >>> Inserting in set takes O(log n) so yha pe
                             for loop se insert kr rhe hai to T.C O(n log n) hoga
                         >>> Or set ko array me insert krne me O(n) time lgega
                         >>> So T.C :- O(n log n + n)

// S.C :- O(n) >>> Because yah eak new set create kr rhe hai

*/

// int removeDuplicates(vector<int> &arr, int n)
// {
//   // Write your code here.
//   set<int> no_duplicates_array;
//   for (int i = 0; i < n; i++)
//   {
//     no_duplicates_array.insert(arr[i]);
//   }

//   int index = 0;
//   for (auto it : no_duplicates_array)
//   {
//     arr[index] == it;
//     index++;
//   }

//   // int no_duplicates_array_size = no_duplicates_array.size();
//   // Agr index ke place pe no_duplicates_array set ka size return kr de
//   // to T.C :- O(n log n ) hoga
//   // Ans dono ka same hoga
//   return index;
// }

// Optimal Solution
// Ye two pointer approch hai
// T.C :- O(n)
// S.C :- O(1)

int removeDuplicates(vector<int> &arr, int n)
{
  int i = 0;
  for (int j = 1; j < n; j++)
  {
    if (arr[i] == arr[j])
    {
    }
    else
    {
      arr[i + 1] = arr[j];
      i++;
    }
    // // Ase v likh skte hai
    // if (arr[j] != arr[i])
    // {
    //   arr[i + 1] = arr[j];
    //   i++;
    // }
  }
  return i + 1;
}

int main()
{
  vector<int> sit;
  sit.push_back(1);
  sit.push_back(1);
  sit.push_back(2);
  sit.push_back(2);
  sit.push_back(2);
  sit.push_back(3);
  sit.push_back(3);

  int n = sit.size();

  for (auto i : sit)
  {
    cout << i << " ";
  }

  cout << "Size of unique_array is " << removeDuplicates(sit, n) << endl;

  return 0;
}
#include <bits/stdc++.h>
using namespace std;


// Brute force solution
/*
T.C :- O(n^2) >>> Because we useing nasted loop 
S.C :- O(1)
>>> Here n is the size of array
*/

// int getSingleElement(vector<int> &arr){
//     for(int i =0; i<arr.size(); i++){
//         int num = arr[i];
//         int count = 0;
//         for( int j =0; j <arr.size(); j++){
//             if(arr[j]==num){
//                 count++;
//             }
//         }
//         if(count == 1) return num;

//     }
//     return -1;
// }




//  Better solution (Useing hash Array )

/*
T.C :- O(n)+o(n)+o(maxi)
>>> here maxi is the max elemnet of array 
>>> Or ye T.C hoga jb maxi chota hoga array ke size se to 

T.C :- O(n)+o(n)+O(n) = O(3n)
>>> Or ye T.C hoga jb maxi bda hoga array ke size se to 


S.C :- O(maxi)

>>> Here n is the size of array
*/

// int getSingleElement(vector<int> &arr){
//     int maxi = arr[0];
//     for( int i = 0; i<arr.size(); i++){
//         maxi = max(maxi, arr[i]);
//     }

//     int hash_array[maxi]={0};
//     for( int i =0; i<arr.size(); i++){
//         hash_array[arr[i]]++;
//     }
//     for(int i =0; i<=maxi; i++){
//         if(hash_array[arr[i]]==1) return arr[i];
//     }
//     /*
//     >>> Uper wale for loop me jha pe hash_array me chaeak kr rhe hai 
//         agr array ka max element array ke size se bda hai to iss loop ko 
//         array ke size tak chlayege
//     >>> Agr array ka max element chota hai array ke size se to for loop 
//         ko array ka max element tak chalyege 
//     */

//     return -1;


// }



//  Better solution (Useing hash map )

int getSingleElement(vector<int> &arr){
    map<int, int> hash_map;
    for(int i = 0; i<arr.size(); i++){
        hash_map[arr[i]]++;
    }


    for(auto i : hash_map){
        if(i.second == 1) return i.first;

    }
    return -1;
}



// Optimal Solution (Solved by me 1st attempt)

// int getSingleElement(vector<int> &arr)
// {
//     // Write your code here.

//     int count = 0;
//     int flag = arr[0];
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (arr[i] == flag)
//         {
//             count = count + 1;
//         }
//         else
//         {
//             if (i == arr.size() - 1)
//             {
//                 return arr[i];
//             }
//             else
//             {
//                 if (count == 2)
//                 {
//                     flag = arr[i];
//                     count = 0;
//                 }
//                 else
//                 {
//                     return arr[i - 1];
//                     break;
//                 }
//             }
//         }
//     }
//     return -1;
// }



//  Optimal Solution
 
// int getSingleElement(vector<int> &arr){
//     int xor2 =0;
//      for(int i =0; i<arr.size(); i++){
//         xor2 = xor2^arr[i];
//      }

//      return xor2;

// }

int main()
{
    vector<int> a;
    a.push_back(1);
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(3);
    a.push_back(5);
    a.push_back(5);

    cout << " Single element in array is  : - " << getSingleElement(a) << endl;
    return 0;
}
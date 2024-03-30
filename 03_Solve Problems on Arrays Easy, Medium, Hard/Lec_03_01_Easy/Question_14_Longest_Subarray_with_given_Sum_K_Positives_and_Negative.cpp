#include <bits/stdc++.h>
using namespace std;

// Brute force Solution
/*

T.C : - O(n) *  O(n) * O(n) = O(n^3) nearly not exact
S.C :- O(1)

*/

// int getLongestSubarray(vector<int> &a, int p) {
//   int lengthh = 0;
//   for (int i = 0; i < a.size(); i++) {
//     for (int j = i; j < a.size(); j++) {
//       int sum = 0;
//       for (int k = i; k <= j; k++) {
//         sum = sum + a[k];
//       }
//       if (sum == p) {
//         lengthh = max(lengthh, j - i + 1);
//       }
//     }
//   }
//   return lengthh;
// }

// Brute force solution ( With T.C O(n^2))
/*
T.C : - O(n) * O(n) = O(n^2)
S.C :- O(1)

*/
// int getLongestSubarray(vector<int>& a, int p){
//     int lengthh = 0;
//     for (int i = 0; i < a.size(); i++)
//     {
//         int sum = 0;
//         for (int j = i; j < a.size(); j++)
//         {
//             sum = sum + a[j];
//             if (sum == p)
//             {
//                 lengthh = max(lengthh, j - i + 1);
//             }
//         }
//     }
//     return lengthh;
// }

// Optimal Solution
/*
when we are using ordered map
T.C :- O(n log n ) ---> Best , worst , aveg

when we are using unordered map
T.C :- O(n) ---> best , aveg
    :- O(n^2) ---> Worst case jb collision occure hoga

S.C :- O(n)

>>> Here n is the size of array


*/
int getLongestSubarray(vector<int> &a, int k)
{
    // Write your code here

    map<long long, int> pre_sum_map;
    int max_length = 0;
    long long sum = 0;
    for (int i = 0; i < a.size(); i++)
    {
        sum = sum + a[i];
        if (sum == k)
        {
            max_length = max(max_length, i + 1);
        }
        long long rem = sum - k;
        if (pre_sum_map.find(rem) != pre_sum_map.end())
        {
            /*
            >>> Yha pre_sum_map.find(rem) hame address dega jis
                address pe map me rem(key) sotre hai uske aage agr *
                lga diye to address ka value(rem(key)) mil jyega

            >>> Agr pre_sum_map me rem(key) nhi store hai to
                pre_sum_map.find(rem) hame pre_sum_map.end()
                address pe point krega

            >>> Yha hamlog bs cheack kr rhe hai ki map me rem store hai
                ya nhi
            */
            int len = i - pre_sum_map[rem];
            max_length = max(max_length, len);
        }

        if (pre_sum_map.find(sum) == pre_sum_map.end())
        {
            /*
            >>> Yha hamlog cheack kr rhe hai ki jo sum(key) ham map
                me insert kr rhe hai wo sum(key) phle inserted hai ki
                nhi
            >>> Agr nhi inserted hai tb hi map me insert krege

            >>> Agr map me sum(key) inserted nhi hoga to
            pre_sum_map.find(sum)
                hame pre_sum_map.end() pe point krega
            >>> Or asa hoga tb hi value insert hoga

            >>> Ye cheack isliye kr rhe hai because array me zero v hua
                to hame longest suarray mile wit sum k

            >>> For ex:- arrr[]={2,0,0,3} and here k = 3
                so longest sunarray is {0,0,3} no {3}
            */
            pre_sum_map[sum] = i;
        }
    }
    return max_length;
}

int main()
{
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(1);
    a.push_back(1);
    a.push_back(1);
    a.push_back(4);
    a.push_back(2);
    a.push_back(3);

    // longestSubarrayWithSumK(a, 3);

    cout << " Length of longest sub array is " << getLongestSubarray(a, 3) << endl;

    return 0;
}
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




//  Ye question alg hai pichla wala se 

/*
Coding Ninja 

Question_14 :- Longest Subarray With Sum K.

Link :- https://www.naukri.com/code360/problems/longest-subarray-with-sum-k_5713505?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf


Problem statement
Ninja and his friend are playing a game of subarrays. They have an array ‘NUMS’ of length ‘N’. Ninja’s friend gives him an arbitrary integer ‘K’ and asks him to find the length of the longest subarray in which the sum of elements is equal to ‘K’.

Ninjas asks for your help to win this game. Find the length of the longest subarray in which the sum of elements is equal to ‘K’.

If there is no subarray whose sum is ‘K’ then you should return 0.

Example:
Input: ‘N’ = 5,  ‘K’ = 4, ‘NUMS’ = [ 1, 2, 1, 0, 1 ]

Output: 4

There are two subarrays with sum = 4, [1, 2, 1] and [2, 1, 0, 1]. Hence the length of the longest subarray with sum = 4 is 4.
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= T <= 10
1 <= N <= 10^5
-10^6 <= NUMS[ i ] <= 10^6
-10^6 <= K <= 10^6

Sum of N Over all the Test cases <= 10^5

Time Limit: 1 sec
Sample Input 1 :
2
3 5
2 3 5
3 1
-1 1 1
Sample Output 1 :
2
3
Explanation Of Sample Input 1 :
For the first case:
There are two subarrays with sum = 5, [2, 3] and [5]. Hence the length of the longest subarray is 2.

For the second case:
Longest subarray with sum = 1 is [1, -1, 1].
Sample Input 2 :
2
3 4
1 1 1
3 2
-50 0 52
Sample Output 2 :
0 
3



*/
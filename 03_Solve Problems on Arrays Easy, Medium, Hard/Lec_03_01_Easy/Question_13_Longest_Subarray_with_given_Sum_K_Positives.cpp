#include <bits/stdc++.h>
using namespace std;

// Brute force Solution
/*

T.C : - O(n) *  O(n) * O(n) = O(n^3) nearly not exact
S.C :- O(1)

*/

// int longestSubarrayWithSumK(vector<int> a, long long p)
// {
//     int lengthh = 0;
//     for (int i = 0; i < a.size(); i++)
//     {
//         for (int j = i; j < a.size(); j++)
//         {
//             int sum = 0;
//             for (int k = i; k <= j; k++)
//             {
//                 sum = sum + a[k];
//             }
//             if (sum == p)
//             {
//                 lengthh = max(lengthh, j - i + 1);
//             }
//         }
//     }
//     return lengthh;
// }

//  Brute force solution ( With T.C O(n^2))
/*
T.C : - O(n) * O(n) = O(n^2)
S.C :- O(1)

*/

// int longestSubarrayWithSumK(vector<int> a, long long p)
// {
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


// Better Solution
/*
when we are using ordered map
T.C :- O(n log n ) ---> Best , worst , aveg

when we are using unordered map
T.C :- O(n) ---> best , aveg
    :- O(n^2) ---> Worst case jb collision occure hoga 

S.C :- O(n)

>>> Here n is the size of array


*/

int longestSubarrayWithSumK(vector<int> a, long long k){
    map<long long , int > pre_sum_map;
    int max_length =0 ;
    long long sum=0;
    for( int i =0; i<a.size();i++){
        sum = sum+a[i];
        if(sum == k  ){
            max_length = max(max_length, i+1);
        }
        long long  rem = sum-k;
        if(pre_sum_map.find(rem)!=pre_sum_map.end()){
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
            int len = i-pre_sum_map[rem];
            max_length = max(max_length,len);
        }

        if(pre_sum_map.find(sum)== pre_sum_map.end()){
            /*
            >>> Yha hamlog cheack kr rhe hai ki jo sum(key) ham map
                me insert kr rhe hai wo sum(key) phle inserted hai ki
                nhi
            >>> Agr nhi inserted hai tb hi map me insert krege

            >>> Agr map me sum(key) inserted nhi hoga to pre_sum_map.find(sum)
                hame pre_sum_map.end() pe point krega
            >>> Or asa hoga tb hi value insert hoga

            >>> Ye cheack isliye kr rhe hai because array me zero v hua
                to hame longest suarray mile wit sum k

            >>> For ex:- arrr[]={2,0,0,3} and here k = 3
                so longest sunarray is {0,0,3} no {3}
            */
            pre_sum_map[sum]=i;
        }

    }
    return max_length;

}

// Optimal Solution

/*
T.C :- O(2n)
S.C :- O(1)

>>> Here n is the size of array
*/

// int longestSubarrayWithSumK(vector<int> a, long long p)
// {
//     int right = 0;
//     int left = 0;
//     int sum = a[0];
//     int max_length= 0;
//     while (right < a.size())
//     {
//         while(sum>p && left<=right){
//             sum = sum-a[left];
//             left++;
//         }

//         if(sum==p){
//             max_length = max(max_length,right-left+1);
//         }

//         right++;
//         if (right < a.size())
//         {
//             sum = sum + a[right];
//         }
//     }
//     return max_length;
// }

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

    cout << " Length of longest sub array is " << longestSubarrayWithSumK(a, 3) << endl;

    return 0;
}



/*
Coding Ninja

Question_13 :-  Longest Subarray With Sum K

Link :- https://www.naukri.com/code360/problems/longest-subarray-with-sum-k_6682399?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf


Problem statement
You are given an array 'a' of size 'n' and an integer 'k'.



Find the length of the longest subarray of 'a' whose sum is equal to 'k'.



Example :
Input: ‘n’ = 7 ‘k’ = 3
‘a’ = [1, 2, 3, 1, 1, 1, 1]

Output: 3

Explanation: Subarrays whose sum = ‘3’ are:

[1, 2], [3], [1, 1, 1] and [1, 1, 1]

Here, the length of the longest subarray is 3, which is our final answer.
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1 :
7 3
1 2 3 1 1 1 1


Sample Output 1 :
3


Explanation Of Sample Input 1 :
Subarrays whose sum = ‘3’ are:
[1, 2], [3], [1, 1, 1] and [1, 1, 1]
Here, the length of the longest subarray is 3, which is our final answer.


Sample Input 2 :
4 2
1 2 1 3


Sample Output 2 :
1


Sample Input 3 :
5 2
2 2 4 1 2 


Sample Output 3 :
1


Expected time complexity :
The expected time complexity is O(n).


Constraints :
1 <= 'n' <= 5 * 10 ^ 6
1 <= 'k' <= 10^18
0 <= 'a[i]' <= 10 ^ 9

Time Limit: 1-second

*/
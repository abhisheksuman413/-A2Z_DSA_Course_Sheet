#include <bits/stdc++.h>
using namespace std;

// Brute force solution
/*
T.C :- O(n) * O(n) * O(n) = O(n^3)
S.c :- o(1)

>>> Here n is the size of array

*/

// long long maxSubarraySum(vector<int> a, int n)
// {
//     long long sum = 0;
//     for (int i = 0; i < a.size(); i++)
//     {
//         for (int j = i; j < a.size(); j++)
//         {
//             long long tem_sum = 0;
//             for (int k = i; k <= j; k++)
//             {

//                 tem_sum = tem_sum + a[k];
//             }
//             if(tem_sum>sum)
//             {
//                 sum=tem_sum;
//             }
//         }

//     }
//     return sum;
// }

// Better solution
/*
T.C :- O(n) * O(n)  = O(n^2)
S.c :- o(1)

>>> Here n is the size of array

*/

// long long maxSubarraySum(vector<int> arr, int n)
// {
//     // Write your code here.
//     long long sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             long long tem_sum = 0;
//             for (int k = i; k <= j; k++)
//             {
//                 tem_sum = tem_sum + arr[k];
//             }
//             if (tem_sum > sum)
//             {
//                 sum = tem_sum;
//             }
//         }
//     }
//     return sum;
// }

// Optimal solution

/*
T.C :- O(n)
S.c :- o(1)

>>> Here n is the size of array

*/

// long long maxSubarraySum(vector<int> arr, int n)
// {
//     long long sum = 0;
//     long long maxi = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         sum = sum + arr[i];
//         if (sum > maxi)
//         {
//             maxi = sum;
//         }
//         if (sum < 0) // Ye kr rhe hai because -ve ya 0 ko kisi me add krege to value
//         {           // chota hoga or hame max sum chiye
//             sum = 0;
//         }
//     }
// // Agr question me -ve value ko empty subarray consider krne ka diya ho to ye code run krege
//     // if (maxi > 0)
//     // {
//     //     return maxi;
//     // }
//     // else{
//     //     return 0;
//     // }
//     return maxi;
// }

// This code is for printing the subarray having max sum 
long long maxSubarraySum(vector<int> arr, int n)
{
    long long sum = 0;
    long long maxi = INT_MIN;
    int ans_start=-1;
    int ans_end=-1;
    for (int i = 0; i < n; i++)
    {
        if(sum==0)ans_start =i;
        sum = sum + arr[i];
        if (sum > maxi)
        {
            maxi = sum;
            ans_end =i;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }

    for(int i =ans_start; i<=ans_end; i++){
        cout<<arr[i]<<" ";
    }

    return maxi;
}
int main()
{
    vector<int> a;
    a.push_back(-2);
    a.push_back(-3);
    a.push_back(4);
    a.push_back(-1);
    a.push_back(-2);
    a.push_back(1);
    a.push_back(5);
    a.push_back(-3);

    cout << "max sub aaray sum :- " << maxSubarraySum(a, a.size());
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

// void longestSubarrayWithSumK(vector<int> a, int n)
// {
//     long long sum = 0;
//     for (int i = 0; i < a.size(); i++)
//     {
//         for (int j = i; j < a.size(); j++)
//         {
//             long long tem_sum = 0;
//             for (int k = i; k <= j; k++)
//             {
//                 cout << a[k] << " ";

//                 tem_sum = tem_sum + a[k];
//             }
//             if(tem_sum>sum)sum=tem_sum;
//             cout<<" sum :- "<<tem_sum;
//             cout << endl;
//         }

//         cout << endl;
//     }
//     cout<<" ye sum hai :- "<<sum;
// }



void maxSubarraySum(vector<int> arr, int n)
{
    // Write your code here.
    long long sum =0;
    for(int i =0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            long long tem_sum=0;
            for(int k=i ;k<=j; k++)
            {
                 cout << arr[k] << " ";
                tem_sum =tem_sum+arr[k];
            }
            if(tem_sum>sum)sum=tem_sum;
            cout << endl;
          
        }
        cout << endl;
    }
    cout<<"sum is :-"<<  sum;
}

int main()
{
    vector<int> a;
    a.push_back(10);
    a.push_back(20);
    a.push_back(-30);
    a.push_back(40);
    a.push_back(-50);
    a.push_back(60);

    maxSubarraySum(a, a.size());
    return 0;
}
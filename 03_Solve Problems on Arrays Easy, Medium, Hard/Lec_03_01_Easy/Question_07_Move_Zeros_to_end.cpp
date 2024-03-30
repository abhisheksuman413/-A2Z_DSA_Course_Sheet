#include <bits/stdc++.h>
using namespace std;

// Brute force solution
/*
T.C :- O(n) + O(x) + O(x-n)  = O(2n)
S.C :- O(x) --> O(n) in worst case if no zero in array
here x is the no of non zero no
and n is size of array
*/

// vector<int> moveZeros(int n, vector<int> a)
// {
//     // Write your code here.

//     vector<int> temp_array;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] == 0)
//         {
//         }
//         else
//         {
//             temp_array.push_back(a[i]);
//         }
//     }

//     //  Niche wala ke place pe ye wala run krte hai to temp_array return krna pdega

//     // for (int i = temp_array.size(); i < n; i++)
//     // {
//     //     temp_array.push_back(0);
//     // }

//     for (int i = 0; i < n; i++)
//     {
//         if (i < temp_array.size())
//         {
//             a[i] = temp_array[i];
//         }
//         else
//         {
//             a[i] = 0;
//         }
//     }

//     return a;
// }

 
// Optimal solution:-

/*
T.C :- O(x) + O(n-x) = O(n)
S.C :- O(1) 
here x is the no of index where 1st zero appers in array
*/

vector<int> moveZeros(int n, vector<int> a)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            break;
        }
    }
    for (int j = i + 1; j < n; j++)
    {
        if (a[j] != 0)
        {
            swap(a[j], a[i]);
            i++;
        }
    }
    return a;
}
 
int main()
{
    vector<int> abhi;
    abhi.push_back(1);
    abhi.push_back(2);
    abhi.push_back(0);
    abhi.push_back(0);
    abhi.push_back(2);
    abhi.push_back(6);
    abhi.push_back(7);
    abhi.push_back(0);
    abhi.push_back(9);
    abhi.push_back(10);

    vector<int> abhi1 = moveZeros(abhi.size(), abhi);

    for (auto i : abhi1)
    {
        cout << i << " ";
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

// Brute force solution

/*
>>> If this is merge sort y Quicksort
T.C :- O(n log n )
S.C :- O(n)
>>> Here n is the size of array
*/

// void sortArray(vector<int> &arr, int n)
// {
//     sort(arr.begin(), arr.end());
// }



// Better solution
/*

T.C :- O(n) + O(n) = O(2n)
S.C :- O(1)

>>> Here n is size of array


*/

// void sortArray(vector<int> &arr, int n)
// {
//     int zero = 0;
//     int one = 0;
//     int two = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 0)
//         {
//             zero++;
//         }
//         if (arr[i] == 1)
//         {
//             one++;
//         }
//         if (arr[i] == 2)
//         {
//             two++;
//         }
//     }
//     cout << zero << one << two << endl;
//     for (int i = 0; i < zero; i++)
//     {
//         arr[i] = 0;
//     }
//     for (int i = zero; i < one + zero; i++)
//     {
//         arr[i] = 1;
//     }

//     for (int i = one + zero; i < two + zero + one; i++)
//     {
//         arr[i] = 2;
//     }
// }



// Optiml solution
/*
T.C :- O(n)
S.C :- O(1)

*/
void sortArray(vector<int> &arr, int n)
{
    int low =0;
    int mid =0;
    int high =n-1;
    while (mid<=high){
        if(arr[mid]==0)
        {
            swap(arr[low],arr[mid]);
            mid++;
            low++;
        }
        else if(arr[mid]==1)mid++;
        else
        {
            swap(arr[mid],arr[high]);
            high--;
        }
    }

}

int main()
{
    vector<int> abhi;
    abhi.push_back(2);
    abhi.push_back(2);
    abhi.push_back(2);
    abhi.push_back(2);
    abhi.push_back(0);
    abhi.push_back(0);
    abhi.push_back(1);
    abhi.push_back(1);
    abhi.push_back(0);

    sortArray(abhi, abhi.size());

    for (int i = 0; i < abhi.size(); i++)
    {
        cout << i << " index value :- " << abhi[i] << endl;
    }

    return 0;
}
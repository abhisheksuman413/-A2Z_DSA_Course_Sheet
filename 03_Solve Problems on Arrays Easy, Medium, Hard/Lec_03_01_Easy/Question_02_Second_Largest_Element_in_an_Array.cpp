#include <bits/stdc++.h>
using namespace std;

// Brute force solution
// T.C :- O(n log n + n)
// S.C :- O(1)

// vector<int> getSecondOrderElements(int n, vector<int> a){
//     sort(a.begin(),a.end());
//     int largest_element = a[n-1];
//     int sec_largest_elemant;
//     for(int i = n-1; i>=0; i--){
//         if(a[i]!= largest_element){
//             sec_largest_elemant=a[i];
//             break;
//         }
//     }
//     int smallest_element = a[0];
//     int sec_smallest_elemnet;
//     for(int i = 1; i<n; i++){
//         if(a[i]!=smallest_element){
//             sec_smallest_elemnet = a[i];
//             break;
//         }
//     }

//     return{sec_largest_elemant,sec_smallest_elemnet};

// }

// Better Solution
// T.C :- O(2n) >>> In worst case 
// S.C :- O(1)

// vector<int> getSecondOrderElements(int n, vector<int> a)
// {
//     int largest_element = a[0];
//     int smallest_element = a[0];
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] > largest_element)
//         {
//             largest_element = a[i];
//         }
//         if (a[i] < smallest_element)
//         {
//             smallest_element = a[i];
//         }
//     }
//     int sec_largest_element = INT_MIN;
//     int sec_smallest_element = INT_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] > sec_largest_element && a[i] != largest_element)
//         {
//             sec_largest_element = a[i];
//         }
//         if (a[i] < sec_smallest_element && a[i] != smallest_element)
//         {
//             sec_smallest_element = a[i];
//         }
//     }

//     return {sec_largest_element, sec_smallest_element};
// }



// Optimal Solution
// T.C :- O(n)
// S.C :- O(1)

vector<int> getSecondOrderElements(int n, vector<int> a)
{
    // Write your code here.
    int largest_element = a[0];
    int sec_largest_element = INT_MIN;
    int smallest_element = a[0];
    int sec_smallest_element = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > largest_element)
        {
            sec_largest_element = largest_element;
            largest_element = a[i];
        }
        else
        {
            if (a[i] < largest_element && a[i] > sec_largest_element)
            {
                sec_largest_element = a[i];
            }
        }

        if (a[i] < smallest_element)
        {
            sec_smallest_element = smallest_element;
            smallest_element = a[i];
        }
        else
        {
            if (a[i] > smallest_element && a[i] < sec_smallest_element)
            {
                sec_smallest_element = a[i];
            }
        }
    }

    return {sec_largest_element, sec_smallest_element};
}

int main()
{
    vector<int> abhi;
    abhi.push_back(1);
    abhi.push_back(2);
    abhi.push_back(3);
    abhi.push_back(4);
    abhi.push_back(5);
    abhi.push_back(6);
    abhi.push_back(7);
    abhi.push_back(8);
    abhi.push_back(9);
    abhi.push_back(10);

    int n = abhi.size();

    vector<int> print_vector;

    print_vector = getSecondOrderElements(n, abhi);

    for (auto i : print_vector)
    {
        cout << endl
             << i << endl;
    }

    return 0;
}
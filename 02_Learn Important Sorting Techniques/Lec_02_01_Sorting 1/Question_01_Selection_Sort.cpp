#include <bits/stdc++.h>
using namespace std;
void selectionSort(vector<int> &arr)
{
    int n = arr.size();
    // Write your code here.
    for (int i = 0; i <= n - 2; i++)
    {
        int mini = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        swap(arr[mini], arr[i]);
    }
}
int main()
{
    vector<int> abhi;
    abhi.push_back(11);
    abhi.push_back(14);
    abhi.push_back(8);
    abhi.push_back(3);
    abhi.push_back(12);
    abhi.push_back(14);
    abhi.push_back(1);
    abhi.push_back(7);
    abhi.push_back(4);
    abhi.push_back(3);

    selectionSort(abhi);

    // Printing sorted array
    for (int i = 0; i < abhi.size(); i++)
    {
        cout << abhi[i] << " ";
    }
    return 0;
}

/*

Question_01 :- Selection Sort

Link:- https://www.codingninjas.com/studio/problems/selection-sort_624469?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf


Problem statement
Sort the given unsorted array 'arr' of size 'N' in non-decreasing order using the selection sort algorithm.



 Note:
Change in the input array/list itself.


Example:
Input:
N = 5
arr = {8, 6, 2, 5, 1}

Output:
1 2 5 6 8



Sample Input 1:
6
2 13 4 1 3 6
Sample Output 1:
1 2 3 4 6 13
Explanation Of Sample Input 1:
 Select 1 and swap with element at index 0. arr= {1,13,4,2,3,6}

 Select 2 and swap with element at index 1. arr= {1,2,4,13,3,6}

 Select 3 and swap with element at index 2. arr= {1,2,3,13,4,6}

 Select 4 and swap with element at index 3. arr= {1,2,3,4,13,6}

 Select 6 and swap with element at index 4. arr= {1,2,3,4,6,13}
Sample Input 2:
5
9 3 6 2 0
Sample Output 2:
0 2 3 6 9
Constraints :
1 <= N <= 10^3
0 <= arr[i] <= 10^5
Time Limit: 1 sec


*/
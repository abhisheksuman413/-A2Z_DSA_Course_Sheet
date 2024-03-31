#include <bits/stdc++.h>
using namespace std;

// Brute force solution
// T.C :- O(n log n)
// S.C :- O(1)

// int largestElement(vector<int> &arr, int n)
// {
//   sort(arr.begin(), arr.end());
//   return arr[n - 1];
// }

// Optimal solution
// T.C :- O(n)
// S.C :- O(1)

int largestElement(vector<int> &arr, int n)
{
  // Write your code here.
  int larget_element = arr[0];
  for (int i = 1; i < n; i++)
  {
    if (arr[i] > larget_element)
    {
      larget_element = arr[i];
    }
  }
  return larget_element;
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

  int n = abhi.size();

  int largest_element = largestElement(abhi, n);
  cout << "Largest element in array is :- " << largest_element << endl;

  return 0;
}



/*
Question_01 :-  Largest Element in the Array

Link :- https://www.naukri.com/code360/problems/largest-element-in-the-array-largest-element-in-the-array_5026279?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

Problem statement
Given an array ‘arr’ of size ‘n’ find the largest element in the array.



Example:

Input: 'n' = 5, 'arr' = [1, 2, 3, 4, 5]

Output: 5

Explanation: From the array {1, 2, 3, 4, 5}, the largest element is 5.

Detailed explanation ( Input/output format, Notes, Images )

Sample input 1:
6
4 7 8 6 7 6 
Sample output 1:
8
Explanation of sample input 1:
The answer is 8.
From {4 7 8 6 7 6}, 8 is the largest element.
Sample input 2:
8
5 9 3 4 8 4 3 10 
Sample output 2:
10
Expected Time Complexity:
O(n), Where ‘n’ is the size of an input array ‘arr’.
Constraints :
1 <= 'n' <= 10^5
1 <= 'arr[i]' <= 10^9

Time Limit: 1 sec


*/
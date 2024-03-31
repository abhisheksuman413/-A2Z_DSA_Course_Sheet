#include <bits/stdc++.h>
using namespace std;

/*

T.C :- O(a+b)
S.C :- O(1)

>>> Here a & b is the size of array a & b 

*/
vector<int> findArrayIntersection(vector<int> &a, vector<int> &b)
{
    // Write your code here.
    int size_array_a = a.size();
    int size_array_b = b.size();
    vector<int> union_array;

    int i = 0;
    int j = 0;

    // Compare between a and b array and then insert in union_array
    while (i < size_array_a && j < size_array_b)
    {
        if (a[i] < b[j])
            i++;
        else if (b[j] < a[i])
            j++;
        else
        {
            union_array.push_back(a[i]);
            i++;
            j++;
        }
    }

    return union_array;
}
int main()
{
    vector<int> a;
    vector<int> b;
    a.push_back(1);
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(4);
    a.push_back(5);

    b.push_back(2);
    b.push_back(3);
    b.push_back(4);
    b.push_back(4);
    b.push_back(5);
    b.push_back(6);

    vector<int> result = findArrayIntersection(a, b);

    for (auto i : result)
    {
        cout << i << " ";
    }
    return 0;
}


/*
Coding Ninja 

Question_09 :-  Intersection Of Two Sorted Arrays

Link :- https://www.naukri.com/code360/problems/intersection-of-2-arrays_1082149?leftPanelTabValue=PROBLEM&count=25&page=1&search=&sort_entity=order&sort_order=ASC

Problem statement
You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. Both these arrays are sorted in non-decreasing order. You have to find the intersection of these two arrays.

Intersection of two arrays is an array that consists of all the common elements occurring in both arrays.

Note :
1. The length of each array is greater than zero.
2. Both the arrays are sorted in non-decreasing order.
3. The output should be in the order of elements that occur in the original arrays.
4. If there is no intersection present then return an empty array.
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= T <= 100
1 <= N, M <= 10^4
0 <= A[i] <= 10^5
0 <= B[i] <= 10^5

Time Limit: 1 sec
Sample Input 1 :
2
6 4
1 2 2 2 3 4
2 2 3 3
3 2
1 2 3
3 4  
Sample Output 1 :
2 2 3
3   
Explanation for Sample Input 1 :
For the first test case, the common elements are 2 2 3 in both the arrays, so we print it.

For the second test case, only 3 is common so we print 3.
Sample Input 2 :
2
3 3 
1 4 5
3 4 5
1 1
3
6
Sample Output 2 :
4 5
-1

*/
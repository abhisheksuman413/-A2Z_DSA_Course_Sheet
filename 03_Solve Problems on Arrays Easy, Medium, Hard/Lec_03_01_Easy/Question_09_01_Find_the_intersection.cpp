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
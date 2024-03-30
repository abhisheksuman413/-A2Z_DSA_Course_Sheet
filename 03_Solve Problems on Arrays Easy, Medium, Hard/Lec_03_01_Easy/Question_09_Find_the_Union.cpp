#include <bits/stdc++.h>
using namespace std;

/*
// Brute force solution

/
T.C :- O(a log n + b log n) + O(a + b)   ---> last wala O(a+b) question solve krne ke liye nhi return krne ke liye use kr rhe hai
S.C :- O(a + b) + O(a + b) ---> last wala O(a+b) question solve krne ke liye nhi return krne ke liye use kr rhe hai

a :- is the size of 1st array
b :- is the size of 2nd array
n :- is the size of unique element in array a and b
>>> set me insert krne ke liye (log n) use ho rha hai wo exact
    T.C nhi hai but approx hai
/

vector<int> sortedArray(vector<int> a, vector<int> b)
{
    set<int> temp_array;
    vector<int> union_array;

    // T.C :- O(a log n )
    for (int i = 0; i < a.size(); i++)
    {
        temp_array.insert(a[i]);
    }

    // T.C :- O(a log n )
    for (int i = 0; i < b.size(); i++)
    {
        temp_array.insert(b[i]);
    }

    // T.C :- O(a + b) ---> Iska use question solve krne ke liye nhi ans return krne ke liye kr rhe hai
    for (auto i : temp_array)
    {
        union_array.push_back(i);
    }

    return union_array;
}

*/

/*
// Ye solution khud banye the

void remove_duplicate(vector<int> &temp_array)
{

    int i = 0;
    for (int j = 1; j < temp_array.size(); j++)
    {
        if (temp_array[i] == temp_array[j])
        {
        }
        else
        {
            temp_array[i + 1] = temp_array[j];
            i++;
        }
    }
    temp_array.erase(temp_array.begin() + i + 1, temp_array.end());
}

vector<int> sortedArray(vector<int> a, vector<int> b)
{
    // Write your code here

    vector<int> temp_array;
    for (int i = 0; i < a.size(); i++)
    {
        temp_array.push_back(a[i]);
    }
    for (int i = 0; i < b.size(); i++)
    {
        temp_array.push_back(b[i]);
    }

    sort(temp_array.begin(), temp_array.end());

    remove_duplicate(temp_array);
    return temp_array;
}
*/

// Optimal solution :-


/*
T.C :- O(a) + O(b) = O(a + b)
S.C :-O(a + b) ---> This is use to return the array not to solve the question
               ---> This S.C in worst case 
>>> a & b is the size of array a & b 

*/

vector<int> sortedArray(vector<int> a, vector<int> b)
{
    int size_array_a = a.size();
    int size_array_b = b.size();
    vector<int> union_array;

    int i = 0;
    int j = 0;

    // Compare between a and b array and then insert in union_array
    while (i < size_array_a && j < size_array_b)
    {
        if (a[i] <= b[j])
        {
            if (union_array.size() == 0 || union_array.back() != a[i])
            {
                union_array.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if (union_array.size() == 0 || union_array.back() != b[j])
            {
                union_array.push_back(b[j]);
            }
            j++;
        }
    }

    // If any element left in a array
    while (i < size_array_a)
    {
        if (union_array.size() == 0 || union_array.back() != a[i])
        {
            union_array.push_back(a[i]);
        }
        i++;
    }
    // If any element left in b array
    while (j < size_array_b)
    {
        if (union_array.size() == 0 || union_array.back() != b[j])
        {
            union_array.push_back(b[j]);
        }
        j++;
    }

    return union_array;
}

int main()
{
    vector<int> a;
    vector<int> b;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(6);

    b.push_back(2);
    b.push_back(3);
    b.push_back(5);

    vector<int> result = sortedArray(a, b);

    for (auto i : result)
    {
        cout << i << " ";
    }
    return 0;
}
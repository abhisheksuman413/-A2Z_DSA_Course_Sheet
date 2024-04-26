#include <bits/stdc++.h>
using namespace std;

// Brute force solution

/*
T.C :- O(n) * O(n) = O(n^2) ---> Not exact n^2 but approx
S.C :- O(n) ---> Ye hamlog question solve krne ke liye nhi use kr rhe hai
            ---> only ans return krne ke liye use kr rhe hai
>>> Here n is the size of array
*/
/*
vector<int> superiorElements(vector<int> &a)
{
    vector<int> temp_array;

    for (int i = 0; i < a.size(); i++)
    {
        bool flag = true;
        if (find(temp_array.begin(), temp_array.end(), a[i]) != temp_array.end())
        {
            flag = false;
        }
        else
        {
            for (int j = i + 1; j < a.size(); j++)
            {
                if (a[j] > a[i])
                {
                    flag = false;
                    break;
                }
            }
            if (flag == true)
            {
                temp_array.push_back(a[i]);
            }
        }
    }

    reverse(temp_array.begin(), temp_array.end());
    return temp_array;
}
*/

// Optimal solution
/*
T.C :- O(n)
S.C :- O(n) ---> Ye space hamlog question solve krne ke liye nhi use kr rhe hai
            ---> only answer ko return krne ke liye use kr rhe hai
>>> Here n is the size of array
*/

vector<int> superiorElements(vector<int> &a)
{
    vector<int> temp_array;
    int n = a.size();
    int maxx =a[n-1];
    temp_array.push_back(a[n-1]);
    for(int i =n-2; i>=0; i--)
    {
        if(a[i]>maxx)
        {
            maxx=a[i];
            temp_array.push_back(maxx);
        }
    }
    return temp_array;

}

int main()
{
    vector<int> a = {1, 2, 3, 2};
    vector<int> abhi = superiorElements(a);
    for (int i = 0; i < abhi.size(); i++)
    {
        cout << abhi[i] << " ";
    }
}





/*
Coding ninja 

Question_09 :- Superior Elements 

 link :- https://www.naukri.com/code360/problems/superior-elements_6783446?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM



 Problem statement
There is an integer array ‘a’ of size ‘n’.



An element is called a Superior Element if it is greater than all the elements present to its right.



You must return an array all Superior Elements in the array ‘a’.



Note:

The last element of the array is always a Superior Element. 


Example

Input: a = [1, 2, 3, 2], n = 4

Output: 2 3

Explanation: 
a[ 2 ] = 3 is greater than a[ 3 ]. Hence it is a Superior Element. 
a[ 3 ] = 2 is the last element. Hence it is a Superior Element.
The final answer is in sorted order.


Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
4 
1 2 2 1


Sample Output 1:
1 2


Explanation of Sample Input 1:
Element present at the last index is '1' and is a superior element since there are no integers to the right of it.
Element present at index 2 (0-indexed) is '2' and is greater than all the elements to the right of it.
There are no other superior elements present in the array.
Hence the final answer is [1,2].


Sample Input 2:
3
5 4 3


Sample Output 2:
3 4 5 


Expected Time Complexity:
Try to solve this in O(n).


Constraints:
1 <= n <=10^5 
1 <= a[i] <= 10^9
Time Limit: 1 sec

*/
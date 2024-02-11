#include <bits/stdc++.h>
using namespace std;

vector<int> getFrequencies(vector<int> &v)
{
    unordered_map<int, int> new_map;
    int array_size = v.size();
    for (int i = 0; i < array_size; i++)
    {
        new_map[v[i]]++;
    }

    int max_no = 0;
    int max_no_key = 0;
    int min_no = 1e9;
    int min_no_key = 0;
    for (auto i : new_map)
    {
        if (max_no < i.second)
        {
            max_no_key = i.first;
            max_no = i.second;
        }

        if (max_no == i.second)
        {
            max_no_key = min(max_no_key, i.first);
        }

        if (min_no > i.second)
        {
            min_no_key = i.first;
            min_no = i.second;
        }
        if (min_no == i.second)
        {
            min_no_key = min(min_no_key, i.first);
        }
    }
    return {max_no_key, min_no_key};
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


    vector<int> new_sit = getFrequencies(abhi);

    return 0;
}














/*


Question_02 :- Highest / Lowest Frequency Elements

Link :- https://www.codingninjas.com/studio/problems/k-most-occurrent-numbers_625382?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf


Problem statement
Given an array 'v' of 'n' numbers.



Your task is to find and return the highest and lowest frequency elements.


If there are multiple elements that have the highest frequency or lowest frequency, pick the smallest element.



Example:
Input: ‘n' = 6, 'v' = [1, 2, 3, 1, 1, 4]

Output: 1 2

Explanation: The element having the highest frequency is '1', and the frequency is 3. The elements with the lowest frequencies are '2', '3', and '4'. Since we need to pick the smallest element, we pick '2'. Hence we return [1, 2].
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1 :
6
1 2 3 1 1 4
Sample Output 1 :
1 2
Sample Explanation 1:
Input: ‘n' = 6, 'v' = [1, 2, 3, 1, 1, 4]

Output: 1 2

Explanation: The element having the highest frequency is '1', and the frequency is 3. The elements with the lowest frequencies are '2', '3', and '4'. Since we need to pick the smallest element, we pick '2'. Hence we return [1, 2].
Sample Input 2 :
6
10 10 10 3 3 3
Sample Output 2 :
3 3
Sample Explanation 2:
Input: ‘n' = 6, 'v' = [10, 10, 10, 3, 3, 3]

Output: 3 3

Explanation: Since the frequency of '3' and '10' is 3. Therefore, the element with the maximum and minimum frequency is '3'.
Expected Time Complexity :
The expected time complexity is O(n), where n is the size of the array.
Expected Space Complexity :
The expected time complexity is O(n), where n is the size of the array.
Constraints :
2 <=  n <= 10^4
1 <= v[i] <= 10^9
There are at least two distinct elements in the array.
Time Limit: 1 sec 




*/
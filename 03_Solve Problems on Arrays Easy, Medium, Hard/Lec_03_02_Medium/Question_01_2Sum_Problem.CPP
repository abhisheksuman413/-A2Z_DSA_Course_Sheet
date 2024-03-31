#include <bits/stdc++.h>
using namespace std;

// >>>>>>>>>>> Agr string return krna hai tb <<<<<<<<<<<

// Brute force solution
/*
T.C :- O(n) * O(n) = O(n^2) ---> Exact n^2 nhi hoga but uske krib
S.C :- O(1)

>>> Here n is the size of array
*/

// string read(int n, vector<int> book, int target)
// {
//     // int right =0;
//     // while(right<n){
//     //     int left = right + 1;
//     //     while(left<n){
//     //         if(book[right]+book[left]==target) return "yes";
//     //         left++;
//     //     }
//     //     right++;

//     // }

//     // return "no";

//     //  Uper wala code or niche wala code same hi hai
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             if (book[i] + book[j] == target)
//             {
//                 return "YES";
//             }
//         }
//     }
//     return "NO";
// }

// Better Solution

/*
>>> Ye better solution tb hoga jb hame only string return krna hai
    2 no hai ya nhi

>>> Agr hame ye return krna pde ki wo no kon se index pe hai array
    me to ye optimal solution hoga iss problem ka because iss proble
    ko iss se jda optimise nhi kr skte hai


T.C :- O(n) + O(log n) = O(n lon n) ---> best & worst & aveg using orderd map here
T.C :- O(n) + O(n) = O(2n) ---> best & aveg using unorderd map here
                     O(n^2) ---> worst using unorderd map here

S.C :-O(n)

>>> Here n is the size of array

*/

// string read(int n, vector<int> book, int target)
// {
//     map<int, int> hash_map;
//     for (int i = 0; i < n; i++)
//     {
//         int sec_no = target - book[i];
//         if (hash_map.find(sec_no) != hash_map.end())
//         {
//             return "YES";
//         }
//         hash_map[book[i]] = i;
//     }
//     return "NO";
// }

// Optimal solution

// string read(int n, vector<int> book, int target){
//     sort(book.begin(),book.end());
//     int left=0;
//     int right=n-1;
//     while(left<right){
//         int sum =book[left]+book[right];
//         if(sum == target){
//             return "YES";
//         }
//         else if(sum > target){
//             right--;
//         }
//         else{
//             left++;
//         }
//     }
//     return "NO";
// }



 

// >>>>>>>>>>> Agr Index return krna hai tb <<<<<<<<<<<

// Brute force solution
/*
T.C :- O(n) * O(n) = O(n^2) ---> Exact n^2 nhi hoga but uske krib
S.C :- O(1)

>>> Here n is the size of array
*/

// vector<int> twoSum(vector<int> &book, int target)
// {
//     int n = book.size();
//         // int right =0;
//         //     while(right<n){
//         //         int left = right + 1;
//         //         while(left<n){
//         //             if(book[right]+book[left]==target) cout<<right<<" "<<left;
//         //             left++;
//         //         }
//         //         right++;

//         //     }



//             //  Uper wala code or niche wala code same hi hai
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             if (book[i] + book[j] == target)
//             {
//                 cout<<i<<j<<endl;
//                 return {i,j};
                
//             }
//         }
//     }
//     return {-1, -1};
// }



// Optimal Solution


/*
>>> Ye optimal solution hai jb hame array ka index return krna hai 

T.C :- O(n) + O(log n) = O(n lon n) ---> best & worst & aveg using orderd map here
T.C :- O(n) + O(n) = O(2n) ---> best & aveg using unorderd map here
                     O(n^2) ---> worst using unorderd map here

S.C :-O(n)

>>> Here n is the size of array

*/


vector<int> twoSum(vector<int> &book, int target)
{
    int n = book.size();
    map<int , int > hash_map;
    for(int i =0; i<n; i++){
        int sec_no = target-book[i];
        if(hash_map.find(sec_no)!=hash_map.end()){
            return{hash_map[sec_no],i};
        }
        hash_map[book[i]]= i;
    }
    return {-1,-1};
}


int main()
{
    vector<int> abhi;
    abhi.push_back(4);
    abhi.push_back(1);
    abhi.push_back(2);
    abhi.push_back(3);
    abhi.push_back(1);

    // cout << " Possible :- " << read(abhi.size(), abhi, 6) << endl;

    vector<int> a;
    a = twoSum(abhi, 6);

    for (auto i : a)
    {
        cout << a[i] << " ";
    }

    // twoSum(abhi, 6);
    return 0;
}




/*
Coding Ninja 

Question_01 :- Two Sum

Link :- https://www.naukri.com/code360/problems/reading_6845742?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

Problem statement
Sam want to read exactly ‘TARGET’ number of pages.

He has an array ‘BOOK’ containing the number of pages for ‘N’ books.

Return YES/NO, if it is possible for him to read any 2 books and he can meet his ‘TARGET’ number of pages.

Example:
Input: ‘N’ = 5, ‘TARGET’ = 5
‘BOOK’ = [4, 1, 2, 3, 1] 

Output: YES
Explanation:
Sam can buy 4 pages book and 1 page book.
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
5 5
4 1 2 3 1
Sample Output 1 :
YES
Explanation Of Sample Input 1:
Sam can buy 4 pages book and 1-page book.
Sample Input 2:
2 1
1 2
Sample Output 2 :
NO
Expected Time Complexity:
O( N ), Where N is the length of the array.
Constraints:
1  <= N <= 10^3
1 <= BOOK[i], TARGET <= 10^6
Time Limit: 1 sec


*/



/*
Leetcode 

Question_01 :- 1. Two Sum

Link :- https://leetcode.com/problems/two-sum/description/

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]
 

Constraints:

2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.
 

Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?

*/
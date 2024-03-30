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
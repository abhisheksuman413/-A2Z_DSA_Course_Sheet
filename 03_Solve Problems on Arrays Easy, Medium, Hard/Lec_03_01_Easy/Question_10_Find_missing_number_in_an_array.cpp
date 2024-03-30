#include <bits/stdc++.h>
using namespace std;

// Brute force solution

/*
T.C :- O(n*n) = O(n^2)
S.C :- O(1)
>>> Here n is the size of array
*/
// int missingNumber(vector<int>& nums) {

//         int nums_size = nums.size();
//         for(int i = 1; i<=nums_size; i++){
//             int flag = 0;
//             for(int j =0; j<nums_size; j++){
//                 if(nums[j]==i){
//                     flag =1;
//                     break;
//                 }
//             }
//             if(flag == 0){
//                 return i;
//             }
//         }

//         return -1;

//     }

// Better Solution

/*
T.C :- O(n) + O(n) =O(2n) 
S.C :- O(n)
>>> Here n is the size of array
*/

// int missingNumber(vector<int>& nums){
//     int nums_size= nums.size();
//     vector<int> hash_arr(nums_size,0);
//     for(int i =0; i<nums_size; i++){
//         hash_arr[nums[i]]=1;
//     }
//     for( int i =0 ; i<nums_size; i++){
//         if(hash_arr[i]== 0){
//             return i;
//             break;
//         }
//     }
//     return -1;
// }

// Optimal Solution (in this case 2 optimal solution   )

// int missingNumber(vector<int> &nums)
// {
//     int nums_size = nums.size()+1;
//     int sum1 = nums_size * (nums_size + 1) / 2;
//     int sum2 = 0;
//     for (int i = 0; i < nums_size; i++)
//     {
//         sum2 = sum2 + nums[i];

//     }
//     return sum1-sum2;
// }

// Another optimal solution

/*
T.C :- O(n*n) = O(n^2)
S.C :- O(n)
>>> Here n is the size of array
>>> But this T.C is better than sum(optimal solution) T.C
    because for big no(10^9) in sum we have to use long instead
    of int and long take slightly more memory than int
*/

int missingNumber(vector<int> &nums)
{
    int xor1 = 0;
    int xor2 = 0;
    // for(int i =0; i<=nums.size(); i++){
    //     xor1 =xor1^i;
    // }
    for (int i = 0; i < nums.size(); i++)
    {
        xor2 = xor2 ^ nums[i];
        xor1 = xor1 ^ i; // Uper fpr loop na use kr ke yhi pe compute kr le rhe hai
    }
    xor1 = xor1 ^ nums.size(); // Uper for loop me last size tak nhi ja rhe hai so usko yha
                               //  kr diye

    return xor1 ^ xor2;
}

int main()
{
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(6);
    a.push_back(7);
    a.push_back(8);
    a.push_back(9);
    a.push_back(10);
    a.push_back(11);

    // missingNumber(a);

    cout << " missing no is " << missingNumber(a) << endl;
    return 0;
}
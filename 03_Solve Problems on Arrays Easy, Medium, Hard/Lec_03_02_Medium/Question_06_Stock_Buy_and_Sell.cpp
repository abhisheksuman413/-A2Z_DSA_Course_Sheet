#include <bits/stdc++.h>
using namespace std;

// Brute Force solution

/*
T.C :- O(n) * O(n) = O(n^2)
S.C :- O(1)
*/

// int bestTimeToBuyAndSellStock(vector<int>&prices) {
//     // Write your code here.
//     int maxi =0;
//     for(int i=0; i<prices.size(); i++)
//     {
//         int sum_temp=0;
//         for(int j = i; j<prices.size(); j++ )
//         {
//             sum_temp = prices[j]-prices[i];
//             maxi=max(sum_temp,maxi);
//         }
//     }

//     return maxi;
// }



// Ye solution khud bnaye the thora ans dekh kr 

// T.C :- O(n)
// S.C :-O(1)

// int bestTimeToBuyAndSellStock(vector<int>&prices)
// {
//     int minii = prices[1];
//     int profit =0;
//     int temp_profit;
//     for(int i =1; i<prices.size(); i++)
//     {
//         if(i==1)
//         {
//             profit=prices[i]-prices[0];
//         }
//         else
//         {
//             minii = min(prices[i],minii);
//             temp_profit=prices[i]-minii;
//             profit= max(temp_profit,profit);
            
//         }
//     }
//     return profit;
// }



// Optimal Solution

/*
T.C :- O(n) 
S.C :- O(1)

*/

int bestTimeToBuyAndSellStock(vector<int>&prices)
{
    int minii = prices[0];
    int profit =0;
    for(int i =1; i<prices.size(); i++)
    {
        int cost = prices[i]-minii;
        profit = max(profit,cost);
        minii=min(minii,prices[i]);
    }
    return profit;
}

int main()
{
    int n = 0;
	vector<int> sit;
	sit.push_back(7);
	sit.push_back(1);
	sit.push_back(5);
	sit.push_back(3);
	sit.push_back(6);
	sit.push_back(4);


    cout<<"Best price we get is :- "<<bestTimeToBuyAndSellStock(sit);
    return 0;
}


/*
Coding Ninja 

Question_06 :- Best time to buy and sell stock

Link :- https://www.naukri.com/code360/problems/best-time-to-buy-and-sell-stock_6194560?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

Problem statement
You are given an array of integers 'prices' of size 'n', where ‘prices[i]’ is the price of a given stock on an ‘i’-th day.



You want to maximize the profit by choosing a single day to buy one stock and a different day to sell that stock.



Please note that you can’t sell a stock before you buy one.



Return the maximum profit you can achieve from this transaction.



Example :
Input: ‘prices’ =[7, 1, 5, 4, 3, 6]

Output: 5

Explanation: Purchase stock on day two, where the price is one, and sell it on day six, where the price is 6, profit = 6 - 1 = 5.

Hence we return 5.
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
6
7 1 5 4 3 6


Sample Output 1 :
5


Explanation Of Sample Input 1:
Purchase stock on day two, where the price is one, and sell it on day six, where the price is 6. Profit = 6 - 1 = 5.


Sample Input 2:
5
5 4 3 2 1


Sample Output 2 :
0


Expected time complexity :
The expected time complexity is O(n).


Constraints :
1 <= 'n' <= 10 ^ 5
1 <= ‘prices[i]’<= 10 ^ 9

Time Limit: 1 sec

*/



/*
Leetcode 


Question_06 :- 121. Best Time to Buy and Sell Stock


Link :- https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

 

Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
Example 2:

Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are done and the max profit = 0.
 

Constraints:

1 <= prices.length <= 105
0 <= prices[i] <= 104


*/
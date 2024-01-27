int countDigits(int n){
	// Write your code here.	

    int ans =n;
	int count =0;
	while(n){
		int rem = n%10;
		n=n/10;
        if(rem!=0){
            if(ans%rem==0&&rem!=0){
			count= count+1;
		}
        }
		
	}
	return count;

}

/*
Question_01 :-  Count Digits

Link:- https://www.codingninjas.com/studio/problems/count-digits_8416387?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM
Problem statement
You are given a number ’n’.



Find the number of digits of ‘n’ that evenly divide ‘n’.



Note:
A digit evenly divides ‘n’ if it leaves no remainder when dividing ‘n’.


Example:
Input: ‘n’ = 336

Output: 3

Explanation:
336 is divisible by both ‘3’ and ‘6’. Since ‘3’ occurs twice it is counted two times.
Note:
You don’t need to print anything. Just implement the given function.


Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
35


Sample Output 1:
1


Explanation of sample output 1:
35 is only divisible by ‘5’, hence answer is 1.

Sample Input 2:
373


Sample Output 2:
0


Explanation of sample output 2:
There’s no digit in 373 that evenly divides it. Hence the output is 0.

Expected Time Complexity:
Try to solve this in O(log(n)) 


Constraints:
1 <= ‘n’ <= 10^9

Time Limit: 1 sec

*/
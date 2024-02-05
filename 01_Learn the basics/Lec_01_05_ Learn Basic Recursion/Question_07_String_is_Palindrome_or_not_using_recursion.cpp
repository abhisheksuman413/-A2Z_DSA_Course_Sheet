#include <bits/stdc++.h>
using namespace std;


// void fun(int cnt, int size, string &str)
// {
//     if (cnt >= size / 2)
//     {
//         return;
//     }
//     else
//     {
//         swap(str[cnt], str[size - cnt - 1]);
//         fun(cnt + 1, size, str);
//     }
// }

// bool cheack(string str, string str2)
// {
//     if (str == str2)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }

// bool isPalindrome(string &str)
// {
//     // Write your code here.
//     int cnt = 0;
//     int size = str.size();
//     string str2 = str;
//     fun(cnt, size, str);
//     return cheack(str, str2);
// }




// Another solution for codingninjas question

// bool cheack(int cnt , int size , string &str){
//     if(cnt>=size/2) return true;
//     if(str[cnt]!= str[size - cnt - 1]) return false;
//     return cheack( cnt+1 , size , str);
// }

// bool isPalindrome(string str){

//     int cnt = 0;
//     int size = str.size();

//     return cheack(cnt,size,str);
// }


// Another Solution for leetcode question

bool cheack(int cnt , int size , string &str){
    if(cnt>=size/2) return true;
    if(str[cnt]!= str[size - cnt - 1]) return false;
    return cheack( cnt+1 , size , str);
}

bool isPalindrome(string str){

    int cnt = 0;
    string new_str;


    for(int i =0; i<str.length();i++){
        if(isalnum(str[i])){   // isalnum() function function is used to check if
                              // the input value is either an alphabet or a num
            new_str.push_back(tolower(str[i])); // tolower() function is use to convert
                                               // upper cade into lower case 
        }
    }
    int size = new_str.size();


    return cheack(cnt,size,new_str);
}

int main()
{
    string str = "A man, a plan, a canal: Panama";
    string str3;
    cout<<isPalindrome(str);
    return 0;
}

/*
Theroy:-

>>> isalnum() function is used to check if the input value is either an alphabet or a number
>>> tolower() function is used to convert a given character to lowercase

*/








/*
Leetcode Question 
Question_07 :-  125. Valid Palindrome

Link :- https://leetcode.com/problems/valid-palindrome/description/

A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

 

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.
 

Constraints:

1 <= s.length <= 2 * 105
s consists only of printable ASCII characters.


*/



/*

Codingninjas Question

Question_07 :- Check Palindrome (recursive)

Link :- https://www.codingninjas.com/studio/problems/check-palindrome-recursive_624386?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

Problem statement
Determine if a given string ‘S’ is a palindrome using recursion. Return a Boolean value of true if it is a palindrome and false if it is not.

Note: You are not required to print anything, just implement the function. Example:
Input: s = "racecar"
Output: true
Explanation: "racecar" is a palindrome.
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
abbba
Sample Output 1:
true
Explanation Of Sample Input 1 :
“abbba” is a palindrome
Sample Input 2:
abcd
Sample Output 2:
false
Explanation Of Sample Input 2 :
“abcd” is not a palindrome.
Constraints:
0 <= |S| <= 10^6
where |S| represents the length of string S.

*/
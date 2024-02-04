#include <bits/stdc++.h>
using namespace std;


// void fun(int cnt, int size, string &str3)
// {
//     if (cnt >= size / 2)
//     {
//         return;
//     }
//     else
//     {
//         swap(str3[cnt], str3[size - cnt - 1]);
//         fun(cnt + 1, size, str3);
//     }
// }

// bool cheack(string str3, string str2)
// {
//     if (str3 == str2)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
//     bool isPalindrome(string str) {

//     int cnt = 0;
//     int size = str.size();

//     string str3;
//      for(int i =0; i<str.length();i++){
//         if(isalnum(str[i])){
//             str3.push_back(tolower(str[i]));
//         }
//     }
//     string str2 = str3;
//     fun(cnt, size, str3);
//     return cheack(str3, str2);
        
//     }

bool cheack(int cnt , int size , string &str){
    if(cnt>=size/2) return true;
    if(str[cnt]!= str[size - cnt - 1]) return false;
    return cheack( cnt+1 , size , str);
}

bool isPalindrome(string str){

    int cnt = 0;
    int size = str.size();
    string new_str;


    for(int i =0; i<str.length();i++){
        if(isalnum(str[i])){
            new_str.push_back(tolower(str[i]));
        }
    }
    cout<<new_str;

    return cheack(cnt,size,new_str);
}

int main()
{
    string str = "A man, a plan, a canal: Panama";
    // char str2 = '65';
    string str3;
    cout<<isPalindrome(str);

    return 0;
}
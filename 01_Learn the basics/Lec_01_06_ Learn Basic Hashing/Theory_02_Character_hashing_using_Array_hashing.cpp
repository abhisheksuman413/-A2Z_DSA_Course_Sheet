#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout<<" Enter the string "<<endl;
    cin>>s;

    // Pre compute 

    int hash[26]= {0};   // Becouse a to z is 26 char
    for(int i =0; i<s.size(); i++){
        hash[s[i]-'a']++; // 'a' - kr rhe hai becouse ascii of a is 97
        // hash[s[i]]; >>> ye v possible hota agr uper hash array 256 size ka bnaye hote 
                     //>>> Iss se upper case ka v solution nikal jata 
                    //>>> Yha char autocast ho jyega int me 
    }



    cout<<"How many char you want to fine frequency "<<endl; 
    int q;
    cin>>q;
    cout<<"Enter chr you want to find frequency "<<endl;
    while(q--){
        char c ;
        cin>>c;

        // Fetch
        cout<<c<<" char frequency is :- "<<hash[c-'a']<<endl;
    }
    return 0;
}
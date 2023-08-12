#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string and getline 
    string s;    // space se phle jitna character hoga usko print krega 
    cin>>s;
    cout<<s;

    string b , c;  // isme do string print hoga jo b or c me store hoga
    cin>>b>>c;
    cout<<b<<" " <<c;

    string p ;
    getline(cin , p);
    cout<<p<<endl;


    char abhi ;
    cin>>abhi;
    cout<<"Abhi is prionting "<<abhi<<endl;

    char abhi1= 'a';
    cout<<"abhi1 is printing "<<abhi1<<endl;

    return 0;
}
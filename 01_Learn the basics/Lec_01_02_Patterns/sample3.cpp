#include <bits/stdc++.h>
using namespace std;

namespace abhi {
    int val=50;
    int getval(){
        return val*10;
    }
}

int main()
{
    
    double val=75;
    cout<<val<<endl;
    cout<<abhi::val<<endl;
    cout<<abhi::getval()<<endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int age ;
    cin>>age;
    if(age<18){
        cout<<"not eligilble for job "<<endl;
    }
    else if (age<=57){
        cout<<"Eligible for job "<<endl;

        if (age >= 55 ){            // If ke andr If ko nested If_else bolrte hai
                                   // Eak If ke andr kitne v If ho skta hai 
        cout<<"But retirement Soon"<<endl;
    }
        
    }

    else {
        cout<<"Retirement Time "<<endl;
    }
    return 0;
}
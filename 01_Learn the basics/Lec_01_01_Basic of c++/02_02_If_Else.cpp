#include <bits/stdc++.h>
using namespace std;

int main()
{
    int marks ;
    cin>>marks;

    //This not correct way to write
    // iss trika se agr age 24 hai to first if print hoga
    // then wo ase if ko cheack krega eak eak kr 

    // if(marks<25){
    //     cout<<"your grade id F "<<endl;
    // }
    // if(marks>=25 && marks <=44){
    //     cout<<"your grade is E "<<endl;
    // }
    // if(marks>=45 && marks <=49){
    //     cout<<"your grade is D "<<endl;
    // }
    // if(marks>=50 && marks <=59){
    //     cout<<"your grade is C "<<endl;
    // }
    // if(marks>=60 && marks <=79){
    //     cout<<"your grade is B "<<endl;
    // }
    // if(marks>=80 && marks <=100){
    //     cout<<"your grade is A "<<endl;
    // }

    // Uper wale problem ke liye hamlog else if use krte hai
    // taki if bar bar excute na ho ja condition true hua uske bad nhi 

    if(marks<25){ // is block bhr tb hi jyega jb 25 se bda hoga
        cout<<"your grade id F "<<endl;  
    }
    else if(marks <=44){
        cout<<"your grade is E "<<endl;
    }
    else if(marks <=49){
        cout<<"your grade is D "<<endl;
    }
    else if(marks <=59){
        cout<<"your grade is C "<<endl;
    }
    else if(marks <=79){
        cout<<"your grade is B "<<endl;
    }
    else if(marks <=100){
        cout<<"your grade is A "<<endl;
    }
    
     
   
}
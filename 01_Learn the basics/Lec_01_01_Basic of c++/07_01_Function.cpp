#include <bits/stdc++.h>
using namespace std;

// Function are set of code which performs something for you
// Function are used to modularise code
// Function are used to increase readability
// Function are used to use some cocde multiple time

// Void --> Which does not return anything
// Return  --> Return something 
// Parameterised
// Non Parameterised

void printName()
{

    cout << "Abhishek Suman " << endl;
}

void printName1(string nam)
{
    cout << "hey " << nam << endl;
}

int summ(int num1, int num2){   // Yha int ke place pe kuch v hio skta hai 
    
    int num3=num1+num2;
    return num3;
}

int main()
{
    string name ;
    getline(cin,name);

    printName();
    printName1(name);

    string name2;
    cin>>name2;
    printName1(name2);

    int num1,num2;
    cin>>num1>>num2;
    int result = summ(num1,num2);
    cout<<"The sum of "<<num1<<" and "<<num2<<" is "<<result<<endl;

    // Bhot sara function hota hai 
    // size() -> To finde size of anything
    // min() ->  To find minimum no between two no 
    // max() -> To find maxmimum no between two no 

    int maximum, minimum;
    
    maximum = max(num1,num2);
    minimum = min(num1,num2);
    
    cout<<"The maximum no between "<<num1<<" and "<<num2<<" is "<<maximum<<endl;
    cout<<"The minimum no between "<<num1<<" and "<<num2<<" is "<<minimum<<endl;



    return 0;
}


/*
Agr function ke andr koi code execute nhi hota hai to 
koi v value return nhi hoga 
 >> Suppose koi function me condition diye if ke andr or wo condition fullfill nhi hua 
    to wo function kuch nhi return krega 

*/
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[5];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];

    arr[1]+=10;  // arr[1] me yha 10  Add ho jyega 
    arr[0]=15;  // arr[0] me ye value print hoga becouse yha update kr de rhe hai 

    cout<<arr[0]<<endl;


    return 0;
}


//First index zero index ke just bad memory me store hoga 
//But first index khi v store ho skta hai 
//Array element are stored in consecutive memory address but the
//  zero index location  is not sure
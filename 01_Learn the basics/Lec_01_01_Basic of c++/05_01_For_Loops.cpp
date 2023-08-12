#include <bits/stdc++.h>
using namespace std;

int main()
{
    // For loops is used to execute same line of code again and angain
    for (int i = 1; i <= 10; i = i + 1)
    {

        cout << "Abhishek " << i << endl;
    }

    // cout<<i<<endl;  // i yha print nhi hoga becouse ye loop ke bhr hai
    //  i ka scope kewal loop ke andr hai

    // Agr i ko bhr decelear kr de to possible hoga
    int i;
    for (i = 1; i <= 10; i = i + 1)
    {

        cout << "Suman " << i << endl;
    }
    cout << i << endl; // yha i print hoga

    int j;
    for (j = 10; i > 0; i = j - 1)  // Isko decerement me use kr skte hai (reverse)

    { 
        cout << "Suman " << j << endl;
    }
    cout << j << endl; // yha j print hoga
    return 0;
}

/*For loop ko ham kse v run kr skte hai 
ye matter nhi krta hai kitne time run kr rhe hai 
ye matter krta hai 

>>But syntax correct hona chiye 
>>Inilization , Conditions , Increament/Decreament
>> For loop ke and koi v code likh skte hai for example (If Else Conditions  )

*/
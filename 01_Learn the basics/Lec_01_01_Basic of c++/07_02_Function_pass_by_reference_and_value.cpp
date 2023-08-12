#include <bits/stdc++.h>
using namespace std;

// Pass by value
// Pass by value me value copy ho kr aata hai
// Yha no kan value copy ho rha hai num me
// Isliye yha no me koi change nhi hoga kewal num me change hoga
// no ka value same rhega jo inpute le rhe hai
// No ka original memory nhi aata hai
void doSomething(int num)
{

    cout << num << endl;
    num += 10;

    cout << num << endl;
    num += 10;

    cout << num << endl;
    num += 10;
    cout << num << endl;
}
// Example 2
void dosomething1(string s)
{
    s[0] = 'T';
    cout << s << endl;
}

// Pass By reference
// Yha & ke stah z likhne se z ka original memory ka address a rha hai 
// Or jb address aata hai to original value me change hota hai
// becouse ke yha copy ke sath nhi original value ke sath kam kr rhe hai
// Isliye yha z[0] index me A ke place pe T ho jyega original me v  


void dosomething2(string &z)
{
    z[0] = 'T';
    cout << z<< endl;
}

// Example 2

void doSomething3(int &num)
{

    cout << num << endl;
    num += 10;

    cout << num << endl;
    num += 10;

    cout << num << endl;
    num += 10;
    cout << num << endl;
}



int main()
{
    int no = 11;
    doSomething(no);
    cout << no << endl;

    string s;
    s = "Abhi";
    dosomething1(s);
    cout << s << endl;

    string z;
    z = "Abhi";
    dosomething2(z);
    cout << z << endl;   // Yha ye value change ho jyega 
                        // Becouse uper me address de rhe hai 

     int noo = 21;
    doSomething3(noo);
    cout << noo << endl;  // Yha v noo ka value update ho jyega 

    return 0;
}
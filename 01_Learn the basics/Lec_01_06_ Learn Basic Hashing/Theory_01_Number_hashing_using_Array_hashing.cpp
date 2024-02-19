#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array " << endl;
    cin >> n;
    int arr[n];
    cout << " Enter value in array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Precompute
    // >>> Inside main we can declared only 10^6(1e6) size of array integer type
    // >>> Maximum size can be 10^8(1e8) if you define the array to be global
    // >>> Iss Se jada size ka array bnayege to segmentagion falut aayega

    // int hash[1e8]; >>> Not possible segmentagion falut

    int has[13] = {0}; // Here creating hash array
    for (int i = 0; i < n; i++)
    {
        has[arr[i]] += 1; // Yha hamlog hash array ko update kr rhe hai
                          //  yha jo arr ka value aayega hash array me uske index pe value +1 ho jyega
    }

    int q;
    cout << "How many no you want to find " << endl;
    cin >> q;
    cout << "Enter number which frequency you want to find " << endl;
    while (q--)
    {
        int number;
        cin >> number;
        // Fetch
        cout << number << " frequency is :-" << has[number] << " in array" << endl;
    }
    return 0;
}
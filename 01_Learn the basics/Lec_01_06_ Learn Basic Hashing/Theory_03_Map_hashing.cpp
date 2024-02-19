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

    // map<int , int >mapp;   // Here creating has map
    // Yha key koi v data type ka ho skta hai 


    unordered_map<int, int> mapp; // Here creating has unordered_map
    // Yha key kewal indivisual data type ka ho skta hai
    // Pair<int,int>, int is not allowed
    
    for (int i = 0; i < n; i++)
    {
        mapp[arr[i]]++;
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
        cout << number << " frequency is :-" << mapp[number] << " in array" << endl;
    }
    return 0;
}
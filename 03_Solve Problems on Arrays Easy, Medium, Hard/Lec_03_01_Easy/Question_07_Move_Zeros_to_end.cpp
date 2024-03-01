#include <bits/stdc++.h>
using namespace std;

// vector<int> moveZeros(int n, vector<int> a)
// {
//     // Write your code here.

//     vector<int> temp_array;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] == 0)
//         {
//         }
//         else
//         {
//             temp_array.push_back(a[i]);
//         }
//     }
//     // for (int i = temp_array.size(); i < n; i++)
//     // {
//     //     temp_array.push_back(0);
//     // }

//     for (int i =0; i<n; i++){
//         if(i<temp_array.size()){
//             a[i]=temp_array[i];
//         }
//         else{
//             a[i]=0;
//         }
//     }

//     return a;
// }


vector<int> moveZeros(int n, vector<int> a){
    int i ;
    for(i =0; i<n; i++){
        if(a[i]==0){
            break;
        }
    }
    for(int j= i+1; j<n; j++){
        if(a[j]!=0){
            swap(a[j],a[i]);
            i++;
        }
    }
    return a;
}

int main()
{
    vector<int> abhi;
    abhi.push_back(1);
    abhi.push_back(2);
    abhi.push_back(0);
    abhi.push_back(0);
    abhi.push_back(2);
    abhi.push_back(6);
    abhi.push_back(7);
    abhi.push_back(0);
    abhi.push_back(9);
    abhi.push_back(10);

    vector<int> abhi1 = moveZeros(abhi.size(), abhi);

    for( auto i : abhi1 ){
        cout<<i<<" "; 
    }
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

// Array always goes with references
// Yha arr[] ke sath & lgane ka jrurt nhi hai 
// Array me hmesa original memory ka address aata hai 
// Islye arr[0] me value update ho jyega original me v 
void dosomething(int arr[], int n){
     arr[0] += 101;
     cout<<"Value inside the function "<< arr[0]<<endl;

}


int main()
{
    int n =5;
    int arr[n];
    for(int i=0; i<n; i=i+1){
        cin>>arr[i];
    }

    dosomething(arr,n);

    cout<<" Value inside the main "<<arr[0]<<endl;  // Yha updated value print hoga arr[0] ka 
    return 0;
}
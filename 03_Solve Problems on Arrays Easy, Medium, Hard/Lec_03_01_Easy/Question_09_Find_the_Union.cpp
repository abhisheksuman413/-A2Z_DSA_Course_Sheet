#include <bits/stdc++.h>
using namespace std;


void remove_duplicate(vector<int>&temp_array){

    int i =0; 
    for(int j =1; j<temp_array.size(); j++){
        if(temp_array[i]==temp_array[j]){

        }
        else{
            temp_array[i+1]= temp_array[j];
            i++;
        }
    }
    temp_array.erase(temp_array.begin()+i+1,temp_array.end());

}


vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here

    vector<int> temp_array;
    for(int i =0 ; i<a.size(); i++){
        temp_array.push_back(a[i]);
    }
    for(int i =0 ; i<b.size(); i++){
        temp_array.push_back(b[i]);
    }

    sort(temp_array.begin(),temp_array.end());
   
    
    remove_duplicate(temp_array);
    return temp_array;

}

int main()
{
    vector<int>a;
    vector<int>b;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(6);


    b.push_back(2);
    b.push_back(3);
    b.push_back(5);

    vector<int> result = sortedArray(a,b);

    for(auto i : result){
        cout<<i<<" ";
    }
    return 0;
}
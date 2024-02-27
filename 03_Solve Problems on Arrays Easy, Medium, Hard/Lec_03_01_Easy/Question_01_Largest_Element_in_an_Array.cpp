#include <bits/stdc++.h>
using namespace std;




int largestElement(vector<int> &arr, int n) {
  // Write your code here.
  int larget_element = arr[0];
  for (int i = 1; i < n; i++) {
    if (arr[i] > larget_element) {
      larget_element = arr[i];
    }
  }
  return larget_element;
}


int main()
{
    
    vector<int> abhi;
    abhi.push_back(11);
    abhi.push_back(14);
    abhi.push_back(8);
    abhi.push_back(3);
    abhi.push_back(12);
    abhi.push_back(14);
    abhi.push_back(1);
    abhi.push_back(7);
    abhi.push_back(4);
    abhi.push_back(3);

    int n = abhi.size();

    int largest_element=largestElement(abhi,n);
    cout<<"Largest element in array is :- "<<largest_element<<endl;
    

    return 0;
}
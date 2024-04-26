#include <bits/stdc++.h>
using namespace std;

bool search(vector<int> a,int nums)
{
    for(int i=0; i<a.size();i++)
    {
        if(a[i]==nums)
        {
            return  true;
        }
        
    }
    return false;
}



int longestSuccessiveElements(vector<int>&a) {

    int length = 1;
    for(int i =0; i<a.size(); i++)
    {
        int x =a[i];
        int count =1;
        while(search(a,x+1)==true)
        {
            x=x+1;
            count =count +1;
        }
        length=max(length,count);
    }
    return length;
    // Write your code here.
}

int main()
{
    vector<int> a = {1 ,1, 2, 1};
    int ans = longestSuccessiveElements(a);
    cout << "The longest consecutive sequence is " << ans << "\n";
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

vector<int> countFrequency(int n, int x, vector<int> &nums)
{

    vector<int> abhi(x, 0);
    vector<int> abhi1;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] <= n)
        {
            abhi[nums[i] - 1] += 1;
        }
    }
    int max_no = *max_element(abhi.begin(),abhi.end());
    int min_no = *min_element(abhi.begin(),abhi.end());

    for(int i=0; i<n; i++){
        if(abhi[i]==max_no) abhi1.push_back(i);
        // if(abhi[i]==min_no) abhi1.push_back(i);
    }
    for (auto i : abhi1)
    {
        cout << i << " "<<endl;
    }



    return abhi1;


    // Write your code here.
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

    vector<int> abhi1 = countFrequency(10, 14, abhi);

    for (auto i : abhi1)
    {
        cout << i << " ";
    }



    return 0;
}
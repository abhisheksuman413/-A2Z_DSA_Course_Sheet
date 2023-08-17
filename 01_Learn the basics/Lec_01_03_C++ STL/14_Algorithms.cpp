#include <bits/stdc++.h>
using namespace std;

// Making comparator
bool comp(pair<int,int> p1,pair<int,int>p2){

    if (p1.second < p2.second) return true;
    if (p1.second > p2.second) return false;
    if (p1.second = p2.second) return true;
    // If they are same 
    if(p1.first>p2.first) return true;
    return false;


}


int main()
{
    // Sorting algo
    int sit[] = {4, 6, 45, 3, 22, 2, 15, 1, 99, 78};
    for (auto it : sit)
    {
        cout << it << " Printing array sit" << endl;
    }

    sort(sit, sit + 10); /*>>>sit is starting iterator and sit+10
                              is after last iterator
                           >>> Isme v first wala include hota hai and
                               last wala include nhi hota hai*/
    /* sort(sit+3,sit+9); >>> Hamlog kisi bich ke part ko kewal v sort kr
                              skte hai 1st address starting element ka hota
                              hai jha se sort krna hai or last address ending 
                              element ke bad ka jha tak sort krna hai uske bad ka  */
    for (auto it1 : sit)
    {
        cout << it1 << " Printing array sit after sorthing" << endl;
    }

    sort(sit,sit+10,greater<int>()); //ye sort krega or sbse bda value phle rkhega
                                    // greator yha pe in built comparator  hai 
    for (auto it1 : sit)
    {
        cout << it1 << " Printing array sit after sorthing(greator)" << endl;
    }


    vector<int>sit1;
    sit1.push_back(8);
    sit1.push_back(6);
    sit1.push_back(5);
    sit1.push_back(2);
    sit1.push_back(7);
    sit1.push_back(8);
    sit1.push_back(3);
    sit1.push_back(9);
    sit1.push_back(0);
    sit1.push_back(4);
    sit1.push_back(6);
    sit1.push_back(23);
    sit1.push_back(29);

    for (auto it : sit1)
    {
        cout << it << " Printing vector sit1" << endl;
    }
    sort(sit1.begin(),sit1.end());
    for (auto it : sit1)
    {
        cout << it << " Printing vector sit1 after sorting" << endl;
    }


    // Custom comparator

    // Sort in my way 
    pair<int,int> sit2[]={{3,1},{1,2},{2,1},{4,1}};

    /* >>> sort it according to second elemnt in ascending order
       >>> If second element is same then sort
           it according to   first element but in
           descending */
    sort(sit2,sit2+4,greater<pair<int,int>>());

    for(auto it :sit2){
        cout<<it.first<<" ,"<<it.second<<" Printing after sorting geator"<<endl;
    }

    sort(sit2, sit2+4, comp);

    for(auto it :sit2){
        cout<<it.first<<" ,"<<it.second<<" Printing after sorting my way "<<endl;
    }

    int num = 7;
    int cnt=__builtin_popcount(num); /* >>> __builtin_popcount() function return krta hai
                                            how many ones(set bits) in uss value ke binary
                                            formate me {Yha 3 print hoga becouse 7 in 
                                            binary is 111}  */
    cout<<cnt<<" Printing no of ones(set bits ) in (7) in binary no"<<endl;

    long long num1 = 121211222112;
    int cnt1= __builtin_popcountll(num1); /*Agr data type long long ho to is function ka 
                                           use krte hai ones(set bits) find krne ke liye */
    cout<<cnt1<<" Printing no of ones(set bits ) in (121211222112) in binary no"<<endl;


    // All the permutation for given value 

    string s ="123";

    do{
        cout<<s<<" permutation of string s"<<endl;
    }
    while(next_permutation(s.begin(),s.end())); /* >>> Yha hamlog string 123 ka permutation find kr rhe hai*/

     string s1 ="231";

    do{
        cout<<s<<" permutation of string s1"<<endl;
    }
    while(next_permutation(s1.begin(),s1.end())); /* Yha pe ye 3 hi permutation tak jyega 
                                                     231,312,321 iske bad koi combination nhi print hoga*/

    /* Isilye phle string ko sort krege uske bad permutation nikalege*/


    sort(s1.begin(),s1.end());
    do{
        cout<<s<<" permutation of string s1 after sorting"<<endl;
    }
    while(next_permutation(s1.begin(),s1.end())); 


    // Max and min fnction
    int sit4[] = {4, 6, 45, 3, 22, 2, 15, 1, 99, 78};

    int maxi = *max_element(sit4,sit4+10);
    int mini = *min_element(sit4,sit4+10);

    cout<<maxi<<" Printing max element of array sit4[] "<<endl;
    cout<<mini<<" Printing minimum element of array sit4[] "<<endl;



    return 0;
}
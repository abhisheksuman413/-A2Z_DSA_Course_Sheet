#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Vector :- Vector is same as array but it is dynamic in 
    nature Array me eak bar size declare krne ke bad ham 
    usko increase nhi kr skte hai but in vector ham size ko 
    increase kr skte hai kv v */


         
            //  >>>>> Vector creation <<<<<


    vector<int>sit;  // syntax {Create a empty containers}




    //            >>>>> Insertion in Vector <<<<<  


    
    // Function in Vector 

    sit.push_back(1); //{1} Use to insert data in vector ;
    sit.emplace_back(2);//{1,2} yha vector ka size dynamically increase ho jyega 
                         //  and usme 2 insert ho jyega  
                        //  Both Push_back and emplace_back is same but
                       //  emplace_back is faster than push_back 
    sit.push_back(8);
    sit.push_back(6);
    sit.push_back(5);
    sit.push_back(2);
    sit.push_back(7);
    sit.push_back(8);
    sit.push_back(3);
    sit.push_back(9);
    sit.push_back(0);
    sit.push_back(4);
    sit.push_back(6);
    sit.push_back(23);
    sit.push_back(29);

    

    // We can aslo define vector of pair data type 

    vector<pair<int, int>> sit1;
    // Inserting data into pair data type vector
    sit1.push_back({1,2});  // yha ye{} bracket use krna jruri hai 
    sit1.emplace_back(6,7); // yha ye{} bracket ka use nhi v krne se kam chlega
                            // automatic assume kr leta hai 

    cout<<sit1[1].first<<endl; //{6} will print

    vector<int>sit2(10,50); // vector<data type> name(size , what to insert) >>> Syntax
                            // yha 10 time 50 insert hua hai 

    cout<<sit2[0]<<endl
        <<sit2[1]<<endl
        <<sit2[2]<<endl
        <<sit2[3]<<endl;

    vector<int>sit3(10);   // Agr koi size ka vector bnana chahte hai without data insert
                          // Yha 10 size ka vecto create hua hai but 
                         // usme av koi value nhi hai (sare garbage value hai )

 
    vector<int>sit4(sit2);   // yah sit2 ko pass kr rhe hai 
                            // yah ham sit2 container ko sit4 vector me copy kr rhe hai 
                           //  sit4 jo hai wo exact sit2 ka copy hoga





    //           >>>>>>> ITERATOR <<<<<<<



    //  Synatx >>> vector<data type> :: iterator iterator name = vector_name.begin()
    // Iterator point to the memory adress 
    // sit,begin() hame sit ke zero index ka address mil jyega 
    // Or in c++ memory ke andr jo v hai usko access krne ke liye 
    // Hame * lgna pdta hai  
    // iterator_for_sit >>> ye sit ke zero index ka address dega
    // *(iterator_for_sit) >>> ye sit ke zero index pe jo value hai usko print krega
    vector<int>::iterator iterator_for_sit = sit.begin();

    cout<<*(iterator_for_sit)<<" Printing through iterator"<<endl; // Yha value print hoga sit ke zero index ka 
    iterator_for_sit++;  // Ye next index pe move kr gya
    cout<<*(iterator_for_sit)<<" Printing through iterator"<<endl;
    iterator_for_sit = iterator_for_sit+2; // sit ke one index se third index pe chla gaya
    cout<<*(iterator_for_sit)<<" Printing through iterator"<<endl;

    vector<int>::iterator iterator_for_sit_2 = sit.end(); //ye last wale element ke bad wale pe point krega yha ye
                                                         // 2 ke bad wale pe point krega 
    /*

     array<int , 5 >abhi4={11,1,2,32,13}

       ITERATORS

    >>begin(); >>> begin point on starting point yha 11 pe point krega
    >>end();  >>> ye last wale element ke bad wale pe point krega yha ye 13 ke bad wale pe point krega 
    >>rbegin(); >>> ye last wale element pe point krega yha ye 13 pe point krega 
    >>rbegin(); >>> iske iterator mr ++ krne se reverse me aayega {32 pe point krega}
    >>rend();  >>> ye start wale element ke phle point krega yha ye 11 ke phle point krega 

     >>>>>>  valuable point of iterator <<<<<<

    >> begin ke sath end ko  use krna hoga
    >> rbegin ke sath rend ko hi use krna hoga  
    >> rebegin ke sath begin ya end ko use nhi kr skte 
    >> rend ke sath begin ya end ko use nhi kr skte 
    >> begin ke sath rbegin ya rend ko use nhi kr skte 
    >> end ke sath rbegin ya rend ko use nhi kr skte 


    */

    cout<<sit.back()<<" sit.back() PRint ho rha hai "<<endl;// ye function sit ke last wal element print krega

    // Printing vector useing loop and iterator

    for(vector<int>::iterator i = sit.begin(); i!=sit.end(); i++){
        cout<<*(i)<<" Printing useing loop and iterator "<<endl;
    }

    for(auto i = sit.begin(); i!=sit.end(); i++){  // auto use krne se ye pta chl jta hai kon sa data type hai 
        cout<<*(i)<<" Printing useing auto in loop and iterator "<<endl;
    }
    // For each loop 
    for( auto i : sit){    // Iss syntax se direct value print hoga i ke aage * lgane ka jrurt nhi hai 
                          // Or i++ krne ka v jrurt nhi hai 
                         // or data structure me jitna value hai utna bar lopp chelga or  print hoga 
        cout<<i<<" Printing useing auto without incrementing "<<endl; 
    }


//           >>>>> Deletion in Vector <<<<<

//   vector<int> sit ={1,2,8,6,5,2,7,8,3,9,0,4,6,23,29}

sit.erase(sit.begin()); //{delted value = 1} {sit vector=2,8,6,5,2,7,8,3,9,0,4,6,23,29}
for(auto i : sit ){
    cout<<i<<" Print afte delete "<<endl;
}
sit.erase(sit.begin()+1);//{delted value = 8} {vector sit=2,6,5,2,7,8,3,9,0,4,6,23,29}
for(auto i : sit ){
    cout<<i<<" Print afte delete "<<endl;
}


sit.erase(sit.begin()+2, sit.begin()+6);   //  delted value = 5,2,7,8} {vector sit=2,6,5,3,9,0,4,6,23,29}
                                          // This syntax is for delete data in between vector 
                                         // Eak adresss se dusre adress ke bich ke data ko delete krne ke liye
                                        // First adress uska dena hoga ja se delete krna hai 
                                       // Second adress jha tak delete krna hai uske bad ka 
                                      // Second adress se phle tak ka data delete hoga 
                                     // Isme strat included hota hai end included nhi hota hai 
for(auto i : sit ){
    cout<<i<<" Print afte delete "<<endl;
}

//       >>>>>   Insert Function   <<<<<


vector<int> sit5(2,100);  // Yha vector sit5 bna rhe hai or use 2 bar 100 inser kr rhe hai 
                         // vector sit5 = {100,100}
sit5.insert(sit5.begin(),300);   // Syntax >>> vector_name.insert(adress_in_which_insert, value_what_to_insert)
                                // Yha vector sit5 ke staring adress{0 pe} eak 300 insert ho jyega
                               //  vector sit5 = {300,100,100}
for(auto i : sit5){
    cout<<i<<" Printing after useing inser function "<<endl;
}

sit5.insert(sit5.begin()+1,3,50); //  Syntax >>> vector_name.insert(adress_in_which_insert,how_many_times_to_insert, value_what_to_insert)
                                 //  //  vector sit5 = {300,50,50,50,100,100}
for(auto i : sit5){
    cout<<i<<" Printing after useing inser function 2 "<<endl;
}


// Eak vector ko dusre vector me insert krna 
vector<int>sit6(3,61);
sit6.push_back(8);
sit6.push_back(21);
sit6.push_back(99);
sit6.push_back(65);
sit6.push_back(34);
sit6.push_back(92);
sit6.push_back(11);
sit6.push_back(6);


// vector sit5 ={ 61,61,61,8,21,99,65,34,92,11,6}
for(auto i : sit6){
    cout<<i<<" Printing  vector sit6  "<<endl;
}
// Now we inserting vector sit6{form zeroth index to seventh index} in vector sit5{At zeroth index}
sit5.insert(sit5.begin(),sit6.begin(),sit6.begin()+7);
//Syntax >>> vector_name.insert(Jis_vector_me_jha_pe_insert_krna_hai_address,Jis_vector_ko_jha_se_insert_krwna_hai_address,Jis_vector_ko_jha_tak_insert_krwana_hai_address,)
for(auto i : sit5){
    cout<<i<<" Print sit5 after inserting sit6 "<<endl;
}

    return 0;
}
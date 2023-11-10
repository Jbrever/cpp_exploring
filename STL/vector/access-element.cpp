#include <bits/stdc++.h>
using namespace std;
int main()
{   
    vector<int> v;
    v.push_back(2);
    v.emplace_back(4);
    v.push_back(6);
    v.emplace_back(8);
    
    cout<<"first vector -: "<<endl;
    // begin()
    vector<int>::iterator he = v.begin();
    cout << *(he) << endl;
    he++;

    // end()
    vector<int>::iterator she = v.end();
    --she;
    cout << *(she) << endl;

    she = v.begin();
    she = she + 2;
    cout << *(she) << endl;

    // back();
    cout<<v.back()<<endl;

    //let print every each element by loop
    cout<<endl<<"second vector -: ";
    vector<int> hello;
    hello.push_back(42);
    hello.emplace_back(12);
    hello.push_back(36);
    hello.emplace_back(90);
    
    for(vector<int>:: iterator i = hello.begin(); i != hello.end() ; i++){
      cout<<*(i)<<" ";
    }
    cout<<endl;

    // let print with 'auto' keyword by loop;

    cout<<endl<<"third vector -: ";
    vector<int> hey;
    hey.push_back(142);
    hey.emplace_back(112);
    hey.push_back(136);
    hey.emplace_back(190);
    
    for(auto i = hey.begin(); i !=hey.end() ; i++){
      cout<<*(i)<<" ";
    }
    cout<<endl;
     
}
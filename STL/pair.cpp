#include<bits/stdc++.h>
using namespace std;

int main(){

// store twice data in a variable    
    pair<int,int>a={1,2};
    cout<<"twice data-: "<<a.first<<" "<<a.second<<endl;

// store multiple data in a variable
    pair<int , pair<int,int>>p={2,{3,4}};
    cout<<"multiple data-: "<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;

// store data in array's arcitecture
   pair<int,int>arr[] ={{10,20},{30,40},{50,60}};
   cout<<"array's data-: "<<arr[2].first<<" "<<arr[2].second<<endl;
}




#include<bits/stdc++.h>
using namespace std;

int main(){

vector<int>v;
v.push_back(2);
v.push_back(4);
v.push_back(6);
v.push_back(8);
v.emplace_back(10);

cout<<"before deletion-: ";

cout<<endl;

// deletion 
v.erase(v.begin());         // first element { 4 , 6 , 8 , 10 }
v.erase(v.end()-1);         // last element {2 , 4 , 6 , 8,}
// v.erase(v.begin()+1);       // second element { 2 , 6 , 8 , 10 }
// v.erase(v.begin()+2);       //{2,4,6,10}

vector<int>::iterator i = v.begin();
cout<<"after deletion -: ";

for( i ; i != v.end() ; i++){
    cout<<*(i)<<" ";
}

cout<<endl;


// multiple element deletation
vector<int>a;
a.push_back(20);
a.push_back(40);
a.push_back(60);
a.push_back(80);
a.emplace_back(100);

//a.erase(start , end+1;)
a.erase(a.begin() , a.begin()+3); //{80,100} 

vector<int>:: iterator j = a.begin();

cout<<" multiple deletion -: ";

for(j ; j != a.end() ; j++){
    cout<<*(j)<<" ";
}

    return 0;
}
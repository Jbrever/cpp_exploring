#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int>a(3,100); //{100,100,100}

    a.insert(a.begin()+1 , 200);  //{100,200,100,100}
    a.insert(a.begin(),300);      //{300,100,200,100,100}
    a.insert(a.begin()+1,2,400);  //{300 , 400 , 400 , 100 ,200 , 100 , 100}
    vector<int>:: iterator i = a.begin();
    for(i;i!=a.end();i++)
         cout<<*(i)<<" ";

 
	// Write your code here
    
   

}
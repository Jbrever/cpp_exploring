#include<iostream>
using namespace std;

 bool even_odd(int num){

      if(num&1){
        
        return 1;
      }
      else{
        return 0;
      }
 }

int main(){
  int num;
 
  cout<<"enter num. to check given num. is even or odd-: ";
  cin>>num;

  if(even_odd(num)){
     cout<<"odd"<<endl;   
  }
  else{
    cout<<"even"<<endl;
  }
 
}
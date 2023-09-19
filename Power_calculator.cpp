#include<iostream>
using namespace std;
 
 int power(int base , int expo){
    
   int result = 1;
   int i=0;
   while(i<expo){
         result= result*base;
    i++;
   }

   cout<<"result-:"<<result<<endl;
 }



int main(){

  int base , expo;
  cout<<"enter base-:";
  cin>>base;
  cout<<"enter exponent-:" ;
  cin>>expo;

  power(base,expo);

}
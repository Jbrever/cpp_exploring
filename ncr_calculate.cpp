#include<iostream>
using namespace std;

int factorial(int n){
  
  int fact =1;
  int i=1;
  
  while(i<=n){
     fact= fact*i;     
     i++;
  }
  
   return fact;

}

int ncr(int n,int r){
  int num1 = factorial(n); 
  cout<<n<<" factortial is-:"<<num1<<endl;
   
   int num2=factorial(r);
   cout<<r<<" factortial is-:"<<num2<<endl;
   
   int num3=factorial(n-r);
   cout<<n<<"-"<<r<<" factortial is-:"<<num3<<endl;

  return num1/(num2 * num3);

}

int main(){
    int num1 , num2;
    cout<<"enter numbers-:";
    cin>>num1>>num2;

  int result =  ncr(num1,num2);
  cout<<"the value of nCr ("<<num1<<"C"<<num2<<") is-: "<<result<<endl; 
    
}
#include<iostream>
using namespace std;

int factorial(int num){
 
 int result;
    
    if(num==1){
        return 1;
    }

     result=num*factorial(num-1);
     return result;
}

int main(){
    int num;
    cout<<"enter number -:";
    cin>>num;


 int fact=factorial(num);
 cout<<"factorial of "<<num<<" is-:"<<fact<<endl;
}
#include<iostream>
using namespace std;

int main(){
 int arr[10]={1,2,4,5,6};
 int *p = &arr[0];
 cout<<"address of array is-:"<<p<<endl;
 cout<<"address of array is-:"<<arr+1<<endl;
 cout<<"address of array is-:"<<*(arr+2)<<endl;
 cout<<"address of array is-:"<<*(2+arr)<<endl;
 cout<<"address of array is-:"<<2[arr]<<endl;
 
}   
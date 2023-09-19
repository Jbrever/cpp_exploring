#include<iostream>
using namespace std;

int array(){;
    int arr[15];
    int size = sizeof(arr) / sizeof(int);
    return size; 
}
int main(){
    cout<<"size of array is-: "<<array();
}
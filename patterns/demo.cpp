#include<iostream>
using namespace std;
#include<vector>

int sum(long long n ){
    if(n==1)
       return 1;
    int s = n + sum(n-1);
     return s;
}


int main(){
  int arr[] = {1,2,3,4};
  vector<int>arr1;
  arr1.push_back(21);
  arr1.push_back(22);
  arr1.push_back(23);
  arr1.push_back(24);

  int a = sum(2);
  cout<<a;
  for(int i =0;i<arr1.size();i++){
    arr[i] = arr1[i];
  }

  for(int i =0;i<4;i++){
    cout<<" "<<arr[i]<<" ";
  }
  cout<<"dfsdfsd"<<arr1.size();
}
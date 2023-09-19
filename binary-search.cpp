#include<iostream>
using namespace std;
int binarySearch(int arr[], int key, int size){
   
    int s = 0 , e =size-1 ,i=0;
    int mid = (s+e)/2;
    while(s<=e){
        
        if(key == arr[mid]){
            return mid  ; 
        }

        if(arr[mid]< key){
            s = mid+1 ; 
        }
        else{
          e = mid - 1 ; 
        }

     mid = (s+e)/2;    
        i++;
    }

    return -1;

}

int main(){
  int  arr[6] = {4,6,10,15,16,20};
  int key = 0 , size = 6;

  int result =  binarySearch(arr , key, size);
  cout<<"result -: "<<result<<endl;

}
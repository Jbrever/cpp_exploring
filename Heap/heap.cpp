#include <bits/stdc++.h>
using namespace std;

class heap{
    public:
    int arr[100];
    int size = 0;
    
    void insert(int data){
      
      size += 1;
      arr[size] = data;
      int idx = size;

      int parent = idx/2;
      
      while(idx > 1){
        if(arr[parent] < arr[idx]){
            swap(arr[parent], arr[idx]);
        }
        idx = parent;
        parent = idx / 2;
      }     
      
    }
    void deleteNode(){
        if(size == 0){
            cout<<"head is empty";
            return;
        }
        arr[1] = arr[size];
        size--;
         
        int i = 1; 
        while(i < size){
         int leftChild = 2*i;
         int rightChild = 2*i+1;

         if( leftChild < size && arr[leftChild] > arr[i]){
            swap(arr[leftChild] , arr[i]);
            i = leftChild;
         }
         if(rightChild < size && arr[rightChild] > arr[i]){
            swap(arr[rightChild] , arr[i]);
            i = rightChild;
         }else return;    
        }
    }

    void print(){
        for(int i = 1; i<=size; i++){
             cout<<arr[i]<<" ";  
        }
    }
};

int main(){
    heap obj;
    obj.insert(52);
    obj.insert(51);
    obj.insert(50);
    obj.insert(40);
    obj.insert(30);
    obj.insert(20);

    obj.deleteNode();
    obj.print();
    
    return 0;
}
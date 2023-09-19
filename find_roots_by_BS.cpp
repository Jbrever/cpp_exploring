#include<iostream>
using namespace std;

int findRoot(int target){
   cout<<target;

    int s = 0;
    int e = target ; 
    int mid = (s+e)/2;

    while(s<e){
        if((mid*mid) == target){
            return mid;
        }
        
        if((mid*mid)>target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }

       mid=(s+e)/2;
    }
}

int main (){
    int target ;
    cout<<"enter number that you find root-:";
    cin>>target;

    int root = findRoot(target);
    cout<<"root of "<<target<<" is "<<root;
}
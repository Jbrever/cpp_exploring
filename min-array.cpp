#include <iostream>
using namespace std;

int minArr(int num)
{
   int arr[num];

   cout<<"enter elements -: ";
   for(int i =0;i<num;i++){
     cin>>arr[i];
   }

   cout<<"array is-: ";
   for(int i=0;i<num;i++){
    cout<<arr[i]<<" ";
   }

   int i=0 , min = arr[0];
   while(i<num){
       if(min > arr[i])
       {
        min = arr[i];
       }
    i++;
   }

   return min;
}

int main()
{
    int n;
    cout << "enter number of array-: ";
    cin >> n;

    int minEl = minArr(n);
    cout<<endl<<"min element is-: "<<minEl;
}
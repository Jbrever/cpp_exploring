#include <iostream>
using namespace std;

int sum(int num)
{
   int arr[1000];

   cout<<"enter elements -: ";
   for(int i =0;i<num;i++){
     cin>>arr[i];
   }

   cout<<"array is-: ";
   for(int i=0;i<num;i++){
    cout<<arr[i]<<" ";
   }

   int i=0 , sumEl=0;
   while(i<num){
       sumEl = sumEl + arr[i];
    i++;
   }

   return sumEl;
}

int main()
{
    int n;
    cout << "enter number of array-: ";
    cin >> n;

    int sumEl = sum(n);
    cout<<endl<<"sum of element is-: "<<sumEl<<endl;
}
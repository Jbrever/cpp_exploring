// // #include<bits/stdc++.h>
// // using namespace std;

// // int pivot(int arr[] , int first ,int last){
// //    int pivotEle = arr[first];
// //    int i = last,j = last;
// // while(j > first){
// // if(arr[j] > pivotEle){
// //     swap(arr[i],arr[j]);
// //     i--;
// // }j--;

// // }swap(arr[i],arr[first]);
// // return i;
// // }

// // void quick(int arr[] ,int first , int last){
// //     if(first < last){
// //   int povitindex = pivot(arr,first ,last);
// //   quick(arr,first, povitindex -1);
// //   quick(arr,povitindex + 1 , last);

// // }
// // }

// // int main(){
// //     int arr[]={4,6,2,5,7,9,1,3};
// //     int n = sizeof(arr)/4;
// //     // cout<<n;
// //     quick(arr, 0 ,n-1);
// //     for(int i = 0;i<n;i++){
// //         cout<<arr[i]<<" ";
// //     }
// // }

// // #include<bits/stdc++.h>
// // using namespace std;

// // void pivot(int arr[] , int first ,int last){
// //    int pivotEle = arr[first];
// //    int n = last;
// //    int k = first;
// //    int j = last;
// //    while(k<j){

// //    }
// //    swap(arr[0] , arr[last]);
// //    int i=0;
// //    while(i<=n){
// //     cout<<arr[i]<<" ";
// //     i++;
// //    }

// // }

// // void quick(int arr[] ,int first , int last){
// //   pivot(arr ,first , last );
// // }

// // int main(){
// //     int arr[]={4,6,2,5,7,9,1,3};
// //     int n = sizeof(arr)/4;
// //     // cout<<n;
// //     quick(arr, 0 ,n-1);
// // }

// // #include<bits/stdc++.h>
// // using namespace std;

// // int partitionArray(int input[], int start, int end) {
// //   // Write your code here
// //   int i = start + 1;
// //   int j = end;
// //   int pivotEle = input[start];
// //   while (i < j) {

// //     while (input[i] <= pivotEle && i <= end) {
// //       i++;
// //     }
// //     while (input[j] >= pivotEle && j >= start) {
// //       j--;
// //     }
// //     if (i < j)
// //       swap(input[i], input[j]);
// //   }
// //   swap(input[start] , input[j]);
// //   return j;
// // }

// // void quickSort(int input[], int start, int end) {

// //   if (start < end) {
// //     int pivotEle = partitionArray(input, start, end);
// //     quickSort(input, start, pivotEle - 1);
// //     quickSort(input, pivotEle + 1, end);
// //   }

// // }

// // int main(){
// //   int n;
// //   cout<<"enter size";
// //   cin>>n;
// //   int input[n];
// //   for(int i =0 ; i<n; i++){
// //     cin>>input[i];
// //   }

// //   quickSort(input , 0 , n-1);

// //   for(int i =0;i<n;i++){
// //     cout<<input[i]<<" ";
// //   }
// // }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int n;
//   cout << "enter Array size -: ";
//   cin >> n;
//   vector<int> arr1;
//   vector<int> arr2;

//   cout << "enter First Array Element-: ";
//   for (int i = 0; i < n; i++)
//   {
//     int a;
//     cin >> a;
//     arr1.push_back(a);
//   }

//   cout << endl
//        << "enter Second Array Element-: ";
//   for (int i = 0; i < n; i++)
//   {
//     int a;
//     cin >> a;
//     arr2.push_back(a);
//   }

//   for (int i = 0; i < n; i++)
//   {
//     int count = 0;
//     for (int j = 0; j < n; j++)
//     {
//       if (arr1[j] == arr2[i])
//       {
//         count++;
//         continue;
//       }
//     }
//     if (count == 0)
//     {
//       int a = arr2[i];
//       arr1.push_back(a);
//       // cout<<arr1[n+i]<<" "<<endl;
//     }
//   }
//   for (auto i:arr1)
//   { 
//     cout<<i<<" ";
//   }
// }


#include<iostream>
using namespace std;

int fun(int n , int i){
   if(n==0) return 1;
   return n * fun(n-1 , 0);

}

int main(){
  int n;
  cout<<"enter name-:";
  cin>>n;

 int sum = fun(n ,1);
 cout<<sum; 
  return 0;
}
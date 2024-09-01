#include<bits/stdc++.h>
using namespace std;

class container{
    private: 
    public:

    map<int,int> mapInsert(vector<int>arr , int n){
      map<int,int>mp;
      for(int i = 0 ; i < n ; i++){
           mp[arr[i]] = i ;
           cout<<"sdsds"<<mp[arr[i]]<<" "<<arr[i]<<endl;
      }
      return mp;
    }

    void display(map<int , int>mp){
        map<int , int > :: iterator it = mp.begin();
        for(it;it != mp.end();it++)
          cout<<it->first<<" "<<(*it).second;
    }

};

int main(){
    int n;
    int a = 4;
    cout<<"enter size-: ";
    cin>>n;
    vector<int>arr;
    cout<<"enter element -:";
    for(int i = 0; i<n;i++)
    {
        int x;
        cin>>x; 
        arr.push_back(x);
    }
    cout<<"arr is -: ";
    
    vector<int>::iterator it = arr.begin();
    for(it ; it != arr.end();it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;
    container mapping;
    map<int ,int>mpp = mapping.mapInsert(arr,n); 
    for(int i = 0;i < arr.size();i++){
       cout<<arr[i]<<" "<<mpp[arr[i]]<<endl;
    }
    // map<int,int>:: iterator itr = mpp.begin();
    // for(itr ; itr != mpp.end();itr++)
    //    cout<<itr->first<<" "<<itr->second<<endl;

}
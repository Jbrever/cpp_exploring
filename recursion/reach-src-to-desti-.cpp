#include<iostream>
using namespace std;

void reach(int src , int des){
    cout<<"source "<< src<<" to destination "<<des<<endl;
    if(src == des){
          cout<<"ghar poch gya bhai :) "<<endl;
          return ;
    }
    src++;
    reach(src,des);
}

int main(){

    int des = 10;
    int src = 1;

    reach(src,des);
    return 0;
}

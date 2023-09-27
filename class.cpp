#include<iostream>
using namespace std;

class jbr{
    char hobbies = 'a';
    int mobileNum = 100;

    public:
    int g(){
        return mobileNum;
    }
};

int main(){
    jbr j1 ,j2 ;
    cout<<"size-:"<<j1.g()<<endl;
}
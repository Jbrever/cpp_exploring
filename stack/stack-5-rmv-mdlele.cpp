// remove midlle element from stack it's try to solve we another method

#include<iostream>
using namespace std;

class stack{
    public:
    int *arr;
    int top;
    int size;

stack(int size){
    this -> size = size;
    arr = new int[size];
    top = -1;
}

    void push(int data){
        if(size  - top > 0){
            top++;
            arr[top] = data;
        }
        else {
            cout<<"overflow condition :)"<<endl;
        }
    }

    void pop(){
        if(0>top){
            cout<<"underflow condition :)"<<endl;
        }
        {
            top--;
        }
    }

    void peek(){
        cout<<"top element is-:"<<arr[top]<<endl;
    }
};

int main(){
    stack st(5);
    st.push(3);
    st.push(4);
  
    st.pop();
    st.peek();
    st.pop();
    st.peek();
    return 0;
}
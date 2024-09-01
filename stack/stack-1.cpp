// Q---> create a stack and perform push , pop , peek , empty operation using stack header file

#include<iostream>
using namespace std;
#include<stack>

int main(){

// creation of stack
stack <int> jbr;

// push operation 
jbr.push(1);
jbr.push(2);
jbr.push(3);

// pop operation

jbr.pop();

jbr.push(10);

// see top element of stack


cout<<endl<<"top element of stack-: "<<jbr.top()<<endl;


// see is stack empty or not 
// empty funtion give (0) if stack not empty mean false else it will give ( 1 ) mean true , stack is empty

cout<<endl<<"is stack empty -: "<<jbr.empty()<<endl; 

if(jbr.empty()==1){
cout<<endl<<"stack empty "<<endl;     
}
else{
cout<<endl<<" stack not empty -: "<<endl; 
}


return 0;
}

#include<iostream>
#include<stack>
using namespace std;

// class stack{
//      public:
//      string str = "Love";
//      int top;
//      string *str2;

//    stack(){
//     int size = str.length();
//     str2 = new string[size];
//     top=-1;
//    }

//     void push(){
//         for(int i = 0 ; i<=str.length() ; i++){
//            char ch = + str[i];
//            top++;
//            str2[top] = ch; 
//         }
//     }
//     void peek(){
//       if(top<0){
//         cout<<" stack underFlow :)"<<endl;
//       }       
//       else{
//         cout<<"peek element is -: "<<str2[top]<<endl;
//       }
//     }
// };

int main(){
    stack<char>st;  
    string str = "Love";
    string ans = "";
    for(int i = 0 ; i<str.length() ; i++){
           char ch = str[i];
           st.push(ch);
    }

    for(int i=0 ; !st.empty() ; i++ ){
        char ch =  st.top();
        ans.push_back(ch);

        st.pop();
    }

        cout<<"str2-:"<<ans<<endl;
   

}
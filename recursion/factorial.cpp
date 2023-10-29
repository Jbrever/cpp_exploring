#include <iostream>
using namespace std;
int factorial( int fact , int ans){
  
   cout<<fact<<endl;
  if(fact != 0){
   ans = ans * fact; 
  }
  else {
    return ans;
  }
   factorial(fact-1 , ans);
}
int main()
{

    int num , a ;
    cout << "enter number -:" << endl;
    cin >> num;
    a = num-1;
    int f = factorial( num - 2 , a);
    cout<<"factorial of "<<num<<"is -: "<<f*num;
    return 0;
    
}

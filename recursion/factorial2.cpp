#include <iostream>
using namespace std;

int power(int exp)
{
    //base condition
    if(exp == 0){
        return 1;
    }

    int smallproblems = power(exp-1);
    int bigProblems = 2 * smallproblems ;
    return bigProblems;
}

int main()
{
    int n;
    cout << "enter number" << endl;
    cin >> n;

    int ans = power(n);

    cout<<ans<<endl;;
}
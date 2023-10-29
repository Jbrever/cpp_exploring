#include <iostream>
using namespace std;

int number(int n)
{

    if (n == 0)
    {
        return 1;
    }
    cout<<" "<<n<<" ";
    number(n-1);
}

int main()
{
    int n;
    cout << "enter num-:" << endl;
    cin >> n;
    int a = n + 1;
    number(n);
}
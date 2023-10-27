#include <iostream>
using namespace std;

int square(int num, int exp, int i , int a)
{
    
    cout << "i-:" << i << endl;
    if (i < exp)
    {
        a = a * num;
        i++; 
    }
    else
    {
        return a;
    }

    square(num, exp, i , a);
}

int main()
{
    int num, exp;
    cout << "enter number -:" << endl;
    cin >> num;
    cout << "enter number of exponents-:" << endl;
    cin >> exp;
    int i = 1 ,a = num;
    int f = square(num, exp, i , a);
    cout << "square is -:" << f;
    return 0;
}
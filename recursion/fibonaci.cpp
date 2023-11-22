#include <iostream>
using namespace std;

void fibonaci(int a, int b)
{
    int i = 1;
    if (i == 5)
    {
        return;
    }

    cout << " " << a << " ";

    i++;

    int c = a + b;
    a = b;
    b = c;

    fibonaci(a, b);
}

int main()
{
    int a = 1, b = 1;
    fibonaci(a, b);
    return 0;
}
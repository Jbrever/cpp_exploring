// by recursion

// void pattern(int size , int i){
//     if(size == i){
//         return ;
//     }
//     int j=0;
//     while(j<size){
//        cout<<" * ";

//        j++;
//     }
//     cout<<endl;

//    pattern(size ,i+1);
// }

// int main(){
//     int size = 5 , i=0;

//     pattern(size,i);
// }

#include <iostream>
using namespace std;

class pattern
{
public:
    int size;
    pattern(int size)
    {
        this->size = size;
    }
    void square();
    void strLftTriangle();
    void strRevLftTriangle();
    void num1LftTriangle();
    void num2LftTriangle();
    void num3LftTriangle();
    void strPiramidTriangle();
    void strRevPiramidTriangle();
    void strDaimond();
};

void pattern::square()
{
    int i = 0;
    while (i < size)
    {
        int j = 0;
        while (j < size)
        {
            cout << " * ";
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern::strLftTriangle()
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern::strRevLftTriangle()
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern::num1LftTriangle()
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}

void pattern::num2LftTriangle()
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }
}

void pattern::num3LftTriangle()
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}

void pattern::strPiramidTriangle()
{
    int c = 0;
    for (int i = 0; i < size; i++)
    {
        for (int space = 0; space < size - (i + 1); space++)
        {
            cout << " ";
        }
        for (int j = 0; j <= c; j++)
        {
            cout << "*";
        }
        cout << endl;
        c = c + 2;
    }
}

void pattern::strRevPiramidTriangle()
{
    int c = size * 2 - 1;
    for (int i = 0; i < size; i++)
    {
        for (int space = 0; space < i; space++)
        {
            cout << " ";
        }
        for (int j = 0; j < c; j++)
        {
            cout << "*";
        }
        cout << endl;
        c = c - 2;
    }
}

void pattern::strDaimond(){
   int c = 0;
    for (int i = 0; i < size; i++)
    {
        for (int space = 0; space < size - (i + 1); space++)
        {
            cout << " ";
        }
        for (int j = 0; j <= c; j++)
        {
            cout << "*";
        }
        cout << endl;
        c = c + 2;
    }

    int a = size * 2 - 1;
    for (int i = 0; i < size; i++)
    {
        for (int space = 0; space < i; space++)
        {
            cout << " ";
        }
        for (int j = 0; j < a; j++)
        {
            cout << "*";
        }
        cout << endl;
        a = a - 2;
    }
}

int main()
{
    int t = 3;
    int size;
    for (int i = 0; i < t; i++)
    {
        cout << "enter size-: ";
        cin >> size;
        pattern n(size);
        n.strDaimond();
    }
}

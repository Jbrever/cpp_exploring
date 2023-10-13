#include <iostream>
using namespace std;

int main()
{

    int array[100], size;
    cout << "enter size -: ";
    cin >> size;
    int i = 0;

    cout << endl
         << "enter elements -: ";
    while (i < size)
    {
        cin >> array[i];
        i++;
    }

    i = 0;
    while (i < size)
    {
        int j = i + 1;

        if (i+1<size)
        {
            int temp = array[j];
            array[j] = array[i];
            array[i] = temp;
        }
        i=i+2;
    }

    i = 0;
    cout << endl
         << "Alternate Array is -: ";
    while (i < size)
    {
        cout << array[i] << " ";

        i++;
    }
}

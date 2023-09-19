#include <iostream>
using namespace std;

void reverse(int arr[], int size)
{
    int i = 0;
    while (i < size / 2)
    {
        int temp = arr[size - 1 - i];
        arr[size - 1 - i] = arr[i];
        arr[i] = temp;

        i++;
    }

    cout<<"reverse of array -: " ; 

    int j = 0;
    while (j < size)
    {
        cout << arr[j] << " ";
        j++;
    }
}

int main()
{
    int size, arr[100];
    cout << "enter size -: ";
    cin >> size;
    int i = 0;

    cout << endl
         << "enter elements -: ";
    while (i < size)
    {
        cin >> arr[i];

        i++;
    }

        cout << endl
         <<endl<< "original array -: ";
    int j=0;
    while (j < size)
    {
        cout << arr[j] << " ";

        j++;
    }

    reverse(arr, size);
}

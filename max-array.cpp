#include <iostream>
using namespace std;

int maxArr(int num)
{
    int arr[num];

    cout << "enter elements -: ";
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    cout << "array is-: ";
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }

    int i = 0, max = arr[0];
    while (i < num)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        i++;
    }

    return max;
}

int main()
{
    int n;
    cout << "enter number of array-: ";
    cin >> n;

    int maxEl = maxArr(n);
    cout << endl
         << "max element is-: " << maxEl;
}
#include <iostream>
using namespace std;

// int findEle(int arr[], int size, int n)
// {
//     int i = 0;
//     cout << endl
//          << "array is-: ";
//     while (i < size)
//     {
//         cout << arr[i] << " ";
//         i++;
//     }

//     int j = 0;

//     cout << endl;
//     while (j < size)
//     {
//         if (n == arr[j])
//         {
//             cout << endl
//                  << "yes!! number present ";
//             break;
//         }
//         if (j == size -1)
//         {
//             cout << endl
//                  << "not present !!";
//         }

//         j++;
//     }
// }

// int main()
// {
//     int array[100], size, ele;
//     cout << "enter size -: ";
//     cin >> size;
//     int i = 0;

//     cout << endl
//          << "enter elements -: ";
//     while (i < size)
//     {
//         cin >> array[i];

//         i++;
//     }

//     cout << "enter number that you want to find -: ";
//     cin >> ele;

//     int res = findEle(array, size, ele);
//     cout << endl
//          << res;
// }


// By Bool Data type


bool findEle(int arr[], int size, int n)
{
    int i = 0;
    cout << endl
         << "array is-: ";
    while (i < size)
    {
        cout << arr[i] << " ";
        i++;
    }

    int j = 0;

    cout << endl;
    while (j < size)
    {
        if (n == arr[j])
        {
            return 1;
        }

        j++;
    }
    return 0;
}

int main()
{
    int array[100], size, ele;
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

    cout << "enter number that you want to find -: ";
    cin >> ele;

    bool res = findEle(array, size, ele);

    if (res)
    {
        cout << endl
             << "yes!! number present "<<endl;
    }
    else
    {
        cout << endl
             << "not present !!"<<endl;
    }
}

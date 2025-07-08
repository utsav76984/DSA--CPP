#include <iostream>

using namespace std;

int main()
{

    int size;
    int *arr;

    arr = new int[size];

    if (arr == NULL)
    {
        cout << "memory Allocation failed" << endl;
    }
    else
    {
        cout << "memory Allocation Successfully" << endl;
    }

    arr[0] = 12;
    cout << arr[0] << endl;

    // delete[] arr;

    int *newarr = arr;

    arr = NULL;

    if (arr == NULL)
    {
        cout << "memory Deallocated Successfully" << endl;
    }
    else
    {

        cout << "memory Deallocated failed" << endl;
    }

    return 0;
}

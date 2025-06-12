#include<iostream>
using namespace std;

int main(){

    int size;
    cout << "size: ";
    cin >> size;

    int arr1[size];
    int arr2[size];
    int arr3[size];

    for (int i=0; i<size; i++)
    {
        cout<<"arr1["<< i <<"]";
        cin >>arr1[i];
    }
    for (int i=0; i<size; i++)
    {
        cout<<"arr2["<< i <<"]";
        cin >>arr2[i];
    }

     for(int i=0; i<size; i++)
    {
        arr3[i] = arr1[i] + arr2[i];
    }

    cout << "[";
    for(int e : arr3)
    {
        cout << e << ", ";
    }
    cout << "]";
    
return 0;
}
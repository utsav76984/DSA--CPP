#include<iostream>

using namespace std;
 
int main(){

    int arr[7]={ 7, 6, 5, 4, 3, 2, 1};

    int size = sizeof(arr)/ sizeof(arr[0]);

    for (int i=0; i<size; i++)
    {
         cout << "arr[" << i << "]: " << arr[i] << endl;
    }
    

    return 0;
}

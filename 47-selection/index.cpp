// #include<iostream>

// using namespace std;


// int main(){

//     int arr[] = {11, 3, 7, 8, 9, 10};

//     int n = 6;

//     for (int i = 0; i<n-1; i++)
//     {
//         int smallindex=i;

//         for(int j = i+1; j<n; j++){

//             if (arr[j]<arr[smallindex])
//             {
//                 smallindex=j;
//             }
            
//         }

//         swap(arr[i],arr[smallindex]);

//         // int temp=arr[i];
//         // arr[i]=arr[smallindex];
//         // arr[smallindex]=temp;

//     }
    
//         cout<< "sorted elements are ";
//         for(int i=0;i<n;i++){
//             cout<<arr[i] << " ";
//         }
//         cout<<endl;


//     return 0;
// }


#include <iostream>

using namespace std;


void selectionSort(int arr[],int n){

    for(int i=0;i<n-1;i++){
        int smallestIndex=i;

        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[smallestIndex]){
                smallestIndex=j;
            }
            
        }

        // swap(arr[i],arr[smallestIndex]);

        int temp = arr[i];
        arr[i]=arr[smallestIndex];
        arr[smallestIndex]=temp;


    }

    cout<<"sorted elements are " ;
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}


int main(){


    int arr[]={8,4,9,3,1,2};
    int n=6;

    selectionSort(arr,n);

    return 0;
}

#include <iostream>
#include <vector>

using namespace std;



int binarySearch(const vector<int>&arr,int start,int end,int searchingValue){

    if(start<=end){

        int mid = start + (end-start)/2;

        if(arr[mid] == searchingValue){
            return mid;

        }else if (arr[mid]<searchingValue){
           return binarySearch(arr,mid+1,end,searchingValue);
        }else {
           return binarySearch(arr,start,mid-1,searchingValue);
        }
        return -1;

    }



}

int main(){
    const vector<int>arr={1,2,3,4,5};


    int searchingValue = 4;

    int idx = binarySearch(arr,0,arr.size()-1,searchingValue);

    if(idx == -1){
        cout << "no match found" <<endl;
    }else{
        cout << searchingValue << " match found at index position " << idx << endl;
    }



    return 0;
}
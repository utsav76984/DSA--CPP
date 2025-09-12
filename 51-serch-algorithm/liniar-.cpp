#include<iostream>
#include<vector>

using namespace std;


int linearSearch(const  vector<int>&arr, int value){

  for(int i=0; i<arr.size(); i++){

    if(arr[i] == value){
        return i;
    }
  }

  return -1;

}

int main(){
     
   const vector<int>arr = {10,20,30,40,50};

   int value = 10;

   int idx = linearSearch(arr,value);

   if(idx == -1){
      cout<<"No match Found"<<endl;
   }
   else{
    cout<<value<<" is loacated at "<<idx<<" index position"<<endl;
   }

    return 0;
}
#include<iostream>
#include<string>
#include<vector>

using namespace std;

template<typename T>
class Vector{

    private:

    int size;
    T *arr;

    public:

    Vector(){

        this->size=0;
        arr = new T[100];
    }

    void push( T ele)
    {
    arr[this->size] = ele;
    this->size++;
   }

   void pop(){
    this->size--;
   }

   void print(){
        for(int i=0; i<this->size; i++){
            cout << arr[i] << ", ";
        }
        cout << endl;
    } 

    void length(){
        cout<<this->size<<endl;
    }
};



int main(){

    Vector <int>arr;


    vector <int>arry(5, 7);


    arr.push(40);
    arr.push(45);
    arr.push(50);
    arr.push(55);

        
     arr. pop();
     arr. pop();
     arr.length();


      arr.print();
     
    

     cout<<"*********************"<<endl;

     Vector <string>name;

     name.push("parth");
     name.push("yash");

    name.print();
     
    return 0;
}
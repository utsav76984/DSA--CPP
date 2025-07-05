#include<iostream>
#include<string>
using namespace std;

//    _______
//   |       |
//   |   A   |
//   |_______|
//       |
//       |
//    ___|___
//   |       |
//   |   B   |
//   |_______|    
//       |
//       |
//    ___|___
//   |       |
//   |   C   |
//   |_______|    


class Animal{
    public:
    int legs = 4;

    void eat(){

    }
};


class Dog : public Animal{

    public:
    

    void bark(){

    }

};


class BullDog : public Dog{
    public:
    string mounth = "big";
};


int main(){

   BullDog b1;

   cout << b1.legs << endl;;

    return 0;
}
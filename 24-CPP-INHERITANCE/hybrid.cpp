#include<iostream>
#include<string>
using namespace std;

//            _______
//           |       |
//           |   A   |
//           |_______|    
//               |
//        _______|_______  
//       |               |
//       |               |
//    ___|___         ___|___
//   |       |       |       |
//   |   B   |       |   C   |
//   |_______|       |_______|      
//       |               |
//       |               |
//       |_______________|
//            ___|___
//           |       |
//           |   D   |
//           |_______|    

 class Person{


};

class Employ :public Person{


};

class student{

};

class prattime:public student,  public Person{

};



int main(){

    return 0;
}
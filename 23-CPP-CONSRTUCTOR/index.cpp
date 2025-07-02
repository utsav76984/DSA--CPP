#include<iostream>
#include<string>
using namespace std;

 // constructor 

class Object{

    private:
    int roll;
    string name;
    string course;
 

    public:

   
   Object(){
        this->roll = 1;
        this->name="-";
        this->course="-";
        cout << "Object is constructed...!" << endl;       
    }
 
   ~Object(){
    this->roll = 0;
        cout << "Object is Destructed...!" << endl;
    }


    Object(int id){
        this->roll = id;
        this->name="utsav";
        this->course="fsd";
    }

    void setData(string name, string course){
        this->name= name;
        this->course = course;
    }


    void getData()
    {
    cout << this->roll << endl;
    cout << this->name << endl;
    cout << this->course << endl;
    }

};

int main(){

    Object obj1(2), obj2(3), obj3(4), obj4;

    obj1.setData("UTSAV", "fsd");
    obj1.getData();
    obj2.getData();
    obj3.getData();

    return 0;
}
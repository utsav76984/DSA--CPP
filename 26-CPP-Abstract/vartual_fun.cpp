#include<iostream>
#include<string>

using namespace std;

class object{

    public:

   virtual void alert()= 0;
};

class subclass: public object{
    public:
    void alert(){
        cout<<"life is hard but not imposible"<<endl;
    }
};   

int main(){

   subclass obj;
    
    obj.alert();

    return 0;
}
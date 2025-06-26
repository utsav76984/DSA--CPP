#include<iostream>
#include<string>
using namespace std;

class Std{

    private:
    int price;
    float rate;

    public:
    void setter(int price, float rate){
        this->price = price;
        this->rate = rate;
    }

    void getter(){
        cout << "price: " << this->price << endl;
        cout << "rate: " << this->rate << endl;

        cout << this << endl;
    }

};


 int main(){

    Std s1, s2, s3;
    int price ;
    float rate;

    cout << "price: ";
    cin >> price;
    cout << "rate: ";
    cin >> rate;

    s1.setter(price, rate);

    s1.getter();


    cout << "***************************************" << endl;

    cout << "price: ";
    cin >> price;
    cout << "rate: ";
    cin >> rate;

   
    s3.setter(price, rate);
    
    s3.getter();

     cout<<"*******************************************"<<endl;
     
    cout << "price: ";
    cin >> price;
    cout << "rate: ";
    cin >> rate;


    s3.setter(price, rate);
    
    s3.getter();

 
   
    return 0;
 }
#include<iostream>
#include<string>
using namespace std;

 class car{
    
    public:
    string wheel="MRF";
    string body="cardbon";
    string window="window";
 };

 class thar :public car{

    public:
    string engine="ds";
    int price=1700;

    void Bolero(){

        cout <<"wheel"<<this->wheel <<endl;
        cout<<"engine"<<this->engine <<endl;
        cout<<"proce"<<this->price <<endl; 

    }
 };

int main(){

   thar std1;

   std1.Bolero();

    return 0;
}
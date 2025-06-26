#include<iostream>
#include<string>
using namespace std;

class Data{

    public:
    string name;
    string email;
    int phone;
    string password;

};


 int main(){

    Data obj1;

    int size;
    cout << "size: ";
    cin >>size;

    Data obj[size];

    for(int i=0; i<size; i++)
    {
        cout  << i << "-name : ";
        cin >> obj[i].name;
        cout  << i << "-email : ";
        cin >> obj[i].email;
        cout  << i << "-phone : ";
        cin >> obj[i].phone;
        cout  << i << "-password : ";
        cin >> obj[i].password;
        cout << endl;
    }

    cout << "======================"<< endl;
      for(int i=0; i<size; i++)
    {
        cout << "name: : " << obj[i].name << endl;
        cout << "email: : " << obj[i].email << endl;
        cout << "phone: : " << obj[i].phone << endl;
        cout << "password: : " << obj[i].password << endl;
    }

    return 0;
 }
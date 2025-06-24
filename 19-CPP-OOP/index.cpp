#include <iostream>
#include <string.h>

using namespace std;

class student
{

public:
    int roll;

    char name[20];

    char course[100];
};



class hotel
{

    public:
    char name[100];
    int room_price;
    int lunce_price;

};


int main()
{
    cout<<"________________student-de____________"<<endl;

    student std1, std2;

    std1.roll = 1;
    strcpy(std1.name, "dharmik");
    strcpy(std1.course, "full stack");

    cout << std1.roll << endl;
    cout << std1.name << endl;
    cout << std1.course << endl;






    cout<<"_______________________________________"<<endl;

    std2.roll = 2;
    strcpy(std2.name, "prtik");
    strcpy(std2.course, "full stack");


    cout << std2.roll << endl;
    cout << std2.name << endl;
    cout << std2.course << endl;



    cout<<"_________________hotel section____________"<<endl;

    hotel hotel1, hotel2, hotel3, hotel4, hotel5;

    strcpy(hotel1.name, "white rose Hotel");
    hotel1.room_price= 1299;
    hotel1.lunce_price=600;

    cout << hotel1.name <<endl; 
    cout << hotel1.room_price <<endl; 
    cout << hotel1.lunce_price <<endl; 


    cout<<"_______________________________________________"<<endl;

    strcpy(hotel2.name, "aaverahi Hotel");
    hotel2.room_price= 1299;
    hotel2.lunce_price=600;

    cout << hotel2.name <<endl; 
    cout << hotel2.room_price <<endl; 
    cout << hotel2.lunce_price <<endl; 


    cout<<"_______________________________________________"<<endl;

    strcpy(hotel3.name, "mahi Hotel");
    hotel3.room_price= 2200;
    hotel3.lunce_price=400;

    cout << hotel3.name <<endl; 
    cout << hotel3.room_price <<endl; 
    cout << hotel3.lunce_price <<endl; 


    cout<<"_______________________________________________"<<endl;

    strcpy(hotel4.name, "Sky Inn Hotel");
    hotel4.room_price= 1700;
    hotel4.lunce_price=400;

    cout << hotel4.name <<endl; 
    cout << hotel4.room_price <<endl; 
    cout << hotel4.lunce_price <<endl; 


    cout<<"_______________________________________________"<<endl;

    strcpy(hotel5.name, "sarover Hotel");
    hotel5.room_price= 1700;
    hotel5.lunce_price=400;

    cout << hotel5.name <<endl; 
    cout << hotel5.room_price <<endl; 
    cout << hotel5.lunce_price <<endl; 


    return 0;
}
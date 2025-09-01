#include<iostream>
#include<vector>
#include<string>
using namespace std;

class student{
    public:

    int id;
    string name;


    student(int id, string name){

        this->id = id;
        this->name = name;
    }

      int getId() {  
        return id;
    }
};


class  List{

    public:

    vector<student> list;

     List(){}

    void AddStudent(int id, string name) {

        student s(id, name);
        list.push_back(s);
        cout << "Student added successful" << endl;
    }

    void SearchStudentById(int id) 

    {

        for (student &e : this->list) {
            if (e.getId() == id) {
                cout << e.id << " | " << e.name << endl;
            }
        }
    }

    void DisplayStudents() {
        if (list.empty()) 
        {
            cout << "No students to display." << endl;
        } 


        else{
            cout << "All Students: " << endl;
            for (student &e : list) {
                cout << "ID : " << e.id << " , Name: " << e.name << endl;
            }
        }
    }
};


int main(){
    int id ;
    string name;
    int choice;
    List list;


    while (choice !=0)
    {
        cout<<"==========================list======================="<<endl;

        cout<<"press 1 for add a student"<<endl;
        cout<<"Press 2 for Display Students."<<endl;
        cout<<"press 3 for remove student"<<endl;
        cout<<"Press 4 for Search Student "<<endl;
        cout<<"press 0 for exit"<<endl;


        cout<<"enter your  choice :  ";
        cin>> choice;


        cout<<"==================================="<<endl;
  switch (choice) {
            case 1:
                cout << "Enter ID: ";
                cin >> id;
                cout << "Enter Student name: ";
                cin >> name;
                list.AddStudent(id, name);
                break;
            case 2:
                list.DisplayStudents();
                break;
            case 3:
                cout << "Enter ID: ";
                cin >> id;
                list.AddStudent(id, name);
                break;
            case 4:
                cout << "Enter ID: ";
                cin >> id;
                list.SearchStudentById(id);
                break;
            default:
                cout << "Invalid choice.Please Try again " << endl;
        }
         
    }
    
    return 0;

}
#include<iostream>

using namespace std;

int main(){

    int choice,types;

  cout <<"press  1 for pizza"<<endl;
  cout <<"press  2 for pasta"<<endl;
  cout <<"press  3 for burger"<<endl;
  cout <<"press  4 for sandwitch"<<endl;

    cout <<"choice: ";
    cin >> choice;

  

        switch(choice){
            case 1: 
               cout<<"1 enter for Chicago";
               cout<<"2 enter for Brick";
               cout<<"3 enter for Italian";
               cout<<"4 enter for Neapolitan";

               cout<<"types";
               cin >> types;

                if(types==1)
                        {
                            cout << "You Ordered ChicagoPizza" << endl;
                        }
                        else if(types==2)
                        {
                            cout << "You Ordered Brick Pizza" << endl;
                        }
                        else if(types==3)
                        {
                            cout << "You Ordered Italian Pizza" << endl;
                        }
                        else if(types==4)
                        {
                            cout << "You Ordered  Neapolitan Pizza" << endl;
                        }
                        else 
                        {
                            cout << "This type not avaailable..!" << endl;
                        }
            break;


            case 2: cout<<"s enter for pasta";
            break;
            case 3: cout<<"s enter for burger";
            break;
            case 4: cout<<"s enter for sandwitsh";
        }

  return 0;
  
}
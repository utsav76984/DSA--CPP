#include<iostream>

using namespace std;

int main(){
    cout <<"Press 1 for Pizza"<<endl;
    cout <<"Press 2 for PASTA"<<endl;
    cout <<"Press 3 for burger"<<endl;
    cout <<"Press 3 for sandwitch"<<endl;  

    int a,x;
    cout <<"x: ";
    cin >>x;

    if(x==1){
        cout<<"You Ordered Pizza";
        cout << "price: 200"<< endl;
    }

    else if(x==2){
        cout<<"You Ordered PAST";
        cout << "price: " << 100 << endl;
    }

    else if(x==3){
        cout<<"You Ordered burger";
        cout << "price: " << 60 << endl;
    }
    else if(x==4){
        cout<<"You Ordered sabnwich";
        cout << "price: " << 150 << endl;
    }
    else{
     cout<<"prese valid order......!";
    }

    return 0;
}


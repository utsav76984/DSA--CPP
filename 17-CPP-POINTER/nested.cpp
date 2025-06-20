#include <iostream>

using namespace std;

void third(){
    cout<<"third fun callde"<<endl;
}

void second(){

    cout<<"second fun called"<<endl;
    third();
}

void first()
{
    cout<<"first fun called"<<endl;
     second();
}

int main(){

    first();

    return 0;
}
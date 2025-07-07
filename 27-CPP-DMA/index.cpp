#include<iostream>
using namespace std;
//     ________________
//    | ______________ |
//    ||              ||
//    ||  sub(),x,y   ||
//    ||______________||
//    | ______________ |
//    ||              ||
//    ||  sum(),x,y   ||
//    ||______________||
//    | ______________ |
//    ||              ||
//    ||  main(),a,b  ||
//    ||______________||
//    |________________|

void sub(int x, int y){

    cout << x+y<<endl;
};

void sum(int x, int y){

    cout<< x-y<<endl;
    sub(x,y);
};

int main(){

    int a=10, b=10;

    sum(a,b);
    return 0;
}
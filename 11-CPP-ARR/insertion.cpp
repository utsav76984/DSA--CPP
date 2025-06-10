#include<iostream>

using namespace std;
 
int main(){

    int size;
    cout<<"size:";
    cin>>size;
    char str[size];

    cin >> str[0];
    cin >> str[1];
    cin >> str[2];
    cin >> str[3];
    

    
cout << "-------" << endl;

for(int i=0; i<size; i++)
{
    cout << str[i] << ", ";
}



cout << endl << "----" << endl;

for(char x : str)
{
    cout << x << ", ";
}


    return 0;
}
   

 
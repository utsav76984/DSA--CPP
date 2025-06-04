#include<iostream>

using namespace std;

int main(){
    int i = 1;
    int n = 10;

    int sum = 0;

    while(i <= n) 
    {
            sum  = sum + i; 
            i++;    
    }

      cout << "Sum: " << sum << endl;


    return 0;
}
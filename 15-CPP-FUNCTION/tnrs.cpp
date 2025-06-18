#include <iostream>

using namespace std;

int sumCom()
{
    int math = 90;
    int eco = 73;
    int eng = 75;
    int acu = 82;
    int sta = 92;

    int sum = math + eco + eng + acu + sta;

    return sum;
}

int sumSci()
{
    int math = 90;
    int sci = 80;
    int eng = 75;
    int che = 79;
    int comp = 95;

    int sum = math + sci + eng + che + comp;

    return sum;
}

int main()
{

    int sum1 = sumCom(); 
    int sum2 = sumSci(); 

    int avg1 = sum1/5;
    int avg2 = sum2/5;
    

    cout << "avg commerce: " << avg1 <<  endl;
    cout << "avg Science: " << avg2 <<  endl;
    

    return 0;
}
#include <iostream>

using namespace std;

void cube(int &num)
{
    cout << &num << endl;
}

int main()
{

    int x = 3;
    int &num = x;

    cout << &x << endl;

    cube(num);

    return 0;
}
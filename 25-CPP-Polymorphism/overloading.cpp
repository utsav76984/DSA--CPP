#include <iostream>
#include <string>

using namespace std;

class parent
{

public:
    int add(int x, int y)
    {

        return x + y;
    }

    string add(string n1, string n2)
    {
        return n1 + n2;
    }
};

int main()
{

    parent op;

    cout << op.add(2, 2) << endl;
    cout << op.add("utsav ", "kalathiya") << endl;

    return 0;
}
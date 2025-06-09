#include <iostream>

using namespace std;

int main()
{

    int r, c;
    cout << "r";
    cin >> r;
    cout << "c";
    cin >> c;

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cout << "*" << "   ";
        }
        cout << endl;
    }

    cout << "------------------------------------" << endl;

    for (int i = 1; i <= r; i++) 
    {
        for (int j = 1; j <= c; j++) 
        {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << "------------------------------------" << endl;

    for (int i = 1; i <= r; i++) 
    {
        for (int j = 1; j <= c; j++)
        {
            cout << i << " "; 
        }
        cout << endl;
    }

    return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int arr[5][5] = {
        {10, 11, 12, 13, 14},
        {15, 16, 17, 18, 19},
        {20, 21, 22, 23, 24},
        {25, 26, 27, 28, 29},
        {30, 31, 32, 33, 34},

    };

    int r = 5, c = 5;

    for (int i = 0; i < r; i++)
    {
        int sum = 0;
        for (int j = 0; j < c; j++)
        {
            sum += arr[i][j];
        }
        cout << "Sum of row " << i << " = " << sum << endl;
    }

    return 0;
}

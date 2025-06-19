#include <iostream>
#include <iomanip>
using namespace std;

int main() {


    int arr[5][5] = {
        {10, 11, 12, 13, 14},
        {15, 16, 17, 18, 19},
        {20, 21, 22, 23, 24},
        {25, 26, 27, 28, 29},
        {30, 31, 32, 33, 34},
       
    };

    int r = 5, c = 5;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (i == 0 || j == 0 || i == r - 1 || j == c - 1) {
                cout << setw(4) << arr[i][j];
            } else {
                cout << setw(4) << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

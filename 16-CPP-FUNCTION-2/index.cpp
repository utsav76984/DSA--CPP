#include <iostream>

using namespace std;

int sum(int n)
{

    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum = sum + i;
    }

    return sum;
}

int score(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    int avg = sum / size;

    return avg;
}
int main()
{
    int com[5] = {78, 99, 72, 85, 96};
    int sci[6] = {78, 75, 88, 99, 77};

    int perc = score(com, 5);

    cout << perc << endl;
    cout << "SCie: " << score(sci, 6);

    //    int ans = sum(10);
    //     cout << ans;

    return 0;
}
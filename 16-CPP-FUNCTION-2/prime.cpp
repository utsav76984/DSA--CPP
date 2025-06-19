#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}



int main()
{
    int num = 87;

    // if (isPrime(num))
    // {
    //     cout << num << " is Prime Number" << endl;
    // }
    // else
    // {
    //     cout << num << " is not Prime Number" << endl;
    // }

    // Uncomment this to print primes from 1 to 100

    for (int i = 1; i <= 100; i++)
    {
        if (isPrime(i))
        {
            cout << i << ", ";
        }
    }
    

    return 0;
}

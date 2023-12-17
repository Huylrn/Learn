#include <iostream>
#include <math.h>

using namespace std;

bool PrimeNumber(int a)
{
    if (a == 1)
        return false;
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
} // check prime number
void square()
{
    int line = 5;
    int column = 5;
    for (int i = 1; i <= column; i++)
    {
        for (int j = 1; j <= line; j++)
        {
            cout << "|";
            cout << "1";
        }
        cout << "|" << endl;
    }
} // make a square 5x5
int main()
{
    // int s;
    // cout << "Sum s = ";
    // cin >> s;

    square();

    return 0;
}
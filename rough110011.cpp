#include <iostream>
using namespace std;

bool isPrime(int a)
{
    int index = 2;
    while (index < a)
    {
        if (a % index == 0)
        {
            return false;
            break;
        }
        else
        {
            index++;
        }
    }
    return true;
}

int main()
{
    int a, b;
    cout << "Enter two numbers to check prime between them : ";
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if (isPrime(i))
        {
            cout << i << " is a prime number"<<endl;
        }
    }
}
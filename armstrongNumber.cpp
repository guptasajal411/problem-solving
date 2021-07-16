#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int number;
    cout << "Enter number to check armstrong : ";
    cin >> number;
    int duplicate = number;
    int sum = 0;

    while (number > 0)
    {
        int temp = (number % 10);
        sum = (sum + (temp * temp * temp));
        number = (number / 10);
    }

    if (sum == duplicate)
    {
        cout << " is an armstrong number";
    }
    else
    {
        cout << " is not an armstrong number";
    }
}
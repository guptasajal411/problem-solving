#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "\n\tEnter number to check prime or composite : ";
    cin >> number;
    bool flag = 0;

    for (int index = 2; index < number; index++)
    {
        if ((number % index) == 0)
        {
            cout <<"\t"<< number << " is non-prime" << endl;
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout <<"\t"<< number << " is prime" << endl;
    }

    return 0;
}
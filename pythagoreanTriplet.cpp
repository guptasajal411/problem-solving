#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

void pythagoreanTriplet(int x, int y, int z)
{
    int a = max(x, max(y, z));
    int b, c;
    if (a == z)
    {
        b = y;
        c = x;
    }
    else if (a == y)
    {
        b = z;
        c = x;
    }
    else if (a == x)
    {
        b = z;
        c = y;
    }

    if ((a * a) == ((b * b) + (c * c)))
    {
        cout << "given numbers are a pythagoreean triplet";
    }
    else
    {
        cout << "given numbers are not a pythagoreean triplet";
    }
}

int main()
{
    int a, b, c;
    cout << "Enter value of a, b and c : ";
    cin >> a >> b >> c;

    pythagoreanTriplet(a, b, c);
}
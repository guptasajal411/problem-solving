#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int size;
    cout << "enter size of array : ";
    cin >> size;

    int array[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    int maxNo = INT_MIN;
    int minNo = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        // if (array[i] > max)
        // {
        //     max = array[i];
        // }
        maxNo = max(maxNo, array[i]);
    }
    cout << "maximum value in the given array is : " << maxNo << endl;

    for (int i = 0; i < size; i++)
    {
        // if (array[i] < min)
        // {
        //     min = array[i];
        // }
        minNo = min(minNo, array[i]);
    }
    cout << "minimum value in the given array is : " << minNo << endl;
}
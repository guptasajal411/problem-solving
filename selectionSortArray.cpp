#include <iostream>
using namespace std;

void selectionSort(int array[], int size)
{
    int originalArray[size];
    for (int i = 0; i < size; i++){
        originalArray[i] = array[i];
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (array[i] < array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    cout<<"\n\tUnsorted array was : ";
    for (int i = 0; i < size; i++){
        cout<<originalArray[i]<<" ";
    }

    cout<<"\n\tSorted array is    : ";
    for (int i = 0; i < size; i++){
        cout<<array[i]<<" ";
    }
    cout<<"\n";


}

int main()
{
    int size;
    cout<<"enter size of array : ";
    cin >> size;
    int array1[size];
    cout << "enter unsorted values in the array : ";

    for (int i = 0; i < size; i++)
    {
        cin >> array1[i];
    }
    selectionSort(array1, size);
}
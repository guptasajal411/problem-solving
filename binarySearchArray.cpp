#include <iostream>
using namespace std;

int binarySearch(int n, int k, int array[])
{
    int s = 0;
    int e = n;
    while(s <= e){
        int mid = (s + e) / 2;
        if (array[mid] == k){
            return mid;
        }
        else if (array[mid] > k){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int size;
    int key;
    cout << "enter sixe of array : ";
    cin >> size;
    cout << "key : ";
    cin >> key;
    int array1[size];
    cout << "Enter array values : ";
    for (int i = 0; i < size; i++)
    {
        cin >> array1[i];
    }

    cout << binarySearch(size, key, array1);
}
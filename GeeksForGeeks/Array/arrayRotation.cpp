#include <iostream>
using namespace std;

void rotateOneElement(int array1[], int n)
{
    int temp = array1[0];
    for (int i = 0; i < n; i++)
    {
        if (i != (n - 1))
        {
            array1[i] = array1[i + 1];
        }
        else
        {
            array1[i] = temp;
        }
    }
}

void rotateByD(int array1[], int n, int d){
    for (int i = 0; i < d; i++){
        rotateOneElement(array1, n);
    }
}

void printArray(int array1[], int n){
    for (int i = 0; i < n; i++){
        cout << array1[i] << " ";
    }
}


int main()
{
    int testCases;
    cin >> testCases;
    int array2d[testCases][200];
    for (int a = 0; a < testCases; a++){
        int n;
        cin >> n;
        int d;
        cin >> d;
        int array1[n];
        for (int i = 0; i < n; i++)
        {
            cin >> array1[i];
        }
        rotateByD(array1, n, d);
        
        
        for (int j = 0; j < n; j++){
            array2d[a][j] = array1[j];
        }
    }

    for (int i = 0; i < testCases; i++){
        for (int j = 0; j < 200; j++){
            cout << array2d[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
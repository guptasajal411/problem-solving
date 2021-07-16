#include<iostream>
using namespace std;

int returnCorrectIndex(int array[], int n, int number){
    for (int i = 0; i < n; i++){
        if (array[i] < number){
            return i;
            break;
        }
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    int number = 23;
    int array[n];
    for (int i = 0; i < n; i++){
        cin >> array[n];
    }

    for (int i = 0; i < n; i++){
        cout << array[i] << " ";
    }
    cout << endl;

    for (int i = 1; i < n; i++){
        int correctIndex = returnCorrectIndex(array, n, array[i]);
        int temp = array[i];
        for (int j = i; j <= i; j++){
            array[j + 1] = array[j];
        }
        array[correctIndex] = temp;

    }
    
    for (int i = 0; i < n; i++){
        cout << array[i] << " ";
    }

    return 0;
}
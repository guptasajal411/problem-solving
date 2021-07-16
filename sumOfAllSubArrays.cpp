#include <iostream>
using namespace std;

int sumOfSubArray(int array[], int i, int j){
    int sum = 0;
    for (int a = i; a <= j; a++){
        sum = sum + array[a];
    }
    return sum;
}

int main(){
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n && j >= i; j++){
            cout << "[";
            for (int x = 0; x < (j - i + 1); x++){
                cout << array[x] << " ";
            }
            cout << "] -> [" << sumOfSubArray(array, i, j) << "]" << endl;
        }
    }
    return 0;
}
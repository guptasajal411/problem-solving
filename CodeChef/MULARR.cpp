#include <iostream>
using namespace std;

int main(){
    int testCases;
    cin >> testCases;
    int solution[testCases];
    for (int i = 0; i < testCases; i++){
        int n;
        cin >> n;
        int array[n];
        for (int j = 0; j < n; j++){
            cin >> array[j];
        }
        int multiply = array[0];
        for (int j = 1; j < n; j++){
            multiply = multiply * array[j];
        }
        solution[i] = multiply;
    }
    for (int i = 0; i < testCases; i++){
        cout << solution[i];
    }
}
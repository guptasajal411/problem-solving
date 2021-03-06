#include <iostream>
using namespace std;

void bubbleSortAlgo(int array[], int n){
    for (int j = 0; j < (n - 1); j++){
        for (int i = 0; i < (n - 1); i++){
            if (array[i] > array[i + 1]){
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}

int main(){
    int testCases;
    cin >> testCases;
    int solutionArray[testCases][1];
    for (int i = 0; i < testCases; i++){
        int n;
        cin >> n;
        int array[n];
        int k;
        for (int i = 0; i < n; i++){
            cin >> array[i];
        }
        cin >> k;
        bubbleSortAlgo(array, n);  
        solutionArray[i][0] = array[(k - 1)];
    }
    cout << "Output : " << endl;                                                     
    for (int i = 0; i < testCases; i++){
        cout << solutionArray[i][0] << endl;
    }
    return 0;
}
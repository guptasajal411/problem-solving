#include<iostream>
using namespace std;

int largestNumber(int array[], int size){
    int max = 0;
    for (int i = 0; i < size; i++){
        if (max < array[i]){
            max = array[i];
        }
    }
    return max;
}

int main(){
    int n;
    cin >> n;
    int array1[n];
    int array2[n];
    int leadArray[n];
    int modulusArray[n];
    int cumulative = 0;

    for (int i = 0; i < n; i++){
        cin >> array1[i] >> array2[i];
    }

    for (int i = 0; i < n; i++){
        cumulative = cumulative + (array1[i] - array2[i]);
        leadArray[i] = cumulative;
    }
    
    for (int i = 0; i < n; i++){
        if (leadArray[i] < 0){
            modulusArray[i] = ((-1) * leadArray[i]);
        }
        else{
            modulusArray[i] = leadArray[i];
        }
    }
    int maxInArray = largestNumber(modulusArray, n);
    
    int checker = 0;

    for (int i = 0; i < n; i++){
        if (leadArray[i] == maxInArray){
            checker = 1;
        }
    }
    if (checker == 1){
        cout << "1 " << maxInArray; 
    }
    if (checker == 0){
        cout << "2 " << maxInArray; 
    }
}

    
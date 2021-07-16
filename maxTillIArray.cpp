#include <iostream>
using namespace std;

int findMaxInArray(int array[], int n){
    int tempMaxForArray = array[0];
    for (int i = 0; i <=
     n; i++){
        if (array[i] > tempMaxForArray){
            tempMaxForArray = array[i];
        }
    }
    int maxInArray = tempMaxForArray;
    return maxInArray;
}
-p 

int main(){
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }
    int maxUptoArray[n];
    for (int i = 0; i < n; i++){
        cout << findMaxInArray(array, i) << " ";
    }
    return 0;
}
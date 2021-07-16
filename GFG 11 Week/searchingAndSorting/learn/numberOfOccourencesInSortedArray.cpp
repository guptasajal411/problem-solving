#include <iostream>
using namespace std;

int usingLinearSearch(int array[], int n, int x){
    int occourences;
    for (int i = 0; i < n; i++){
        if (array[i] == x){
            occourences = occourences + 1;
        }
    }
    return occourences;
}

int main(){
    int n, x;
    int array[n];
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }
    cin >> x;
    cout << usingLinearSearch(array, n, x);
    return 0;
}
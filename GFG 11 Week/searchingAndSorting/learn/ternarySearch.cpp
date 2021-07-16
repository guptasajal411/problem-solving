#include <iostream>
using namespace std;

int recursiveTernarySearch(int array[], int n, int k, int s, int e){
    int mid1 = (s + e) / 3;
    int mid2 = (2 * (s + e)) / 3;
    if (k == array[mid1]){
        return mid1;
    }    
    if (k == array[mid2]){
        return mid2;
    }    
    else if (k > array[mid])

}

int main(){
    int n, k;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }
    cin >> k;
}
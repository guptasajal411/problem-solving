#include<iostream>
using namespace std;

int leftMax(int n, int array[], int i){
    int leftMax = array[i];
    for (int j = 0; j < i - 1; j++){
        if (array[j] > leftMax){
            leftMax = array[j];
        }
    }
    return leftMax;
}
int rightMax(int n, int array[], int i){
    int rightMax = array[i];
    for (int j = i + 1; j < n - 1; j++){
        if (array[j] > rightMax){
            rightMax = array[j];
        }
    }
    return rightMax;
}
int main(){
    cout << "hello world whores";
    int n;
    int array[n];
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }
    cout << leftMax(n, array, 3);
    cout << rightMax(n, array, 3);
}
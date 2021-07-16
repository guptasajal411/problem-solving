#include<iostream>
using namespace std;

int factorial(int n){
    int multiplied = 1;
    for (int i = 1; i<=n; i++){
        multiplied *= i;
    }
    return multiplied;
}

void ncr(int a , int b){
    cout<<(factorial(a) / (factorial(b) * factorial(a - b)))<<" "; 
}

void triangle(int rows){
    for (int i = 0; i <= rows; i++){
        for (int j = 0; j <= i; j++){
            ncr(i, j);
        }
        cout<<endl;
    }
}

int main(){
    int n = 5;
    // cout<<"enter number of rows : ";
    // cin>>n;

    triangle(n);
}
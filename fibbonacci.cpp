#include<iostream>
using namespace std;

void fibonaaci(int n){
    int a = 0;
    int b = 1;
    int sum;
    for(int i = 1; i <= n; i++){
        cout<<a<<endl;
        sum = a + b;
        a = b;
        b = sum;
        
    }
    return;
}

int main(){
    int num;
    cout<<"Enter n : ";
    cin>>num;

    fibonaaci(num);
}
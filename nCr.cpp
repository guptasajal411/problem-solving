#include<iostream>
using namespace std;

int factorial(int num)
{
    int multiplied = 1;
    for (int i = 1; i <= num; i++)
    {
        multiplied = (multiplied * i);
    }
    return multiplied;
}

void ncr(int a , int b){
    cout<<factorial(a) / (factorial(b) * factorial(a - b));
}

int main(){
    int n, r;
    cout<<"enter n : ";
    cin >>n;
    cout<<"enter r : ";
    cin >>r;

    ncr(n, r);
    return 0;
}
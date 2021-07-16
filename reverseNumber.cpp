#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter number to be reversed : "<<endl;
    cin>>number;
    int reverse = 0;
    int original = number;
    int lastDigit;

    while (number > 0){
        lastDigit = (number % 10);
        reverse = (reverse * 10) + lastDigit;
        number = (number / 10);
    }

    cout<<"the original number is : "<<original<<endl;
    cout<<"the reversed number is : "<<reverse<<endl;

}
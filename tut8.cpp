#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    // int a = 34;
    // cout << "the value of a is " << a << endl;
    // a = 55;
    // cout << "the value of a is " << a << endl;

    //****************CONSTANTS*******************
    // const float a = 34.77;
    // cout << "the value of a is " << a << endl;
    // a = 55;
    // cout << "the value of a is " << a << endl;

    //****************MANIPULATORS*******************
    // int a = 3, b = 78, c = 878;
    // cout<<"the value of a is " << setw(4) << a << endl ;
    // cout<<"the value of b is " << setw(4) << b << endl ;
    // cout<<"the value of c is " << setw(4) << c << endl ;
    // cout<<"the value of a is " << a << endl ;
    // cout<<"the value of b is " << b << endl ;
    // cout<<"the value of c is " << c << endl ;

    //****************OPERATOR PRECEDENCE*******************
    int a = 3, b = 4;
    int c = a * 5 + b - 45 + 87; // ((((a * 5) + b) - 45) + 87)
    cout<<c<<endl;
}
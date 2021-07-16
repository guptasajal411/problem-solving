#include<iostream>
using namespace std;

int vc = 62;

int main(){

    //****************BUILT IN DATA TYPES*******************
    // int a, b, vc;
    // cout<<"\nEnter value of a \n\n";
    // cin>>a;
    // cout<<"\nEnter value of b \n\n";
    // cout<<"\n he is alreaduy f \n\n";
    // cin>>b;
    // vc = a + b;
    // cout<<"the value of vc is "<<vc<<endl<<"the value of global is "<<::vc<<endl;

    //****************FLOAT, DOUBLE AND LONG DOUBLE LITERALS*******************
    // float d = 34.4;
    // long double e = 34.4;
    // cout<<"the value of float is "<<d<<endl<<"the value of long double is "<<e<<endl;
    // cout<<"the size of 34.4 is " << sizeof(34.4)<<endl;
    // cout<<"the size of 34.4 is " << sizeof(34.4f)<<endl;
    // cout<<"the size of 34.4 is " << sizeof(34.4F)<<endl;
    // cout<<"the size of 34.4 is " << sizeof(34.4l)<<endl;
    // cout<<"the size of 34.4 is "  << sizeof(34.4L)<<endl;

    //****************REFERENCE VARIABLES*******************
    // sajal --> kunni--> chotu
    // float x = 455;
    // float &y = x;
    // cout<<x<<endl;
    // cout<<y<<endl;

    //****************TYPECASTING*******************
    int a = 45;
    float b = 50.84;
    int c = int (b);
    cout<<"the value of a is "<< float(a) <<endl;
    cout<<"the value of a is "<< (float)a <<endl;
    cout<<"the value of int b is "<< int(b) <<endl;
    cout<<"the value of int b is "<< c <<endl;

    cout<<"the expression is " << a + b << endl;
    cout<<"the expression is " << a + int(b) << endl;
    cout<<"the expression is " << a + (int)b << endl;
    

}
#include <iostream>
#include <string>
using namespace std;

int sum(int one, int two)
{
    return one + two;
}

class employee
{
public:
    string name;
    int salary;

    employee(string n, int s, int sp)
    {
        this->name = n;
        this->salary = s;
        this->secretPassword = sp;
    }

    void printDetails()
    {
        cout << "The name of first employee is " << this->name << " and his salary is " << this->salary << "$" << endl;
    }
    void getSecretPassword()
    {
        cout << "the secret password of thid employee is : " << this->secretPassword;
    }

private:
    int secretPassword;
};

int main()
{
    cout << "hi guys I am Sajal"
         << "\nfd";
    int a, b, c;
    short sa = 9;
    cout << sa;

    camelCase Notation int marksInMaths = 564;
    cout << "marks in maths is " << marksInMaths;

    short a;
    int b;
    long c;
    long long d;
    float score = 465.32;
    double score = 465.32;        // more precise
    long double score = 465.32;   // most precise
    float const score1 = 6513.12; // immutable
    cout << "float scrore is" << score;

    int a, b;
    cout << "enter first number" << endl;
    cin >> a;
    cout << "enter second number" << endl;
    cin >> b;
    cout << "a + b is " << a + b << endl;
    cout << "a - b is " << a - b << endl;
    cout << "a * b is " << a * b << endl;
    cout << "a / b is " << a / b << endl;
    cout << "a / b is " << (float)a / b << endl;
    cout << "a % b is " << a % b << endl;

    int age;
    cout << "enter age : ";
    cin >> age;
    if (age >= 18)
    {
        cout << "you can vote";
    }
    else if (age > 150 || age < 2)
    {
        cout << "invalid age";
    }
    else
    {
        cout << "you cannot vote";
    }
    return 0;

    int age;
    cout << "enter age : ";
    cin >> age;

    switch (age)
    {
    case 12:
        cout << "you are 12 years old";
        break;

    case 19:
        cout << "yop are 19 yeaers old";
        break;

    default:
        cout << "you are not 12 nor 19";
        break;
    }

    int index = 0;
    while (index < 10)
    {
        cout << "we are at index " << index << endl;
        index = index + 1;
    }

    int index = 0;
    do
    {
        cout << "we are at index " << index << endl;
        index = index + 1;
    } while (index > 20);

    int index = 0;
    for (int i = 0; i < 34; i++)
    {
        cout << "we are at index " << i << endl;
    }

    int a, b;
    cout << "enter first number" << endl;
    cin >> a;
    cout << "enter second number" << endl;
    cin >> b;
    cout << "the sum of two numbers is : " << sum(a, b);

    int arr[] = {1, 3, 6};
    cout << arr[0];
    cout << arr[1];
    cout << arr[2];
    int marks[6];
    for (int i = 0; i < 6; i++)
    {
        cout << "enter marks of " << i + 1 << " student : ";
        cin >> marks[i];
        cout << endl;
    }
    int student;
    cout << "enter roll number to see marks of student : ";
    cin >> student;
    cout << "the marks of the student is : " << marks[student - 1] << endl;
    for (int j = 0; j < 6; j++)
    {
        cout << "the marks of " << j + 1 << " student is " << marks[j + 1] << endl;
    }

    int arr2d[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "enter value of " << i + 1 << "th row and" << j + 1 << "th column : ";
            cin >> arr2d[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "value of " << i + 1 << "th row and " << j + 1 << " th column is : " << arr2d[i][j] << endl;
        }
    }

    string name = "sajal";
    cout << "the name is " << name << endl;
    cout << "the length of name is " << name.length() << endl;
    cout << "the name is " << name.substr(0, 3) << endl;
    cout << "the name is " << name.substr(2, 4) << endl;

    int a = 34;
    int *ptra;
    ptra = &a;
    cout << "the address of a is" << ptra << endl;
    cout << "the address of a is" << &a << endl;
    cout << "the value of a is " << a << endl;
    cout << "the value of a is " << *ptra << endl;

    employee ssg;
    ssg.name = "shanti swaroop gupta";
    ssg.salary = 460000;
    ssg.printDetails();
    employee sg;
    sg.name = "sajal gupta";
    sg.salary = 6000;
    sg.printDetails();
    employee sg("sajal constructor", 6000, 543545248);
    sg.printDetails();
    sg.getSecretPassword();

    return 0;
}

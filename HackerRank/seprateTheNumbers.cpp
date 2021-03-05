#include <string>
#include <vector>
#include <iostream>
using namespace std;


bool isBeautiful(string str, long long int &firstElem) {
    if (str[0]=='0') {
        return false;
    }

    if (str.size()<=1) {
        return false;
    }

    for (int i = 1; i <= str.size()/2; i++) {
        string a = str.substr(0,i);
        firstElem = stoll(a);
        int diff = 1;
        while (a.size() < str.size()) {
            a += to_string(firstElem+(diff));
            diff++;
        }
        if (a.compare(str)==0) {
            return true;
        }
    }
    return false;
}


int main()
{
    int n;
    cin >> n;
    long long int firstElem = 0;
    while (n-->0) {
        string str;
        cin >> str;
        if (isBeautiful(str, firstElem)) {
            cout << "YES " << firstElem<<endl;
        }
        else {
            cout << "NO"<<endl;
        }
    }
}
#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    char emptyChar = ' ';
    char hash = '#';
    for (int i = 0; i < n; i++){
        cout << string (n - i - 1, emptyChar) << string(i + 1, hash) << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}

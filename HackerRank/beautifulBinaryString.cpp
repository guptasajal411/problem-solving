#include <bits/stdc++.h>

using namespace std;

// Complete the beautifulBinaryString function below.
int beautifulBinaryString(string b){
    string toFind = "010";
    int change = 0;
    for (int i = 0; i < b.length() - 2; i++){
        if (toFind == b.substr(i, 3)){
            change++;
            i = i + 2;
        }
    }
    return change;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string b;
    getline(cin, b);

    int result = beautifulBinaryString(b);

    fout << result << "\n";

    fout.close();

    return 0;
}
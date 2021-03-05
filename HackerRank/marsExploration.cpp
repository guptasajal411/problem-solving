#include <bits/stdc++.h>

using namespace std;

// Complete the marsExploration function below.
int counter = 0;
int marsExploration(string s){
    for (int i = 0; i < s.length(); i++){
        if (i % 3 == 0 || i % 3 == 2){
            if (s[i] != 'S'){
                counter++;
            }
        }
        else if(i % 3 == 1){
            if (s[i] != 'O'){
                counter++;
            }
        }
    }
    return counter;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

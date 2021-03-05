#include <bits/stdc++.h>

using namespace std;

// Complete the hackerrankInString function below.
string hackerrankInString(string s) {
    vector<char> alphabet = {'k','n','a','r','r','e','k','c','a','h'};
    for (int i = 0; i < s.length(); i++){
        if (alphabet.size() == 0){
            break;
        }
        else if (s[i] == alphabet[alphabet.size() - 1]){
            alphabet.pop_back();
        }
    }
    if (alphabet.size() == 0){
        return "YES";
    }
    return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        string result = hackerrankInString(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
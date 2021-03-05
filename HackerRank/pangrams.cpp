#include <bits/stdc++.h>

using namespace std;

// Complete the pangrams function below.
string pangrams(string s) {
    bool indicator = false;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for (int i = 97; i <= 122; i++){
        for (int j = 0; j < s.length(); j++){
            if (i == s[j]){
                indicator = true;
            }
        }
        if (indicator == false){
            return "not pangram";
        }
        else if (i == 122 && indicator == true) {
            break;
        }
        else{
            indicator = false;
        }
    }
    if (indicator == true){
        return "pangram";
    }
    return 0;
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
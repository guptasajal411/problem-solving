#include <bits/stdc++.h>

using namespace std;

// Complete the camelcase function below.
int camelcase(string s) {
    int answer = 0;
    for (int i = 0; i < s.length() - 1; i++){
        if (s[i] <= 90){
            answer++;
        }
    }
    return answer + 1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

// Complete the theLoveLetterMystery function below.
int theLoveLetterMystery(string s){
    int mid, counter = 0;
    if (s.length() % 2 != 0){
        mid = (s.length() / 2) + 1;
    }
    else{
        mid = s.length() / 2;
    }
    for (int i = 0; i < mid; i++){
        counter = counter + (abs((s[i]) - (s[s.length() - 1 - i])));
    }
    return counter;
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

        int result = theLoveLetterMystery(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
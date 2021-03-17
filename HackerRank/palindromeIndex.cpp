#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string s, int i, int j){
    for (int start = i, end = j; start < end; start++, end--){
        if (s[start] != s[end]){
            return false;
        }
    }
    return true;
}

// Complete the palindromeIndex function below.
int palindromeIndex(string s){
    for (int i = 0, j = s.length() - 1; i < j; i++, j--){
        if(s[i] != s[j]){
            if (isPalindrome(s, i + 1, j)){
                return i;
            }
            if (isPalindrome(s, i, j - 1)){
                return j;
            }
            return -1;
        }
    }
    return -1;
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

        int result = palindromeIndex(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
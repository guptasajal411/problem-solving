#include <bits/stdc++.h>;

using namespace std;

int main(){

    int N,alpa[26] = {0},check = 0;
    cin >> N;
    for(int t = 0;t < N; t++){

        string str;
        cin >> str;
        for(int i = 0; i < str.size(); i++){
            if(alpa[str[i]-97] == check)alpa[str[i]-97]++;
        }
        check++;
    }
    int cnt = 0;
    for(int i = 0; i < 26; i++){

        if(alpa[i] == N)cnt++;
    }
    cout << cnt << endl;
    return 0;
}
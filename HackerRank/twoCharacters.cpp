#include <bits/stdc++.h>

using namespace std; 

int main(){
    int len;
    cin >> len;

    string s;
    cin >> s;

    vector <int > a(26,0);
    string t = "";
    int i = 0, j;

    while(s[i] != '\0')
        {
        int in  = s[i] - 97;
        a[in]++;
        i++;
    }

    for(int i = 0; i < 26; i++)
        {
        if(a[i] != 0)
            {
            t = t + char(97+i);
        }
    //   cout << a[i]<<" ";
    }

    int m = 0;

    for(int i = 0; i  <t.length(); i++)
        {
        for(int j = i+1; j < t.length(); j++)
            {
            char x = t[i];
            char y = t[j];
            string h = "";

            for(int l = 0 ; l < len; l++)
                {
                if(s[l] == x || s[l] == y )
                    {
                    h = h+ s[l];                    
                }
            }

            int f = 1;

            for(int q = 0; q < h.size()-1; q++)
                {
                if(h[q] == h[q+1])
                    {
                    f =0;
                    break;
                }
            }

            if(f && h.size() > 1)
                {
                int size = h.size();
                m = max(size,m);
            }
        }
    }

    cout << m;

    return 0;
}
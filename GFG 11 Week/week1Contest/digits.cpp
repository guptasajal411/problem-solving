    if (n >= 0 && n <= 9){
        stringstream ss;
        ss << n;
        string s;
        ss >> s;
        return s;
    }
    // int i = 1;
    for (int i = 1; i < n; i++){
        if (multipli(i) == n){
            stringstream ss;
            ss << i;
            string s;
            ss >> s;
            return s;
            break;
        }
        // i = i + 1;
    }
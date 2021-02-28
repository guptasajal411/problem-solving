#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the pageCount function below.
 */
int pageCount(int n, int p) {
    /*
     * Write your code here.
     */
     if (p % 2 == 0){
        p = p + 1;
    }
    int page_num = 1;
    vector<int> right_page_number;
    for (int i = 0; i <= n/2; ++i){
        right_page_number.push_back(page_num);
        page_num += 2;
    }
    auto index = std::find(right_page_number.begin(), right_page_number.end(), p);
    int num_of_flips_from_front = std::distance(right_page_number.begin(), index);
    int num_of_flips_from_back = (n/2) - std::distance(right_page_number.begin(), index);
    int min_flips = std::min(num_of_flips_from_front, num_of_flips_from_back);
    return min_flips;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}

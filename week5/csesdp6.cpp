#include <bits/stdc++.h>

using namespace std;

const int N = 1e9 + 7;

int main () {

    int n;
    cin >> n;

    vector <vector <int > > dp (n, vector <int > (n , 0));

    dp[0][0] = 1;

    for ( int i = 0; i < n; ++i) {


        string r;

        cin >> r;

        for (int j = 0; j < n; ++j) {

            if (r[j] == '.') {

                if (i > 0) {
                    (dp[i][j] += dp[i - 1][j]) %= N;
                }

                if (j > 0) {
                    (dp[i][j] += dp[i][j - 1]) %= N;
                }
            } else {
                dp[i][j] = 0;    
            }
        }
    }

    cout << dp[n - 1][n - 1] << "\n";

}
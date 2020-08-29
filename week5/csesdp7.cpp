#include <bits/stdc++.h>

using namespace std;

int main () {

    int n, t;

    cin >> n >> t;

    vector <int > p (n), pp (n);

    for (int i = 0; i < n; ++i) cin >> p[i];
    for (int i = 0; i < n; ++i) cin >> pp[i];


    vector <vector <int > > dp (n + 1, vector <int> (x + 1, 0));

    for (int i = 1; i <= n; ++i) {

        for (int j = 0; j <= t; ++j) {

            dp[i][j] = dp[i - 1][j];
            ont l = j - p[i - 1];
            if (l >= 0) dp[i][j] = max(dp[i][j], dp[i - 1][l] + p[i - 1]);
        }
 
    }

    cout << dp[n][t] << "\n";
}
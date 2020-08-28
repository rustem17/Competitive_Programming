#include <bits/stdc++.h>

using namespace std;

const int N = 1e9 + 7;

int main () {

    int n, t;

    cin >> n >> t;

    vector <int> a (n);

    for (int i = 0; i < n; ++i) cin >> a[i];


    vector <vector <int> > dp(n + 1, vector <int> (t + 1, 0));

    dp[0][0] = 1;

    for (int i = 1; i <= n; ++i) {

        for (int j = 0; j <= t; ++j) {

            dp[i][j] = dp[i - 1][j];
            int l = j - a[i - 1];
            if (l >= 0) (dp[i][j] += dp[i][l]) %= N;
        }
    }

    cout << dp[n][t] << "\n";
}
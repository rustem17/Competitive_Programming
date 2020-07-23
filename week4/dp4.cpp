#include <bits/stdc++.h>

using namespace std;

#define ll long long

int MOD = 1e9 + 7;

int main () {


    int n, t;

    cin >> n >> t;

    vector <int> c (n);

    for (int i = 0; i < n; ++i) cin >> c[i];

    vector <vector <int > > dp (n + 1, vector <int> (t + 1, 0));

    dp[0][0] = 1;

    for (int i = 1; i <= n; ++i) {

        for (int j = 0; j <= t; ++j) {

            dp[i][j] = dp[i - 1][j];

            int l = j - x[i - 1];
            if (l >= 0) dp[i][j] = (dp[i][j] + d[i][l]) % MOD;
        }
    }

    cout << dp[n][t] << "\n";
}
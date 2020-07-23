#include <bits/stdc++.h>

using namespace std;

#define pb push_back

int MOD = 1e9 + 7;


int main () {

    int n, t;

    cin >> n >> t;

    vector <int> c (n);

    for (int i = 0; i < n; ++i) cin >> c[i];

    vector <int> dp (t + 1, 0);

    dp[0] = 1;

    for (int i = 1; i <= t; ++i) {

        for (int j = 0; j < n; ++j) {

            if (i - c[j] >= 0) {
                dp[i] = (dp[i] + dp[i - c[j]]) % MOD;
            }
        }
    }

    cout << dp[t] << "\n";
}
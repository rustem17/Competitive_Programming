#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

int MOD = 1e9 + 7;

int main () {

    int nl t;

    cin >> n >> t;

    vector <int> c (n);

    for (int i = 0; i < n; ++i) cin >> c[i];

    vector <int> dp (t + 1, 1e9);

    dp[0] = 0;

    for (int i = 1; i <= t; ++i) {

        for (int j = 0; j < n; ++j) {

            if (i - c[j] >= 0) {
                dp[i] = min(dp[i], dp[i - c[j]] + 1);
            }
        }
    }

    if (dp[t] == 1e9) cout << "-1\n";
    else cout << dp[t] << "\n";
}
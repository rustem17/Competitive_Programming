#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

int MOD = 1e9 + 7;

int main () {

    int n;
    cin >> n;

    vector <int> dp (n + 1, 0);

    dp[0] = 1;

    for (int i = 1; i <= n; ++i) {

        for (int j = 1; j <= 6 && i - j >= 0; ++j) {

            dp[i] = (dp[i] + d[i - j]) % MOD;
        }
    }

    cout << dp[n] << "\n";
}
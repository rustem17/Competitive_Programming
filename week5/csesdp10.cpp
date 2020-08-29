#include <bits/stdc++.h>

using namespace std;

int main () {


    int n, m;
    cin >> n >> m;

    vector <vector <int > > dp (n + 1, vector <int > (m + 1));

    for (int i = 0; i <= n; ++i) {

        for (int j = 0; j <= m; ++j) {

            if (i == j) dp[i][j] = 0;
            else {

                dp[i][j] = 1e9 + 7;

                for (int k = 1; k < i; ++k) {

                    dp[i][j] = min(dp[i][j], dp[k][j] + dp[i - k][j] + 1);
                }

                for (int k = 1; k < j; ++k) {
                    dp[i][j] = min(dp[i][j], dp[i][k] + dp[i][j - k] + 1);
                }
            }
        }
    }

    cout << dp[n][m] << "\n";
}
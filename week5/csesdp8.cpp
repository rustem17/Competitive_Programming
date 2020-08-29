#include <bits/stdc++.h>

using namespace std;

const int N = 1e9 + 7;

int main () {

    int n, m;
    cin >> n >> m;

    vector <vector <int > > dp (n, vector <int> (m + 1, 0));

    int x0;

    if (x0 == 0) fill(dp[0].begin(), dp[0].end(), 1);
    else dp[0][x0] = 1;

    for (int i = 1; i < n; ++i) {

        int t;
        cin >> t;

        if (t == 0) {
            for (int j = 1; j <= m; ++j) {

                for (int k : {j - 1, j , j + 1}) {

                    if (k >= 1 && k <= m) {

                        (dp[i][j] += dp[i - 1][k]) %= N;
                    }
                }
            }
        } else {

            for (int k : {t - 1, t, t + 1}) {

                if (k >= 1 && k <= m) {
                    (dp[i][t] += dp[i - 1][k]) %= N;
                }
            }
        }

        int a = 0;
        for (int j = 1; j <= m; ++j) {

            (a += dp[n - 1][j]) %= N;
        }

        cout << a << "\n";
    }
}
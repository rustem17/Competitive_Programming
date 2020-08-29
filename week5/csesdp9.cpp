#include <bits/stdc++.h>

using namespace std;

int main () {
    

    string a, b;

    cin >> a >> b;

    int n1 = a.size();
    int n2 = b.size();

    vector <vector <int > > dp(n1 + 1, vector <int > (n2 + 1, 1e9 + 7));
    dp[0][0] = 0;

    for (int i = 0; i <= n1; ++i) {

        for (int j = 0; j <= n2; ++j) {

            if (i) dp[i][j] = min(dp[i][j], dp[i - 1][j] + 1);

            if (j) dp[i][j] = min(dp[i][j], dp[i][j - 1] + 1);

            if (i && j) dp[i][j] = min(dp[i][j], dp[i - 1][j - 1] + (a[i - 1] != b[j - 1])); 
        }
 
    }

    cout << dp[n1][n2] << "\n";
}
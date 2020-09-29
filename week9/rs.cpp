#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

const int INF = 1000000;
const int N = 1005;
const int Z = 10;
ll dp[N][Z][Z], c[N][2][Z];
vector <pair <int, pair<int, int> > > cn[2]; 
pair <int, int> pa[N][Z][Z];
ll a[N][N];

int main () {

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n, m;
    cin >> n >> m;

    for (int i = 0; i < n; ++i) 
        for (int j = 0; j < m; ++j) 
            cin >> a[i][j];
    
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            c[i][j % 2][a[i][j]]++;

    for (int i = 0; i < n; ++i) {

        cn[i % 2].clear();
        for (int j = 0; j < Z; ++j) {

            for (int k = 0; k < Z; ++k) {

                dp[i][j][k] = INF;
                if (j == k) continue;

                dp[i][j][k] = m - c[i][0][j] - c[i][1][k];

                if (i == 0) {
                    cn[0].pb({dp[0][j][k], {j, k}});
                    continue;
                }

                for (int l = 0; 1; ++l) {

                    if (cn[1 - i % 2][l].second.first != j && cn[1 - i % 2][l].second.second != k) {

                        dp[i][j][k] += cn[1 - i % 2][l].first;
                        pa[i][j][k] = {cn[1 - i % 2][l].second.first, cn[1 - i % 2][l].second.second};
                        cn[i % 2].pb({dp[i][j][k], {j, k}});
                        break;
                    }
                }
            }

            sort(cn[i % 2].begin(), cn[i % 2].end());
        }
    }


    int aa = 0, bb = 0;
    for (int i = 0; i < Z; ++i) 
        for (int j = 0; j < Z; ++j)
            if (dp[n - 1][aa][bb] > dp[n - 1][i][j]) {
                aa = i;
                bb = j;
            }
    cout << dp[n - 1][aa][bb] << "\n";

}
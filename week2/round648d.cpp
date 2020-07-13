#include <bits/stdc++.h>

#define ll long long
#define pb push_back

int main () {

    int t;
    cin >> t;

    while (t--) {
        ll n, m;

        cin >> n >> m;

        vector <vector <char > > a(n, vector <char> (m));

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> a[i][j];
            } 
        }

        auto k = [&] (int x, int y) {
            return 0 <= x && x < n && 0 <= y && y < m;
        };

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (a[i][j] == 'B') {
                    for (int k = 0; k < 4; ++k) {
                        int x = i + dx[k], y = j + dy[k];
                        if (k(x, y) && a[x][y] == '.') {
                            a[x][y] = '#';
                        }
                    }
                }
            }
        }

        vector <vector <int > > vis (n, vector <int > m ) ;
        queue <pair <int, int > > qq;
        if (a[n - 1][m - 1] != '#') {
            vis[n - 1][m - 1] = 1;
            qq.push({n - 1, m - 1});
        }

        while (!q.empty()) {

            auto p = qq.front();
            qq.pop();

            int x = p.first, y = p.second;

            for (int k = 0; k < 4; ++k) {
                int tx = x + dx[k], ty = y + dy[k];

                if (k(tx, ty) && a[tx][ty] != '#' && !vis[tx][ty]) {
                    vis[tx][ty] = 1;
                    qq.push({tx, ty});
                }
            }
        }

        bool good = true;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (a[i][j] == 'G') good &= vis[i][j];
                if (a[i][j] == 'B') good &= !vis[i][j];
            }
        }

        cout << (good ? "Yes" : "No") << "\n";
    }
}
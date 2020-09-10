#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;
int n, a, b, da, db, d[N];

vector<int> adj [N];
int dd = 0;

int dfs (int x, int p) {

    int ll = 0;
    for (int y : adj[x]) {
        if (y != p) {
            d[y] = d[x] + 1;
            int cc = 1 + dfs(y, x);
            ll = max(ll, cc);
        }
    }

    return ll;
}

int main () {

    int t;
    cin >> t;

    while (t--) {

        cin >> n >> a >> b >> da >> db;

        for (int i = 1; i <= n; ++i) adj[i].clear();
        for (int i = 0; i < n - 1; ++i) {

            int u, v;
            cin >> u >> v;

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        ddi = 0;
        d[a] = 0;

        dfs(a, -1);

        cout << (2 * da >= min(ddi, db) || d[b] <= da ? "Alice" : "Bob") << "\n";
    }
}
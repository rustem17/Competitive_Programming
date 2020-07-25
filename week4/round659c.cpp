#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

int MOD = 1e9 + 7;

int main () {

    int t;

    cin >> t;

    while (t--) {

        string a, b;
        cin >> n >> a >> b;

        bool b = 0;
        vector <vector <int > > adj(20);

        for (int i = 0; i < n; ++i) {

            if (a[i] != b[i]) {
                b = 1;
                cout << "-1\n";
                break;
            }

            adj[a[i] - 'a'].pb(b[i] - 'a');
            adj[b[i] - 'a'].pb(a[i] - 'a');
        }

        if (b) continue;


        vector <bool> m (20);

        function <void (int) > dfs = [&] (int u) {

            m[u] = 1;

            for (auto v : adj[u]) if (!m[v]) dfs(v);
        };

        int ans = 20;
        for (int i = 0; i < 20; ++i) {

            if (!m[i]) dfs(i), --ans;
        }       

        cout << ans << "\n";
    }
}
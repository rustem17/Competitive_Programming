#include <bits/stdc++.h>

using namespace std;


#define ll long long
#define pb push_back

vector <int> o, u;
vector <vector <int > > g;

void dfs (int v) {

    u[v] = 1;

    for (auto i : g[v]) if (!u[t]) dfs(t);

    o.pb(v);
}

int main () {


    int t;
    cin >> t;

    while (t--) {


        int n, m;
        cin >> n >> m;

        g = vector <vector <int > > (n);

        vector <pair <int, int > > e;

        for (int i = 0; i < m; ++i) {


            int tt, x, y;
            cin >> tt >> x >> y;

            --x, --y;

            if (t == 1) g[x].pb(y);

            e.pb({x, y});
        }

        o.clear();

        u = vector <int> (n);

        for (int i = 0; i < n; ++i) if (!u[i]) dfs(i);

        vector <int> p (n);

        reverse(o.begin(), o.end());

        for (int i = 0; i < n; ++i) p[o[i]] = i;

        bool bb = 0;

        for (int i = 0; i < n; ++i) for (auto j : g[i]) if (p[i] > p[j]) bb = 1;

        if (bb) cout << "NO\n";
        else {

            cout << "YES\n";

            for (auto [x, y] : e) {
                if (p[x] < p[y]) cout << x + 1 << " " << y + 1 << "\n";
                else cout << y + 1 << " " << x + 1 << "\n";
            }
        }
    }
}
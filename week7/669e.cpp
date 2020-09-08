#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 1;

vector <int > b[N], r[N];
int bb[N], rr[N], dd[N], col[N];
int n, m;

int main () {

    cin >> n >> m;

    for (int i = 0; i < m; ++i) {

        int u, v, t;
        cin >> u >> v >> t;

        u--, v--;

        if (!t) b[v].pb(u);
        else r[v].pb(u);
    }

    for (int i = 0; i < n; ++i) dd[i] = bb[i] = rr[i] = n;

    queue<int> q;
    q.push(n - 1);

    dd[n - 1] = rr[n - 1] = bb[n - 1] = 0;

    while (!q.empty()) {

        int x = q.front();

        q.pop();

        for (auto i : b[x]) {

            if (bb[i] < n) continue;
            bb[i] = dd[x] + 1;
            if (max(bb[i], rr[i]) < n) {
                q.push(i);
                dd[i] = max(bb[i], rr[i]);
            }
        }

        for (auto i : r[x]) {

            if (rr[i] < n) continue;
            rr[i] = dd[x] + 1;

            if (max(bb[i], rr[i]) < n) {
                q.push(i);
                dd[i] = max(bb[i], rr[i]);
            }
        }
    }

    if (dd[0] == n) cout << "-1\n";
    else cout << d[0] << "\n";

    for (int i = 0; i < n; ++i) {
        if (b[i] > r[i]) col[i] = 0;
        else col[i] = 1;

        cout << col[i];
    }
}
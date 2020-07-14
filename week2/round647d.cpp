#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

const int N = 1e7 + 1;
vector <int> adj[N];
int t[N];

int main () {

    int n, m;
    cin >> n >> m;

    while (m--) {

        int a, b;
        cin >> a >> b;

        adj[a].pb(b);
        adj[b].pb(a);
    }

    for (int i = 1; i <= n; ++i) {
        cin >> t[i];
    }

    for (int i = 1; i <= n; ++i) {

        set <int> s;

        for (int j : adj[i]) {

            if (t[j] == t[i]) {
                cout << -1 << "\n";
                return 0;
            } else if (t[j] < t[i]) {
                s.insert(t[j]);
            }
        }

        if (s.size() != t[i] - 1) {
            cout << -1 << "\n";
            return 0;
        }
    }

    pair <int, int> p[n];

    for (int i = 0; i < n; ++i) {
        p[i] = make_pair(t[i + 1], i + 1);
    }

    sort(p, p + n);

    for (int i = 0; i < n; ++i) {
        cout << p[i].second << " ";
    }

    cout << "\n";
}
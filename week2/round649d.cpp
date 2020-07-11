#include <bits/stdc++.h>
    
using namespace std;
    
#define ll long long
#define pb push_back
#define mp make_pair
    
ll p[120001];
vector <ll> v[120001], c[120001], s;
vector <ll> cycles;

bool dfs (int n) {

    p[n] = s.size();

    c[p[n] % 2].pb(n);
    s.pb(n);

    int l = 1;
    for (ll u : v[n]) {
        if (p[u] != -1 && p[n] - p[u] > 1) l = max(l, pos[u]);
    }

    if (l != 1) {
        for (ll i = l; i <= p[n]; ++i) cycles.pb(s[i]);
        return 1;
    }

    for (ll u : v[n]) {
        if (p[u] == -1) {
            if (dfs(u)) return 1;
        }
    }

    s.pop_back();
    return 0;
}

int main () {
    
    ll n, m, k;
    cin >> n >> m >> k;

    while (m--) {
        ll a, b;
        cin >> a >> b;

        v[a].pb(b);
        v[b].pb(a);
    }


    memset(p, -1, sizeof(p));
    dfs(1);

    if (cycles.empty()) {
        if (c[0].size() < c[1].size()) swap(c[0], c[1]);
        cout << "1\n";

        for (ll i = 0; i < (k + 1) / 2; ++i) cout << c[0][i] << " ";
    } else {
        
        if (cycles.size() <= k) {
            cout << "2\n" << cycles.size() << "\n";
            for (ll i : cycles) cout << i << " ";
        } else {
            cout << "1\n";
            for (ll i = 0; i < (k + 1) / 2; ++i) cout << cycles[2 * i] << " ";
        }
    }
}
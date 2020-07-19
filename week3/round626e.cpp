#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

int main () {


    int t;
    cin >>  t;
    while (t--) {


        int n, m;
        cin >> n >> m;

        int ans = 0;

        vector <int> v[n + 1];
        vector <int> c (n);
        for (int i = 1; i <= n; ++i) cin >> c[i];

        for (int i = 1; i <= m; ++i) {
            int a, b;
            cin >> a >> b;

            v[b].pb(a);
        }

        for (int i = 1; i <= n; ++i) if (v[i].size()) sort(v[i].begin(), v[i].end());
        map <vector <int, int >, int > ff;

        for (int i = 1; i <= n; ++i) if (v[i].size()) ff[v[i]] += c[i];
        for (auto &i : ff) ans += gcd(ans, i.second);
        cout << ans << "\n";

    }
}
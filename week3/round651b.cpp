#include <bits/stdc++.h>

using namespace std;

#define pb push_back

int main () {

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector <int> e, o;

        for (int i = 1; i <= 2 * n; ++i) {

            cin >> a[i];

            if (a[i] % 2) o.pb(i);
            else e.pb(i);
        }

        vector <pair <int, int > > a;

        for (int i = 0; i + 1 < o.size(); i += 2) a.pb({o[i], o[i + 1]});
        for (int i = 0; i + 1 < e.size(); i += 2) a.pb({e[i], e[i + 1]});
        for (int i = 0; i < n - 1; ++i) cout << a[i].first << " " << a[i].second << "\n"; 
    }
}
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

int main () {}

    ll x1, y1, xa, ya, xb, yb, xs, ys, t;
    cin >> x1 >> y1 >> xa >> ya >> xb >> yb >> xs >> ys >> t;

    vector <ll> x (1, x1), y (1, y1);

    ll L = (1LL << 62) - 1;

    while ((L - xb) / xa >= x.back() && (L - yb) / ya >= y.back()) {

        x.pb(xa * x.back() + xb);
        y.pb(ya * y.back() + yb);
    }

    int n = x.size();

    int ans = 0;

    for (int i = 0; i < n; ++i) {

        for (int j = i; j < n; ++j) {

            ll len = x[j] - x[i] + y[j] - y[i];
            ll dtl = abs(xs - x[i]) + abs(ys - y[i]);
            ll dtr = abs(xs - x[j]) + abs(ys - y[j]);

            if (len <= t - dtl || len <= t - dtr) ans = max(ans, j - i + 1);
        }
    }

    cout << ans << "\n";
}
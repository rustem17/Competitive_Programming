#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main () {

    int t;
    cin >> t;

    while (t--) {

        ll n, tt, a, b;

        cin >> n >> tt >> a >> b;

        vector <pair <ll, ll> > v;
        vector <int> h (n);

        int ca = 0, cb = 0;
        for (int i = 0; i < n; ++i) {

            cin >> h[i];
            if (h[i]) cb++;
            else ca++;
        }

        for (int i = 0; i < n; ++i) {

            ll ttt;
            cin >> ttt;
            v.pb({ttt, h[i]});
        } 

        v.pb({tt + 1, 0});

        sort(v.begin(), v.end());
        ll c1 = 0, c2 = 0;

        ll ans = 0;

        for (int i = 0; i <= n; ++i) {

            ll nn = c1 * a + c2 * b;
            ll hh = v[i].first - 1 - nn;

            if (hh >= 0) {
                ll cca = min((ca - c1), hh / a);
                hh -= cca * a;
                ll ccb = min((cb - c2), hh / b);
                ans = max(ans, c1 + c2 + cca + ccb);
            }

            int lll = i;

            while (lll < v.size() && v[lll].first == v[i].first) {
                if (v[lll].second) c2++;
                else c1++;

                lll++;
            }

            i = lll - 1;
        }

        cout << ans << "\n";
    }


}
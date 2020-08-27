#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main () {

    int t;
    cin >> t;
    while (t--) {

        ll p, f, c1, c2, w1, w2;
        cin >> p >> f >> c1 >> c2 >> w1 >> w2;

        ll ans = 0;

        for (ll i = 0; i <= c1 && w1 * i <= p; ++i) {

            ll j = min(c2, (p - w1 * i) / w2);
            ll cc1 = c1 - i, cc2 = c2 - j;

            ll cnt = min(cc1, f / w1);

            ll f1 = f - w1 * cnt;
            ll cnt2 = min(cc2, f1 / w2);
            ans = max(ans, i + j + cnt + cnt2);
        }

        cout << ans << "\n";
    }
}
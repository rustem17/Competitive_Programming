#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back


int main () {

    ll MOD = 1E9 + 7;

    ll t, k;
    cin >> t >> k;

    vector <pair<ll, ll > > w;
    ll mx = 0;

    while (t--) {

        ll a, b;
        cin >> a >> b;

        w.pb(make_pair(a, b));

        mx = max(b, mx);
    }

    vector <ll> tt (mx + 1);

    ll i = 1;

    for (; i < k; ++i) {
        tt[i] = 1;
    }

    
    tt[k] = 2;

    if (k > 1) {
        i = k + 1;
    } else {
        tt[k + 1] = 4;
        i = k + 2;
    }
    
    for (; i <= mx; ++i) {
        tt[i] = (tt[i - 1] + tt[i - k]) % MOD;
    }

    vector <ll> ccc (mx + 1);

    ccc[0] = 0;

    for (ll i = 1; i <= mx; i++) {
        ccc[i] = ((tt[i] + ccc[i - 1]) % MOD);
    }

    for (ll j = 0; j < w.size(); ++j) {
        
        cout << (MOD + ccc[w[j].second] - ccc[w[j].first - 1]) % MOD << "\n"; // MOD + was very important for test case 3

    }
}
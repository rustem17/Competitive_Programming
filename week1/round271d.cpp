#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back


int main () {

    ll MOD = 1E9 + 7;

    int t, k;
    cin >> t >> k;

    vector <pair<int, int > > w;
    int mx = 0;

    while (t--) {

        int a, b;
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
        tt[i] = (tt[i - 1] + tt[i - 2]) % MOD;
    }

    for (ll j = 0; j < w.size(); ++j) {
        
        ll sum = 0;

        for (ll jj = w[j].first; jj <= w[j].second; ++jj) {
            sum = (sum + tt[jj]) % MOD;
        }

        cout << sum << "\n";

    }
}
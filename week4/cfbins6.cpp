#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main () {

    ll k, n;
    cin >> k >> n;

    ll l = 0;
    ll r = 0;

    vector <ll> a (n);
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
        r += a[i];
    }

    while (l + 1 < r) {

        ll m = (l + r) / 2;

        ll sum = 0;

        for (ll i = 0; i < a.size(); ++i) {

            sum += min(m, a[i]);
        }

        if (m * k <= sum) {
            l = m;
        } else {
            r = m;

        }
    }

    cout << l << "\n";
}
#include <bits/stdc++.h>

#define ll long long
using namespace std;

bool good (ll x, ll y, ll n, ll m) {

    return (m / x) + (m / y) >= n;
}

int main () {

    ll n, x, y;

    cin >> n >> x >> y;
    n--;
    ll l = 0;
    ll r = max(x, y) * n;

    while (l + 1 < r) {

        ll m = (l + r) / 2;

        if (good(x, y, n, m)) {
            r = m;
        } else {
            l = m;
        }
    }

    cout << r + min(x, y) << "\n";
}
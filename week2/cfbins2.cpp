#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

bool good (ll w, ll h, ll n, ll m) {
    return (m / w) * (m / h) >= n;
}

int main () {

    ll w, h, n;
    cin >> w >> h >> n;

    ll l = 0;
    ll r = 1;

    while (!good(w, h, n, r)) {
        r *= 2;
    }

    while (r > l + 1) {
        ll m = (l + r) / 2;
        if (good(w, h, n , m)) r = m;
        else l = m;
    }

    cout << r << "\n";

}
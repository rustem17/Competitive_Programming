#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

using namespace std;

const ll INF = 1e18;
const int MOD = 1e9 + 7;
/*
ll fastpow (ll a, ll p, ll m) {
    if (p == 0) return 1;

    a %= MOD;
    ll z = fastpow(a, p / 2, m);
    z = (z * z) % m;
    if (p % 2) z = (z * a) % m;
    return z;
}

ll lcm (ll a, ll b) {
    return (a * b) / gcd(a, b);
}
*/

int main () {
    int n;
    cin >> n;

    int c = n - 2;

    vector <ll> a (n, 0);

    for (int i = 0; i  < n; ++i) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    ll sum = 0;
    sum += a[0];

    for (int i = 1; i < n; ++i) {
        if (c >= 2) {
            sum += a[i] * 2;
            c -= 2;
        } else {
            if (c == 1) sum += a[i];
            break;
        }
    }

    cout << sum << "\n";
}
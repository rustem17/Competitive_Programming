#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main () {

    int t;
    cin >> t;

    while (t--) {

        ll n, m;
        cin >> n >> m;

        ll ans = n * (n + 1) / 2LL;
        ll z = n - m;

        ll k = z / (m + 1);

        ans -= (m + 1) * k * (k + 1) / 2LL;
        ans -= (z % (m + 1)) * (k + 1);
        cout << ans << "\n";
    }
}
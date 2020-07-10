#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll arr[20];
ll t[18][200005];

int main () {

    ll n, m;
    cin >> n >> m;

    arr[0] = 1;
    for (ll i = 1; i < 20; ++i) arr[i] = arr[i - 1] * 2;

    for (ll i = 0; i < arr[n]; ++i) cin >> t[n][i];

    ll s = n % 2;

    for (ll i = n - 1; i >= 0; --i) {
        for (ll j = 0; j < arr[i]; ++j) {
            if (i % 2 == s) t[i][j] = t[i + 1][j * 2] ^ t[i + 1][j * 2 + 1];
            else t[i][j] = t[i + 1][j * 2] | t[i + 1][j * 2 + 1];
        }
    }

    for (ll i = 0; i < m; ++i) {
        ll p, b;

        cin >> p >> b;

        t[n][p - 1] = b;
        ll n1 = p - 1;

        for (ll j = n - 1; j >= 0; --j) {
            n1 /= 2;

            if (j % 2 == s) t[j][n1] = t[j + 1][n1 * 2] ^ t[j + 1][n1 * 2 + 1];
            else t[j][n1] = t[j + 1][n1 * 2] | t[j + 1][n1 * 2 + 1];
        }

        cout << t[0][0] << "\n";
    }
}
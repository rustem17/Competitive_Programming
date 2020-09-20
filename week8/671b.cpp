#include <bits/stdc++.h>

using namespace std;

#define ll long long
const int INF = 1e9 + 7;

int main () {


    int t;
    cin >> t;


    while (t--) {

        ll x;
        cin >> x;

        ll ans = 0;

        for (ll i = 1; ((i * (i + 1) / 2) - 1) <= x; ++i) {

            ans++;
            x -= ((i * (i + 1 / 2)) - 1);
        }

        cout << ans << "\n";
    }
}
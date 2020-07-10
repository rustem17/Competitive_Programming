#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main () {

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector <int> a (n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int x = 1;
        int mx = 0;
        map <int, int> r;

        for (int i = 0; i < n; ++i) {
            if (a[i] % k == 0) continue;
            r[k - a[i] % k]++;
            mx = max(mx, r[k - a[i] % k]);
        }

        ll res = 0;

        for (auto it = r.begin(); it != r.end(); ++it) {
            if (it -> second == mx) {
                res = k * 1LL * (it -> second - 1) + it -> first + 1;
            }
        }

        cout << res << "\n";
    }
}


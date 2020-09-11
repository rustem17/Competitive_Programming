#include <bits/stdc++.h>

using namespace std;

int main () {

    int t;
    cin >> t;

    while (t--) {

        int a, b, x, y, n;

        cin >> a >> b >> x >> y >> n;

        long long ans = 1e9;
        for (int i = 0; i < 2; ++i) {

            int d1 = min(n, a - x);
            int d2 = min(n - d1, b - y);

            ans = min(ans, (a - d1) * 1ll * (b - d2));
            swap(a, b);
            swap(x, y);
        }

        cout << ans << "\n";
    }
}
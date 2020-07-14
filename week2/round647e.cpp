#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

ll M = 1e9 + 7;
ll f (ll b, int e) {

    if (e == 0) return 1;
    if (e == 1) return b;

    ll c = (b * b) % M;
    ll t = f(c, e / 2);
    if (e % 2 == 1) t = (t * b) % M;

    return t;
}

int main () {

    int t;
    cin >> t;

    while (t--) {
        int n, p;
        cin >> n >> p;

        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        if (p == 1) {
            cout << n % 2 << "\n";
            continue;
        }

        sort(a, a + n, greater<int>());

        ll d = 1;
        bool a[n];

        for (int i = 0; i < n; ++i) a[i] = 0;

        a[0] = 1;

        bool done = 0;

        for (int i = 1; i < n; ++i) {

            int j = a[i - 1] - a[i];

            if (d) {
                while (j > 0) {
                    if (d > (1LL << 40)) {
                        done = 1;
                        for (int kk = i; kk < n; ++kk) a[i] = 0;

                        j = 0;
                    } else {
                        j--;
                        d *= p;
                    } 
                }

                if (done) break;
            }

            if (!d) {
                a[i] = 1;
                d = 1;
            } else {
                a[i] = 0;
                d--;
            }
        }

        ll ans = 0;

        for (int i = 0; i < n; ++i) {
            if (a[i]) {
                ans += f(p, a[i]);
            } else {
                ans -= f(p, a[i]);
            }
        }

        ans = ans % M;
        
        if (ans < 0) ans += M;

        assert(ans >= 0);
        assert(ans < M);

        cout << ans << "\n";
    }
}
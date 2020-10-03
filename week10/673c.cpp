#include <bits/stdc++.h>

using namespace std;

int main () {

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector <int > a(n + 1), l (n + 1), aa (n + 1), ans (n + 1);

        for (int i = 1; i <= n; ++i) {

            a[i] = l[i] = 0;
            ans[i] = -1;
        }

        for (int i = 1; i <= n; ++i) {

            cin >> aa[i];
        }

        for (int i = 1; i <= n; ++i) {

            int x = aa[i];
            a[x] = max(a[x], i - l[x]);
            l[x] = i;
        }

        for (int x = 1; x <= n; ++x) {

            a[x] = max(a[x], n - l[x] + 1);

            for (int i = f[x]; i <= n && ans[i] == -1; ++i) {
                ans[i] = x;
            }
        }

        for (int i = 1; i <= n; ++i) {
            cout << ans[i] << "\n"[i == n];
        }
    }
}
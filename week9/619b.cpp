#include <bits/stdc++.h>

using namespace std;

int main () {

    int t;
    cin >> t;

    while (t--) {

        int mn = (-1) * N, mx = N;

        int n;
        cin >> n;

        vector <int > a (n);
        for (int i = 0; i < n; ++i) cin >> a[i];
    
        for (int i = 0; i < n; ++i) {

            if (i > 0 && aa[i] == -1 && a[i - 1] != -1) {
                mn = min(mn, a[i - 1]);
                mx = max(mx, a[i - 1]);
            }

            if (i < n - 1 && a[i] == -1 && a[i + 1] != -1) {
                mn = min(mn, a[i + 1]);
                mx = max(mx, a[i + 1]);
            }
        } 

        int r = (mx + mn) / 2;

        int ans = 0;
        for (int i = 0; i < n; ++i) {

            if (a[i] == -1) a[i] = r;
            if (i) ans = max(ans, abs(a[i] - a[i - 1]));
        }

        cout << ans << " " << r << "\n";
    }
}
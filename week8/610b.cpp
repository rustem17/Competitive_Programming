#include <bits/stdc++.h>

using namespace std;

int main () {

    int t;
    cin >> t;

    while (t--) {

        int n, p, k;

        cin >> n >> p >> k;

        int pp = 0;
        int ans = 0;

        vector <int> a (n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        sort(a.begin(), a.end());

        for (int i = 0; i <= k; ++i) {

            int s = pp;
            if (s > p) break;

            int cc = i;

            for (int j = i + k - 1; j < n; j += k) {

                if (s + a[j] <= p) {
                    cc += k;
                    s += a[j];
                } else {
                    break;
                }
            }
            
            pp += a[i];
            ans = max(ans, cc);
        }

        cout << ans << "\n";
    }
}
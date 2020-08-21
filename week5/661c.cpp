#include <bits/stdc++.h>

using namespace std;

int main () {

    int t;
    cin >> t;

    while (t--) {


        int n;
        cin >> n;

        vector <int> a (n + 1);

        for (int i = 0; i < n; ++i) {

            int t;
            cin >> tt;
            a[tt]++;
        }

        int ans = 0;

        for (int i = 2; i <= 2 * n; ++i) {


            int c = 0;
            for (int j = 1; j < (i + 1) / 2; ++j) {

                if (i - j > n) continue;
                c += min(a[i], a[i - j]);
            }

            if (i % 2 == 0) c += a[i / 2] / 2;
            ans = max(ans, c);
        }

        cout << ans << "\n";
    }
}
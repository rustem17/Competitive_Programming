#include <bits/stdc++.h>

using namespace std;

int main () {

    int n, m;
    cin >> n >> m;

    vector <int> p(n);
    vector <int> d(m);

    for (int i = 0; i < n; ++i) cin >> p[i];
    for (int i = 0; i < m; ++i) cin >> d[i];


    int ans = 1 << 9 - 1;
    

    for (int i = 8; i >= 0; --i) {

        int x = ans ^ (1 << i);
        int r = 1;

        for (int ii = 0; ii < n; ++ii) {

            bool check = 0;

            for (int jj = 0; jj < m; ++jj) {

                if (((p[ii] & d[jj]) | x) != x) {
                    jj = m;
                    check = 1;
                    r = 0;
                }

            }

            if (check) {
                ii = n;
            }
        }

        if (r) ans ^= (1 << i);

    }

    cout << ans << "\n";
}
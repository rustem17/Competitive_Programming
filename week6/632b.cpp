#include <bits/stdc++.h>

using namespace std;

int main () {

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector <int> a (n), b(n);

        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];

        vector <int> g (2, 0);

        for (int i = 0; i < n; ++i) {

            if (a[i] > b[i] && !g[0]) {

                cout << "NO\n";
                return;
            } else if (a[i] < b[i] && !g[1]) {
                cout << "NO\n";
                return;
            }

            if (a[i] == -1) g[0] = 1;
            if (a[i] == 1) g[1] = 1;
        }

        cout << "YES\n";
    }
}
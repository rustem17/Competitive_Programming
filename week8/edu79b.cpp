#include <bits/stdc++.h>

using namespace std;

int main () {

    int t;
    cin >> t;

    while (t--) {

        int n, tt;
        cin >> n >> tt;

        vector <int > a (n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        int ii = 0;

        for (int i = 0; i < n; ++i) {

            if (a[i] > a[ii]) ii = i;

            tt -= a[i];
            if (tt < 0) break;
        }

        if (tt >= 0) ii = -1;

        cout << ii + 1 << "\n";
    }
}
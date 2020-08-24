#include <bits/stdc++.h>

using namespace std;

int a[1e8], b[1e8];

int main () {


    int t;
    cin >> t;

    while (t--) {

        int k = 0, m = 1e9 + 7, n;

        cin >> n;

        for (int i = 0; i < n; ++i) {

            cin >> a[i];
            b[i] = a[i];
            m = min(m, a[i]);


        } 

        sort(b, b + n);

        for (int i = 0; i < n; ++i) {

            if (a[i] != b[i] && a[i] % m > 0) k = 1;
        }

        if (k) cout << "NO\n";
        else cout << "YES\n";
    }
}
#include <bits/stdc++.h>

using namespace std;

#define pb push_back

int main () {
    
    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector <int> a (2 * n);

        for (int i = 0; i < n * 2; ++i) cin >> a[i];

        vector <int> u (n);
        vector <int> p;

        for (int i = 0; i < 2 * n; ++i) {

            if (!u[a[i] - 1]) {
                u[a[i] - 1] = 1;
                p.pb(a[i]);
            }
        }

        for (int i = 0; i < n; ++i) cout << p[i] << " ";
        cout << "\n";
    }

}
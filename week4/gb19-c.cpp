#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main () {


    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector <ll> a(n);

        ll tt = 0;
        ll xx = 0;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];

            tt += a[i];
            xx ^= a[i];
        }
        
        ll g = (1ll << 50) + tt % 2;
        tt += g;
        xx ^= g;

        ll nn = 2 * xx - tt;

        cout << 3 << "\n" << g << " " << nn / 2 << " " << nn / 2 << "\n";

    }
}
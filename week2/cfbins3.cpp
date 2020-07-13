#include <bits/stdc++.h>

#define ll long long
#define pb push_back

int main () {

    int n, k;

    cin >> n >> k;
    vector <int> a (n);

    for (int i = 0; i < n; ++i) cin >> a[i];

    double l = 0;
    double r = 1e18;

    for (int t = 0; t < 100; ++t) {
        double m = (l + r) * .5;
        int s = 0;

        for (int i = 0; i < n; ++i) {
            s += (int) (a[i] / m);
        }

        if (s >= k) l = m;
        else r = m;

        cout << setprecision(20) << t << " " << l << " " << r << "\n";
    }

    cout << setprecision(20) << l << "\n";
}
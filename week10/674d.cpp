#include <bits/stdc++.h>

using namespace std;

int main () {

    int n;
    cin >> n;

    vector <int> a (n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    set <int> d;

    d.insert(0);

    int c = 0;
    int ans = 0;

    for (int i = 0; i < n; ++i) {

        c += a[i];
        if (d.find(c) != d.end()) {

            ans += 1;
            d.clear();
            c = a[i];
        }

        d.insert(c);
    }

    cout << ans << "\n";
}
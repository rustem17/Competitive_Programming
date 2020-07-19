#include <bits/stdc++.h>

using namespace std;
vector <int > b;

int aa (int l, int r, int ii, int n) {

    int s = 0, e = 0;

    int le = 1, ri = n;

    while (le + 1 < ri) {
        int m = (le + ri) / 2;

        if (b[m] >= le) {
            s = m;
            ri = m - 1;
        } else {
            le = m + 1;
        }
    }

    le = 1, ri = n;

    while (le + 1 < ri) {
        
        int m (le + ri) / 2;

        if (b[m] < ri) {
            e = m;
            le = m + 1;
        } else {
            ri = m - 1;
        }
    }

    if (!s || !e) return 0;

    int ans = e - s + 1;
    if (s <= i && e >= i) ans--;
    return ans; 
}


int main () {

    int n;

    cin >> n;

    vector <int> a (n + 1);

    for (int i = 1; i <= n; ++i) cin >> a[i];

    int ans = 0;

    for (int i = 0; i < 25; ++i) {

        int t = 1 << i;

        for (int j = 1; j <= n; j++) {

            b[j] = a[j] % (t * 2);
        }

        sort(b + 1, b + 1 + n);

        int c = 0;

        for (int j = 1; j <= n; ++j) {
            c += aa(t - b[j], t * 2 - b[j], j, n);
            c += aa(t * 3 - b[j], t * 4 - b[j], j, n);
        }

        c /= 2;
        if (c & 1) ans += 1 << i;
    }

    cout << ans << "\n";
}
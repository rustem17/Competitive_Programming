#include <bits/stdc++.h>

using namespace std;

const int N = 1e9 + 7;
int c [N];

int main () {

    int n, q, x, c2 = 0, c4 = 0;

    char t;
    cin >> n;

    for (int i = 1; i <= n; ++i) {

        cin >> x;

        c2 -= c[x] / 2;
        c4 -= c[x] / 4;
        c[x]++;

        c2 += c[x] / 2;
        c4 += c[x] / 4;
    }

    cin >> q;

    for (int i = 1; i <= q; ++i) {

        cin >> t >> x;

        c2 -= c[x] / 2;

        c4 -= c[x] / 4;

        if (t == '+') c[x]++;
        else c[x]--;

        c2 += c[x] / 2;
        c4 += c[x] / 4;

        if (c4 >= 1 && c2 >= 4) cout << "YES\n";
        else cout << "NO\n";
    }
}
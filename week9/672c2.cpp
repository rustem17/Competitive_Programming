#include <bits/stdc++.h>

using namespace std;

vector <int> a;
int n;
int ans = 0;

void insert (int i ) {

    if (i == 0 ||  i == n + 1) return;
    if (a[i - 1] < a[i] && a[i] > a[i + 1]) ans += a[i];
    if (a[i - 1] > a[i] && a[i] < a[i + 1]) ans -= a[i];
}

void erase (int i) {

    if (i == 0 || i == n + 1) return;
    if (a[i - 1] < a[i] && a[i] > a[i + 1]) ans -= a[i];
    if (a[i - 1] > a[i] && a[i] < a[i + 1]) ans += a[i];
}

int main () {

    int t;
    cin >> t;

    while (t--) {

        int q;
        cin >> n >> q;

        for (int i = 1; i <= n; ++i) cin >> a[i];

        a[0] = -1;
        a[n + 1] = -1;

        ans = 0;

        for (int i = 1; i <= n; ++i) {

            if (a[i - 1] < a[i] && a[i] > a[i + 1]) ans += a[i];
            if (a[i - 1] > a[i] && a[i] < a[i + 1]) ans -= a[i];
        }

        cout << ans << "\n";

        while (q--) {


            int l, r;
            cin >> l >> r;

            erase(l - 1);
            erase(l);
            erase(l + 1);

            if (l != r) {

                if (r - 1 != l + 1 && r - 1 != l) erase(r - 1);
                if (r != l + 1) erase(r);
                erase(r + 1);
            }

            swap(a[l], a[r]);

            insert(l - 1);
            insert(l);
            insert(l + 1);

            if (l != r) {

                if (r - 1 != l + 1 && r - 1 != l) insert(r - 1);
                if (r != l + 1) insert(r);
                insert(r + 1);
            }

            cout << ans << "\n";
        }
    }
}
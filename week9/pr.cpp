#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

ll N = 5001;

int main () {

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a[N];
    int b[2][N];

    int n;
    cin >> n;

    a[0] = 1e9;
    a[1] = 1e9;

    for (int i = 0; i < n; ++i)
        cin >> a[i + 2];


    n += 2;

    int *nn = b[1];
    int *cn = b[0];

    cn[0] = 1;
    cn[1] = 2;

    int mn = a[0];

    for (int i = 2; i < n; ++i) {

        int mx = -1;

        for (int j = 0; j < i; ++j) {

            if (a[i] < a[j]) {

                if (mn >= a[i]) nn[j] = cn[j] + 1;
                else nn[j] = cn[j];
            } else if (a[i] == a[j]) {

                nn[j] = cn[j] + 1;
            } else {

                nn[j] = cn[j];
            }

            if (a[j] >= a[i]) {

                mx = max(mx, cn[j] + 1);
            }
        }

        nn[i] = mx;
        mn = min(mn, a[i]);
        swap(cn, nn);
    }

    int mx = -1;
    for (int i = 0; i < n; ++i) mx = max(mx, cn[i]);

    cout << mx - 2 << "\n";
}
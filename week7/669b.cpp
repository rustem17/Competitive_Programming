#include <bits/stdc++.h>

using namespace std;

int main () {

    int n;
    cin >> n;

    vector <int> a(n);

    int m = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        m = (a[i] > a[m] ? i : m);
    }    

    vector <int> b (n);

    b[0] = a[m];
    a[m] = 0;

    int c = b[0];

    for (int i = 1; i < n; ++i) {

        int ci = 0, ca = 0;

        for (int j = 0; j < n; ++j) {

            if (a[j] && __gcd(a[j], cg) > ca) {
                ca = __gcd(a[j], c);
                ci = j;
            }
        }

        b[i] = a[ci];
        c = ca;
        a[ci] = 0;
    }

    for (int i = 0; i < n; ++i) cout << b[i] << " ";

    cout << "\n";
}
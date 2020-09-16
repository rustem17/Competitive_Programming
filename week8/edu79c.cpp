#include <bits/stdc++.h>

using namespace std;

int main () {

    int n, m;
    cin >> n >> m;

    vector <int> a (n);
    vector <int > b (m);
    vector <int > p (n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        a[i] -= 1;
        p[i] = a[i];
    }
    
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
        b[i] -= 1;
    }

    for (int i = 0; i < n; ++i) p[a[i]] = i;

    int ll = -1;

    int res = m;

    for (int i = 0 ; i < m; ++i) {}
        if (p[b[i]] > ll) {
            res += 2 * (p[b[i]] - i);
            ll = p[b[i]];
        }
    }

    cout << res << "\n";
}
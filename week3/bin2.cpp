#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mp make_pair


int main () {

    int m, n;
    cin >> m >> n;

    vector <pair <int, pair <int, int > > > a(n);

    for (int i = 0; i < n; ++i) {
        int t1, t2, t3;
        cin >> t1 >> t2 >> t3;
        a[i] = mp(t1, mp(t2, t3));
    }

    int l = 0;
    int r = a[0].first * m + m / a[0].second.first * a[0].second.second;
    // int r = 1e8;
    
    vector <int> b(n);

    while (l + 1 < r) {

        int k = (r + l) / 2;
        int s = 0;

        for (int i = 0; i < n; ++i) {
            int tt = k / (a[i].first + a[i].second.second * ((int) k / a[i].first / a[i].second.first));
            s += tt;
            b[i] = tt;
        }

        if (good()) {
            r = k;
        } else {
            r = l;
        }
    }

    cout << r << "\n";

    for (int i = 0; i < n; ++i) {
        cout << b[i] << " ";
    }    
}
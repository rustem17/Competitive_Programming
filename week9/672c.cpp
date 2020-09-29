#include <bits/stdc++.h>

using namespace std;

long long c (const vector <int> & a) {

    int n = a.size();

    vector <long long> da (n +1), db (n + 2);

    da[0] = -static_cast<long long> (1e18);
    db[0] = 0;


    for (int i = 0; i < n; ++i) {

        da[i + 1] = max(da[i], db[i] + a[i]);
        db[i + 1] = max(db[i], da[i] - a[i]);
    }

    return max(da.back(), db.back());
}

int main () {

    int t;
    cin >> t;

    while (t--) {


        int n, q;
        cin >> n >> q;

        vector <int > a (n);

        for (int i = 0; i < n; ++i) cin >> a[i];

        cout << c(a) << "\n";

        for (int i = 0; i < q; ++i) {

            int l, r;
            cin >> l >> r;

            --l;
            --r;

            swap(a[l], a[r]);
            cout << c(a) << "\n";
        }
    }    
}
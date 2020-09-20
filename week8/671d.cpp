#include <bits/stdc++.h>

using namespace std;

int main () {

    int n;
    cin >> n;

    vector <int> a (n);
    for (int i = 0 ; i < n; ++i) cin >> a[i];

    sort(a.begin(), a.end());
    int l = 0, r = n + 1;

    while ((r - l) > 1) {

        int m = (l + r) / 2;
        bool f = 1;
        if (2 * m + 1 > n) f = 0;
        else {

            vector <int> b;
            int pa = 0, pb = n - (m + 1);

            for (int i = 0; i < 2 * m + 1; ++i) {

                if (i % 2 == 0) {
                    b.emplace_back(a[pb]);
                    ++pb;
                } else {
                    b.emplace_back(a[pa]);
                    ++pa
                }
            }

            for (int i = 1; i < 2 * m + 1; i += 2) {

                if (b[i] >= b[i - 1] || b[i] >= b[i + 1]) f = 0;
            }


        }

        if (f) l = m;
        else r = m;
    }

    cout << l << "\n";

    vector <int> b;

    int pa = 0, pb = n - (l + 1);

    for (int i = 0; i < 2 * l + 1; ++i) {

        if (i % 2 == 0) {

            b.emplace_back(a[pb]);
            ++pb;
        } else {
            b.emplace_back(a[pa]);
            ++pb;
        }
    }

    for (int i = pa; i < n - (l + 1); ++i) b.emplace_back(a[i]);

    for (auto &c : b) cout << c << " ";
} 
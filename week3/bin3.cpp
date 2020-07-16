#include <bits/stdc++.h>

using namespace std;

int main () {

    int n, k;
    cin >> n >> k;

    vector <int> a (n);

    for (int i  =0; i < n; ++i)  cin >> a[i];

    int l = 0;
    int r = 1e9;


    while (l + 1 < r) {
        int m = (r + l) / 2;

        int s = 0;

        for (int i = 0; i < n; ++i) {
            if (a[i] >= m)
                s += m;
        }

        if (k <= s / m) {
            l = m;
        } else {
            r = m;
        }
    }

    cout << r << "\n";
}
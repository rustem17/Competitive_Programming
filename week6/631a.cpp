#include <bits/stdc++.h>

using namespace std;

const int N = 201;

int main () {

    int tt;
    cin >> tt;
    while (tt--) {
        int n, x;

        bool a [N];

        cin >> n >> x;

        for (int i = 1; i <= n + x; ++i) a[i] = 0;

        for (int i = 1; i <= n; ++i) {
            int r;
            cin >> r;

            a[r] = 1;
        }

        for (int k = n + x; k > 0; --k) {

            int v = 0;
            for (int i = 1; i <= k; ++i) {
                if (!a[i]) ++v;
            }

            if (v <= x) {
                cout << k << "\n";
                return ;
            }
        }
    }
}
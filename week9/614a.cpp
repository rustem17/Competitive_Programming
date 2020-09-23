#include <bits/stdc++.h>

using namespace std;

int main () {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {

        int n, s, k;

        cin >> n >> s >> k;

        vector <int> a (k);
        for (int i = 0; i < k; ++i) cin >> a[i];

        for (int i = 0; i <= k; ++i) {

            if (s - i >= 1 && find(a.begin(), a.end(), s - i) == a.end()) {

                cout << i << "\n";
                return;
            }

            if (s + i <= n && find(a.begin(), a.end(), s + i) == a.end()) {
                cout << i << "\n";
                return;
            }
        }

        assert(false);
    }
}
#include <bits/stdc++.h>

using namespace std;

int main () {

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector <int> a (n);

        for (auto &i : a) cin >> i;

        int ans = a[0] == 1 ? 1 : 0;

        for (int i = 1; i < n; ++i) {
            if (a[i] == 0) continue;

            int j = i;
            while (j < n && a[j] == 1) ++j;

            ans += (j - i) / 3;
            i = j - 1;
        }

        cout << ans << "\n";
    }
}
#include <bits/stdc++.h>

using namespace std;

int main () {


    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector <int> a (n), b (n);

        for (auto &i : a) cin >> i;
        for (auto &i : b) cin >> i;

        int mn1 = *min_element(a.begin(), a.end());
        int mn2 = *min_element(b.begin(), b.end());

        long long ans = 0;

        for (int i = 0; i < n; ++i) {

            ans += max(a[i] - mn1, b[i] - mn2);
        }

        cout << ans << "\n";
    }
}
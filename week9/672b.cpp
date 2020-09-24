#include <bits/stdc++.h>

using namespace std;

int main () {

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector <int> a (n);

        for (int i = 0; i < n; ++i) cin >> a[i];

        long long ans = 0;

        for (int i = 29; i >= 0; --i) {

            long long cc = 0;

            for (int j = 0; j < n; ++j) {

                if (a[i] >= (1 << j) && a[i] < (1 << (j + 1))) cc++;
            }
            ans += cc * (cc - 1) / 2;
        }
        cout << ans << "\n";
    }    


}
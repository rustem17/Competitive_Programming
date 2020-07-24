#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

int main () {


    int t;
    cin >> t;

    while (t--) {

        int n, x;
        cin >> n >> x;

        vector <int> a (n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        int ans = 0;

        int mx = 0;

        for (int i = 0; i < n; i++) {

            if (a[i] == x) {
                ans = 1;
                i = n;
            }

            mx = max(mx, a[i]);
     
        }

        if (!ans) ans = max(2, (x + mx - 1) / mx);
        cout << ans << "\n";
    }

}
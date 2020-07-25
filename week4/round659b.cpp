#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

int MOD = 1e9 + 7;

int main () {

    int t;
    cin >> t;

    while (t--) {

        int n, k, l;

        cin >> n >> k >> l;

        vector <int> d (n + 1), s = {0};

        for (int i = 1; i <= n; ++i) {

            cin >> d[i];

            if (d[i] + k <= 1) s.pb(i);
        }

        s.pb(n + 1);
        bool ok = 1;

        for (int i = 0; i < s.size() && ok; ++i) {

            int tt = k; bool dd = 1;

            for (int j = s[i - 1] + 1; j < s[i]; ++j) {

                tt += dd ? -1 : 1;

                if (dd) tt -= max(0, d[j] + tt - l);

                if (tt < 0 || d[j] + tt > 1) {
                    ok = 0;
                    break;
                }

                if (tt == 0) dd = 0;
            }
        }

        if (ok) cout << "Yes\n";
        else cout << "No\n";
    }
}
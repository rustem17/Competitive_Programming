#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define ll long long

int MOD = 1e9 + 7;

int main () {

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        int c[1000001];

        string s;
        cin >> s;

        for (int i = 0; i < s.size(); ++i) {

            if (i) c[i] = c[i - 1] * 2 % MOD;
            else c[i] = 2;
        }

        int d = ans = 0;

        for (int i = n - 1; i >= 0; --i) {

            if (s[i] == 'B') {
                if (d < k) {
                    d++;
                    continue;
                }

                ans = (ans + c[i]) % MOD;
            }

            d = max(d - 1, 0);
        }

        cout << ans << "\n";
    }
}
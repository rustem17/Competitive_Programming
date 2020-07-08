#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back



const int MOD = 1e9 + 7;


int main () {

    int n, k;
    cin >> n >> k;

    vector <int> t[4];
    vector <int> s[4];

    for (int i = 0; i < n; ++i) {
        int tt, a, b;
        cin >> tt >> a >> b;

        t[a * 2 + b].pb(tt);
    }

    // getting prefix sums
    for (int i = 0; i < 4; ++i) {
        sort(t[i].begin(), t[i].end());
        s[i].pb(0);
        for (auto it : t[i]) {
            s[i].pb(s[i].back() + it);
        }
    }

    // calculate till k + 1 or till size of both reading books time array
    int ans = 2e9 + 1;
    for (int i = 0; i < min(k + 1, int(s[3].size())); ++i) {
        // if k - so far read books is less than left sizes of time vectors for alice and bob
        if (k - i < int(s[1].size()) && k - i < int(s[2].size())) {
            // choosing minimum combination of read books
            ans = min(ans, s[3][i] + s[1][k - i] + s[2][k - i]);
        }
    }

    if (ans == 2e9 + 1) cout << "-1\n";
    else cout << ans << "\n";

}
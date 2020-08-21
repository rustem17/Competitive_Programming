#include <bits/stdc++.h>

using namespace std;

vector <vector <int>> rg;
vector <vector <int>> dp; 

int dd (int l, int r) {


    if (dp[l][r] != -1) return dp[l][r];
    dp[l][r] = 0;

    if (l > r) return dp[l][r];
    bool a = count(rg[l].begin(), rg[l].end(), r);
    dp[l][r] = max(dp[l][r], a + (l + 1 > r ? 0 : dd(l + 1, r)));

    for (auto ii : rg[l]) {

        if (ii >= r) continue;
        dp[l][r] = max(dp[l][r], a + dd(l, ii) + (ii + 1 > r ? 0 : dd(ii + 1, r)));
    }

    return dp[l][r];
}

int main () {

    int t;
    cin >> t;

    while (t--) {


        int n;
        cin >> n;

        vector <int> l (n), r (n);
        vector <int> v;

        for (int i = 0; i < n; ++i) {

            cin >> l[i] >> r[i];
            v.push_back(l[i]);
            v.push_back(r[i]);
        }

        sort(v.begin(), v.end());
        v.resize(unique(v.begin(), v.end()) - v.begin());
        for (int i = 0; i < n; ++i) {

            l[i] = lower_bound(v.begin(), v.end(), l[i]) - v.begin();
            r[i] = lower_bound(v.begin(), v.end(), r[i]) - v.begin();
        }

        int ss = v.size();

        dp = vector <vector <int > > (ss, vector <int> (ss, -1));
        rg = vector <vector <int > > (ss);

        for (int  i = 0; i < n; ++i) {

            rg[l[i]].push_back(r[i]);
        }

        cout << dd(0, ss - 1) << "\n";
    }

}
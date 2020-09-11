#include <bits/stdc++.h>

using namespace std;

int main () {

    int t;
    cin >> t;

    while (t--) {

        int n, x, y;
        cin >> n >> x >> y;

        for (int d = 1; d <= y - x; ++d) {

            if ((y - x) % d != 0) continue;

            vector <int> r;
            bool foundx = 0;

            int cc = y;
            int need = n;
            while (c >= 1 && need > 0) {
                r.push_back(cc);
                foundx |= cc == x;
                --need;
                cc -= d;
            }

            cc = y;

            while (need > 0) {
                cc += d;
                r.push_back(cc);
                --need;
            }

            sort(r.begin(), r.end());
            if (need == 0 && foundx) {
                if (ans.empty() || ans.back() > r.back()) ans = r;
            }
        }

        assert(!ans.empty());
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
}
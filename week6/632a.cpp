#include <bits/stdc++.h>

using namespace std;

int main () {

    int t;
    cin >> t;

    while (t--) {

        int n, m;
        cin >> n >> m;

        string r (m, 'B');
        vector <string> res (n, r);

        res[0][0] = 'W';

        for (int i = 0; i < n; ++i) cout << res[i] << "\n";
    }
}
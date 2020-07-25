#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back

int MOD = 1e9 + 7;

int main () {

    int t;

    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector <int> a (n);
        int x;

        for (auto &i : a) {
            cin >> i;
            x ^= i;
        }

        if (x == 0) {
            cout << "DRAW\n";
            continue;
        }

        for (int k = 30; k >= 0; --k) {

            if (x >> k & 1) {

                vector <int> f (2);

                for (auto &i : a) ++f[i >> k & 1];

                if (f[1] % 4 == 3 && f[0] % 2 == 0) cout << "LOSE\n";
                else cout << "WIN\n";

                break;
            }
        }
    }
}